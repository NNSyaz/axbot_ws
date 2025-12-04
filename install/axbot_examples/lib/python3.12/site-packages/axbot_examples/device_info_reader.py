import rclpy
from rclpy.node import Node
from axbot_interfaces.msg import DeviceInfo


class DeviceInfoReader(Node):
    def __init__(self):
        super().__init__('device_info_reader')
        
        self.subscription = self.create_subscription(
            DeviceInfo,
            '/axbot/device_info',
            self.device_info_callback,
            10
        )
        
        self.get_logger().info('Device Info Reader started')
        self.get_logger().info('Waiting for device info...')
    
    def device_info_callback(self, msg):
        self.get_logger().info('\\n' + '='*50)
        self.get_logger().info('AxBot Device Information:')
        self.get_logger().info('='*50)
        self.get_logger().info(f'Model: {msg.model}')
        self.get_logger().info(f'Serial Number: {msg.serial_number}')
        self.get_logger().info(f'Nickname: {msg.nickname}')
        self.get_logger().info(f'ROS Version: {msg.rosversion}')
        self.get_logger().info(f'ROS Distro: {msg.rosdistro}')
        self.get_logger().info(f'AxBot Version: {msg.axbot_version}')
        self.get_logger().info('\\nRobot Dimensions:')
        self.get_logger().info(f'  Inscribed Radius: {msg.inscribed_radius:.3f} m')
        self.get_logger().info(f'  Height: {msg.height:.3f} m')
        self.get_logger().info(f'  Width: {msg.width:.3f} m')
        self.get_logger().info(f'  Wheel Distance: {msg.wheel_distance:.3f} m')
        self.get_logger().info('='*50)


def main(args=None):
    rclpy.init(args=args)
    node = DeviceInfoReader()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
