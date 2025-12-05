import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
import asyncio
import threading
import math

# ROS2 messages
from sensor_msgs.msg import LaserScan
from rclpy.qos import QoSProfile, ReliabilityPolicy, DurabilityPolicy
from geometry_msgs.msg import Twist, Pose, Point, Quaternion, TransformStamped
from nav_msgs.msg import Odometry
from std_msgs.msg import Header
from tf2_ros import TransformBroadcaster

# Custom interfaces
from axbot_interfaces.msg import (
    DeviceInfo, WheelState, SlamState, PlanningState, RobotPose
)
from axbot_interfaces.srv import (
    SetControlMode, SetEmergencyStop, GetDeviceInfo
)

# AxBot clients
from .rest_client import AxBotRestClient
from .websocket_client import AxBotWebSocketClient


class AxBotNode(Node):
    """
    ROS2 node for AxBot Fielder robot with security and SLAM support.
    """
    
    def __init__(self):
        super().__init__('axbot_node')
        self.ws_loop = None

        # Declare parameters
        self.declare_parameters_from_yaml()
        
        # Get parameters
        self.robot_ip = self.get_parameter('robot_ip').value
        self.robot_port = self.get_parameter('robot_port').value
        self.secret = self.get_parameter('secret').value
        self.ws_url = self.get_parameter('ws_url').value
        self.reconnect_interval = self.get_parameter('reconnect_interval').value
        self.device_info_rate = self.get_parameter('device_info_rate').value
        self.base_frame = self.get_parameter('base_frame').value
        self.odom_frame = self.get_parameter('odom_frame').value
        self.initial_control_mode = self.get_parameter('initial_control_mode').value
        self.subscribe_topics = self.get_parameter('subscribe_topics').value
        self.twist_timeout = self.get_parameter('twist_timeout').value
        
        self.get_logger().info(f'AxBot Node starting for robot at {self.robot_ip}')
        
        # Initialize REST client
        self.rest_client = AxBotRestClient(
            self.robot_ip,
            self.robot_port,
            self.secret
        )
        
        # Initialize state variables
        self.current_pose = None
        self.last_pose_time = None
        self.device_info_data = None
        self.last_scan_time = self.get_clock().now()
        
        # Create callback group for services
        self.service_cb_group = ReentrantCallbackGroup()
        
        # Publishers
        self.pose_pub = self.create_publisher(
            RobotPose, '/axbot/pose', 10
        )
        self.odom_pub = self.create_publisher(
            Odometry, '/axbot/odom', 10
        )
        self.device_info_pub = self.create_publisher(
            DeviceInfo, '/axbot/device_info', 10
        )
        self.slam_state_pub = self.create_publisher(
            SlamState, '/axbot/slam_state', 10
        )
        self.wheel_state_pub = self.create_publisher(
            WheelState, '/axbot/wheel_state', 10
        )
        self.planning_state_pub = self.create_publisher(
            PlanningState, '/axbot/planning_state', 10
        )
        
        # QoS profile for sensor data
        self.sensor_qos = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.VOLATILE,
            depth=10
        )

        # LaserScan publisher - CRITICAL for SLAM
        self.scan_pub = self.create_publisher(
            LaserScan,
            '/scan',
            self.sensor_qos
        )
        
        # TF broadcaster
        self.tf_broadcaster = TransformBroadcaster(self)
        
        # Subscribers
        self.cmd_vel_sub = self.create_subscription(
            Twist,
            '/axbot/cmd_vel',
            self.cmd_vel_callback,
            10
        )
        
        # Services
        self.set_control_mode_srv = self.create_service(
            SetControlMode,
            '/axbot/set_control_mode',
            self.set_control_mode_callback,
            callback_group=self.service_cb_group
        )
        self.set_emergency_stop_srv = self.create_service(
            SetEmergencyStop,
            '/axbot/set_emergency_stop',
            self.set_emergency_stop_callback,
            callback_group=self.service_cb_group
        )
        self.get_device_info_srv = self.create_service(
            GetDeviceInfo,
            '/axbot/get_device_info',
            self.get_device_info_callback,
            callback_group=self.service_cb_group
        )
        
        # Timer for device info publishing
        self.device_info_timer = self.create_timer(
            1.0 / self.device_info_rate,
            self.publish_device_info
        )
        
        # Initialize WebSocket client
        self.ws_client = AxBotWebSocketClient(
            ws_url=self.ws_url,
            topics_to_subscribe=self.subscribe_topics,
            message_callback=self.websocket_message_callback,
            reconnect_interval=self.reconnect_interval
        )
        
        # Start WebSocket in separate thread
        self.ws_thread = threading.Thread(target=self.run_websocket, daemon=True)
        self.ws_thread.start()
        
        # Set initial control mode
        if self.initial_control_mode:
            self.get_logger().info(f'Setting control mode to: {self.initial_control_mode}')
            self.rest_client.set_control_mode(self.initial_control_mode)
        
        # Fetch device info once
        self.fetch_device_info()
        
        self.get_logger().info('AxBot Node initialized successfully')
        self.get_logger().info('Waiting for scan data from WebSocket...')
    
    def declare_parameters_from_yaml(self):
        """Declare all parameters with default values."""
        self.declare_parameter('robot_ip', '192.168.0.250')
        self.declare_parameter('robot_port', 8090)
        self.declare_parameter('secret', '')
        self.declare_parameter('ws_url', 'ws://192.168.0.250:8090/ws/v2/topics')
        self.declare_parameter('reconnect_interval', 5.0)
        self.declare_parameter('device_info_rate', 0.1)
        self.declare_parameter('base_frame', 'base_link')
        self.declare_parameter('odom_frame', 'odom')
        self.declare_parameter('initial_control_mode', 'remote')
        self.declare_parameter('subscribe_topics', [
            '/tracked_pose',
            '/slam_state',
            '/wheel_state',
            '/planning_state',
            '/scan_matched_points2',
            '/horizontal_laser_2d/matched',
        ])
        self.declare_parameter('twist_timeout', 2.0)
        
    def handle_scan_matched_points(self, data: dict):
        """Convert scan_matched_points2 to LaserScan - FIXED VERSION"""
        try:
            points = data.get('points', [])
            if not points:
                self.get_logger().warn('No points in scan data', throttle_duration_sec=5.0)
                return
            
            # Log first scan
            current_time = self.get_clock().now()
            if (current_time - self.last_scan_time).nanoseconds > 5e9:  # Every 5 seconds
                self.get_logger().info(f'Processing scan with {len(points)} points')
                self.last_scan_time = current_time
            
            # LaserScan parameters for 360-degree scan
            angle_min = -math.pi
            angle_max = math.pi
            angle_increment = math.radians(0.5)  # 0.5 degree resolution for better quality
            num_readings = int((angle_max - angle_min) / angle_increment)
            range_min = 0.15
            range_max = 12.0
            
            # Initialize ranges with max value (no obstacle)
            ranges = [range_max] * num_readings
            intensities = [0.0] * num_readings
            
            # Convert points to polar coordinates and fill ranges
            points_processed = 0
            for point in points:
                if len(point) < 2:
                    continue
                
                x, y = float(point[0]), float(point[1])
                
                # Calculate range and angle
                range_val = math.sqrt(x*x + y*y)
                angle = math.atan2(y, x)
                
                # Skip if out of valid range
                if range_val < range_min or range_val > range_max:
                    continue
                
                # Calculate index in the ranges array
                index = int((angle - angle_min) / angle_increment)
                
                # Ensure index is within bounds
                if 0 <= index < num_readings:
                    # Keep minimum range for this angle (closest obstacle)
                    if range_val < ranges[index]:
                        ranges[index] = range_val
                        # Set intensity if available
                        if len(point) > 3:
                            intensities[index] = float(point[3])
                        points_processed += 1
            
            if points_processed == 0:
                self.get_logger().warn('No valid points after filtering', throttle_duration_sec=5.0)
                return
            
            # Create and publish LaserScan message
            scan = LaserScan()
            scan.header.stamp = self.get_clock().now().to_msg()
            scan.header.frame_id = 'base_scan'  # Must match URDF
            scan.angle_min = angle_min
            scan.angle_max = angle_max
            scan.angle_increment = angle_increment
            scan.time_increment = 0.0
            scan.scan_time = 0.1
            scan.range_min = range_min
            scan.range_max = range_max
            scan.ranges = ranges
            scan.intensities = intensities
            
            self.scan_pub.publish(scan)
            
        except Exception as e:
            self.get_logger().error(f'Error converting point cloud: {e}')
                
    def run_websocket(self):
        """Run WebSocket client in asyncio event loop"""
        self.ws_loop = asyncio.new_event_loop()
        asyncio.set_event_loop(self.ws_loop)
        self.ws_loop.run_until_complete(self.ws_client.run())

    def websocket_message_callback(self, topic: str, data: dict):
        """Handle incoming WebSocket messages."""
        try:
            if topic == '/tracked_pose':
                self.handle_tracked_pose(data)
            elif topic == '/slam_state':
                self.handle_slam_state(data)
            elif topic == '/wheel_state':
                self.handle_wheel_state(data)
            elif topic == '/planning_state':
                self.handle_planning_state(data)
            elif topic == '/scan_matched_points2':
                self.handle_scan_matched_points(data)
            elif topic == '/horizontal_laser_2d/matched':
                # Alternative scan topic
                self.handle_scan_matched_points(data)
        except Exception as e:
            self.get_logger().error(f'Error handling {topic}: {e}')

    def handle_tracked_pose(self, data: dict):
        """Handle /tracked_pose messages from robot."""
        pos = data.get('pos', [0.0, 0.0])
        ori = data.get('ori', 0.0)
        
        # Publish RobotPose
        pose_msg = RobotPose()
        pose_msg.x = pos[0]
        pose_msg.y = pos[1]
        pose_msg.orientation = ori
        self.pose_pub.publish(pose_msg)
        
        # Publish Odometry
        odom_msg = Odometry()
        odom_msg.header = Header()
        odom_msg.header.stamp = self.get_clock().now().to_msg()
        odom_msg.header.frame_id = self.odom_frame
        odom_msg.child_frame_id = self.base_frame
        
        # Set position
        odom_msg.pose.pose.position = Point(x=pos[0], y=pos[1], z=0.0)
        
        # Convert orientation to quaternion
        quat = self.yaw_to_quaternion(ori)
        odom_msg.pose.pose.orientation = quat
        
        # Publish odometry
        self.odom_pub.publish(odom_msg)
        
        # Broadcast TF
        self.broadcast_tf(pos[0], pos[1], ori)
        
        # Store for velocity calculation
        self.current_pose = (pos[0], pos[1], ori)
        self.last_pose_time = self.get_clock().now()
    
    def handle_slam_state(self, data: dict):
        """Handle /slam_state messages."""
        msg = SlamState()
        msg.state = data.get('state', 'unknown')
        msg.reliable = data.get('reliable', False)
        self.slam_state_pub.publish(msg)
    
    def handle_wheel_state(self, data: dict):
        """Handle /wheel_state messages."""
        msg = WheelState()
        msg.control_mode = data.get('control_mode', 'unknown')
        msg.emergency_stop_pressed = data.get('emergency_stop_pressed', False)
        self.wheel_state_pub.publish(msg)
    
    def handle_planning_state(self, data: dict):
        """Handle /planning_state messages."""
        msg = PlanningState()
        msg.move_state = data.get('move_state', 'unknown')
        msg.going_back_to_charger = data.get('going_back_to_charger', False)
        msg.action_id = data.get('action_id', -1)
        self.planning_state_pub.publish(msg)
    
    def cmd_vel_callback(self, msg: Twist):
        """Handle velocity commands"""
        if not self.ws_client.is_connected:
            self.get_logger().warn('WebSocket not connected, cannot send cmd_vel')
            return

        if self.ws_loop is None:
            self.get_logger().warn('WebSocket loop not ready')
            return

        # Send async coroutine to websocket event loop
        asyncio.run_coroutine_threadsafe(
            self.ws_client.send_twist(
                msg.linear.x,
                msg.angular.z
            ),
            self.ws_loop
        )
    
    def broadcast_tf(self, x: float, y: float, yaw: float):
        """Broadcast TF transform from odom to base_link."""
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = self.odom_frame
        t.child_frame_id = self.base_frame
        
        t.transform.translation.x = x
        t.transform.translation.y = y
        t.transform.translation.z = 0.0
        
        quat = self.yaw_to_quaternion(yaw)
        t.transform.rotation = quat
        
        self.tf_broadcaster.sendTransform(t)
    
    def yaw_to_quaternion(self, yaw: float) -> Quaternion:
        """Convert yaw angle to quaternion."""
        quat = Quaternion()
        quat.x = 0.0
        quat.y = 0.0
        quat.z = math.sin(yaw / 2.0)
        quat.w = math.cos(yaw / 2.0)
        return quat
    
    def fetch_device_info(self):
        """Fetch device information from robot via REST API."""
        info = self.rest_client.get_device_info()
        if info:
            self.device_info_data = info
            self.get_logger().info(f'Device: {info.get("device", {}).get("model", "unknown")}')
    
    def publish_device_info(self):
        """Publish device info periodically."""
        if not self.device_info_data:
            return
        
        msg = DeviceInfo()
        msg.rosversion = self.device_info_data.get('rosversion', '')
        msg.rosdistro = self.device_info_data.get('rosdistro', '')
        msg.axbot_version = self.device_info_data.get('axbot_version', '')
        
        device = self.device_info_data.get('device', {})
        msg.model = device.get('model', '')
        msg.serial_number = device.get('sn', '')
        msg.device_name = device.get('name', '')
        msg.nickname = device.get('nickname', '')
        
        robot = self.device_info_data.get('robot', {})
        msg.inscribed_radius = float(robot.get('inscribed_radius', 0.0))
        msg.height = float(robot.get('height', 0.0))
        msg.thickness = float(robot.get('thickness', 0.0))
        msg.wheel_distance = float(robot.get('wheel_distance', 0.0))
        msg.width = float(robot.get('width', 0.0))
        
        self.device_info_pub.publish(msg)
    
    # Service callbacks
    def set_control_mode_callback(self, request, response):
        """Handle set_control_mode service requests."""
        success = self.rest_client.set_control_mode(request.mode)
        response.success = success
        response.message = f'Control mode set to {request.mode}' if success else 'Failed'
        return response
    
    def set_emergency_stop_callback(self, request, response):
        """Handle set_emergency_stop service requests."""
        success = self.rest_client.set_emergency_stop(request.enable)
        response.success = success
        response.message = 'Emergency stop set' if success else 'Failed'
        return response
    
    def get_device_info_callback(self, request, response):
        """Handle get_device_info service requests."""
        if self.device_info_data:
            msg = DeviceInfo()
            msg.rosversion = self.device_info_data.get('rosversion', '')
            msg.rosdistro = self.device_info_data.get('rosdistro', '')
            msg.axbot_version = self.device_info_data.get('axbot_version', '')
            
            device = self.device_info_data.get('device', {})
            msg.model = device.get('model', '')
            msg.serial_number = device.get('sn', '')
            msg.device_name = device.get('name', '')
            msg.nickname = device.get('nickname', '')
            
            robot = self.device_info_data.get('robot', {})
            msg.inscribed_radius = float(robot.get('inscribed_radius', 0.0))
            msg.height = float(robot.get('height', 0.0))
            msg.thickness = float(robot.get('thickness', 0.0))
            msg.wheel_distance = float(robot.get('wheel_distance', 0.0))
            msg.width = float(robot.get('width', 0.0))
            
            response.success = True
        else:
            response.success = False
        return response
    
    def destroy_node(self):
        """Clean shutdown."""
        self.get_logger().info('Shutting down AxBot node...')
        
        if self.ws_loop and self.ws_loop.is_running():
            asyncio.run_coroutine_threadsafe(
                self.ws_client.stop(),
                self.ws_loop
            )
        
        self.rest_client.close()
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    
    node = AxBotNode()
    
    # Use MultiThreadedExecutor for service callbacks
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()