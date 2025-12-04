#!/bin/bash
###############################################################################
# AxBot SLAM and RViz Visualization Setup
# This script creates everything needed to view robot, map, and scan in RViz
###############################################################################

WORKSPACE="/media/roboserver/DATA/axbot_ws"
GREEN='\033[0;32m'
BLUE='\033[0;34m'
NC='\033[0m'

echo -e "${GREEN}╔═══════════════════════════════════════════════════════════╗${NC}"
echo -e "${GREEN}║      AxBot SLAM & RViz Visualization Setup               ║${NC}"
echo -e "${GREEN}╚═══════════════════════════════════════════════════════════╝${NC}"
echo ""

cd "${WORKSPACE}/src"

# ============================================================================
# 1. Install Required Packages
# ============================================================================
echo -e "${BLUE}[1/7] Installing SLAM and visualization packages...${NC}"

sudo apt update
sudo apt install -y \
    ros-jazzy-slam-toolbox \
    ros-jazzy-nav2-map-server \
    ros-jazzy-rviz2 \
    ros-jazzy-rviz-default-plugins

echo -e "${GREEN}✓ Packages installed${NC}"

# ============================================================================
# 2. Create Scan Bridge Node (if robot publishes scan on different topic)
# ============================================================================
echo -e "${BLUE}[2/7] Creating scan bridge node...${NC}"

cat > axbot_driver/axbot_driver/scan_bridge.py << 'EOFPY'
#!/usr/bin/env python3
"""
Scan Bridge - Subscribes to robot's scan topic and republishes
with correct frame_id and QoS for RViz/SLAM
"""
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, DurabilityPolicy
from sensor_msgs.msg import LaserScan

class ScanBridge(Node):
    def __init__(self):
        super().__init__('scan_bridge')
        
        # Declare parameters
        self.declare_parameter('input_topic', '/scan')
        self.declare_parameter('output_topic', '/scan')
        self.declare_parameter('frame_id', 'base_scan')
        
        input_topic = self.get_parameter('input_topic').value
        output_topic = self.get_parameter('output_topic').value
        self.frame_id = self.get_parameter('frame_id').value
        
        # QoS for sensor data (best effort)
        qos_sensor = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.VOLATILE,
            depth=10
        )
        
        # Create subscriber and publisher
        self.subscription = self.create_subscription(
            LaserScan,
            input_topic,
            self.scan_callback,
            qos_sensor
        )
        
        self.publisher = self.create_publisher(
            LaserScan,
            output_topic,
            qos_sensor
        )
        
        self.get_logger().info(f'Scan bridge: {input_topic} -> {output_topic}')
        self.get_logger().info(f'Frame ID: {self.frame_id}')
    
    def scan_callback(self, msg):
        # Update frame_id if needed
        msg.header.frame_id = self.frame_id
        msg.header.stamp = self.get_clock().now().to_msg()
        self.publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = ScanBridge()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
EOFPY

# Add to setup.py
if ! grep -q "scan_bridge" axbot_driver/setup.py; then
    sed -i "/axbot_node = axbot_driver.axbot_node:main/a\            'scan_bridge = axbot_driver.scan_bridge:main'," axbot_driver/setup.py
fi

echo -e "${GREEN}✓ Scan bridge created${NC}"

# ============================================================================
# 3. Create RViz Configuration for SLAM
# ============================================================================
echo -e "${BLUE}[3/7] Creating RViz configuration...${NC}"

mkdir -p axbot_driver/rviz

cat > axbot_driver/rviz/slam_view.rviz << 'EOF'
Panels:
  - Class: rviz_common/Displays
    Name: Displays
  - Class: rviz_common/Selection
    Name: Selection
  - Class: rviz_common/Tool Properties
    Name: Tool Properties
  - Class: rviz_common/Views
    Name: Views

Visualization Manager:
  Class: ""
  Displays:
    - Alpha: 0.5
      Cell Size: 1
      Class: rviz_default_plugins/Grid
      Color: 160; 160; 164
      Enabled: true
      Line Style:
        Line Width: 0.03
        Value: Lines
      Name: Grid
      Normal Cell Count: 0
      Offset:
        X: 0
        Y: 0
        Z: 0
      Plane: XY
      Plane Cell Count: 20
      Reference Frame: <Fixed Frame>
      Value: true
      
    - Class: rviz_default_plugins/TF
      Enabled: true
      Frame Timeout: 15
      Frames:
        All Enabled: true
      Name: TF
      Show Arrows: true
      Show Axes: true
      Show Names: true
      Update Interval: 0
      Value: true
      
    - Alpha: 0.7
      Class: rviz_default_plugins/Map
      Color Scheme: map
      Draw Behind: false
      Enabled: true
      Name: Map
      Topic:
        Depth: 5
        Durability Policy: Volatile
        History Policy: Keep Last
        Reliability Policy: Reliable
        Value: /map
      Update Topic:
        Depth: 5
        Durability Policy: Volatile
        History Policy: Keep Last
        Reliability Policy: Reliable
        Value: /map_updates
      Use Timestamp: false
      Value: true
      
    - Alpha: 1
      Autocompute Intensity Bounds: true
      Autocompute Value Bounds:
        Max Value: 10
        Min Value: -10
        Value: true
      Axis: Z
      Channel Name: intensity
      Class: rviz_default_plugins/LaserScan
      Color: 255; 0; 0
      Color Transformer: FlatColor
      Decay Time: 0
      Enabled: true
      Invert Rainbow: false
      Max Color: 255; 255; 255
      Min Color: 0; 0; 0
      Name: LaserScan
      Position Transformer: XYZ
      Selectable: true
      Size (Pixels): 3
      Size (m): 0.05
      Style: Points
      Topic:
        Depth: 5
        Durability Policy: Volatile
        History Policy: Keep Last
        Reliability Policy: Best Effort
        Value: /scan
      Use Fixed Frame: true
      Use rainbow: true
      Value: true
      
    - Angle Tolerance: 0.1
      Class: rviz_default_plugins/Odometry
      Covariance:
        Orientation:
          Alpha: 0.5
          Color: 255; 255; 127
          Color Style: Unique
          Frame: Local
          Offset: 1
          Scale: 1
          Value: true
        Position:
          Alpha: 0.3
          Color: 204; 51; 204
          Scale: 1
          Value: true
        Value: false
      Enabled: true
      Keep: 50
      Name: Odometry
      Position Tolerance: 0.1
      Shape:
        Alpha: 1
        Axes Length: 0.3
        Axes Radius: 0.03
        Color: 255; 25; 0
        Head Length: 0.2
        Head Radius: 0.1
        Shaft Length: 0.5
        Shaft Radius: 0.05
        Value: Arrow
      Topic:
        Depth: 5
        Durability Policy: Volatile
        History Policy: Keep Last
        Reliability Policy: Reliable
        Value: /axbot/odom
      Value: true
      
    - Class: rviz_default_plugins/MarkerArray
      Enabled: true
      Name: Robot Pose
      Namespaces:
        {}
      Topic:
        Depth: 5
        Durability Policy: Volatile
        History Policy: Keep Last
        Reliability Policy: Reliable
        Value: /robot_markers
      Value: true

  Enabled: true
  Global Options:
    Background Color: 48; 48; 48
    Fixed Frame: map
    Frame Rate: 30
  Name: root
  Tools:
    - Class: rviz_default_plugins/Interact
    - Class: rviz_default_plugins/MoveCamera
    - Class: rviz_default_plugins/Select
    - Class: rviz_default_plugins/FocusCamera
    - Class: rviz_default_plugins/Measure
      Line color: 128; 128; 0
    - Class: rviz_default_plugins/SetInitialPose
      Topic:
        Depth: 5
        Durability Policy: Volatile
        History Policy: Keep Last
        Reliability Policy: Reliable
        Value: /initialpose
    - Class: rviz_default_plugins/SetGoal
      Topic:
        Depth: 5
        Durability Policy: Volatile
        History Policy: Keep Last
        Reliability Policy: Reliable
        Value: /goal_pose
        
  Views:
    Current:
      Class: rviz_default_plugins/TopDownOrtho
      Enable Stereo Rendering:
        Stereo Eye Separation: 0.06
        Stereo Focal Distance: 1
        Swap Stereo Eyes: false
        Value: false
      Invert Z Axis: false
      Name: Current View
      Near Clip Distance: 0.01
      Scale: 50
      Target Frame: <Fixed Frame>
      Value: TopDownOrtho (rviz_default_plugins)
      X: 0
      Y: 0
      
Window Geometry:
  Displays:
    collapsed: false
  Height: 1016
  Hide Left Dock: false
  Hide Right Dock: true
  QMainWindow State: 000000ff00000000fd0000000400000000000001560000035afc0200000008fb0000001200530065006c0065006300740069006f006e00000001e10000009b0000005c00fffffffb0000001e0054006f006f006c002000500072006f007000650072007400690065007302000001ed000001df00000185000000a3fb000000120056006900650077007300200054006f006f02000001df000002110000018500000122fb000000200054006f006f006c002000500072006f0070006500720074006900650073003203000002880000011d000002210000017afb000000100044006900730070006c006100790073010000003d0000035a000000c900fffffffb0000002000730065006c0065006300740069006f006e00200062007500660066006500720200000138000000aa0000023a00000294fb00000014005700690064006500530074006500720065006f02000000e6000000d2000003ee0000030bfb0000000c004b0069006e0065006300740200000186000001060000030c00000261000000010000010f0000035afc0200000003fb0000001e0054006f006f006c002000500072006f00700065007200740069006500730100000041000000780000000000000000fb0000000a00560069006500770073000000003d0000035a000000a400fffffffb0000001200530065006c0065006300740069006f006e010000025a000000b200000000000000000000000200000490000000a9fc0100000001fb0000000a00560069006500770073030000004e00000080000002e10000019700000003000007380000003efc0100000002fb0000000800540069006d0065010000000000000738000002fb00fffffffb0000000800540069006d00650100000000000004500000000000000000000004c70000035a00000004000000040000000800000008fc0000000100000002000000010000000a0054006f006f006c00730100000000ffffffff0000000000000000
  Selection:
    collapsed: false
  Tool Properties:
    collapsed: false
  Views:
    collapsed: true
  Width: 1848
  X: 72
  Y: 27
EOF

echo -e "${GREEN}✓ RViz configuration created${NC}"

# ============================================================================
# 4. Create SLAM Launch File
# ============================================================================
echo -e "${BLUE}[4/7] Creating SLAM launch file...${NC}"

mkdir -p axbot_navigation/launch
mkdir -p axbot_navigation/config

cat > axbot_navigation/launch/slam.launch.py << 'EOF'
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time')
    
    slam_params = {
        'use_sim_time': use_sim_time,
        'odom_frame': 'odom',
        'map_frame': 'map',
        'base_frame': 'base_link',
        'scan_topic': '/scan',
        'mode': 'mapping',
        'resolution': 0.05,
        'max_laser_range': 20.0,
        'minimum_time_interval': 0.5,
        'transform_publish_period': 0.02,
        'map_update_interval': 2.0,
        'debug_logging': False,
        'throttle_scans': 1,
        'transform_timeout': 0.2,
        'tf_buffer_duration': 30.0,
        'stack_size_to_use': 40000000,
        'enable_interactive_mode': True
    }
    
    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation time'
        ),
        
        Node(
            package='slam_toolbox',
            executable='async_slam_toolbox_node',
            name='slam_toolbox',
            output='screen',
            parameters=[slam_params]
        )
    ])
EOF

echo -e "${GREEN}✓ SLAM launch file created${NC}"

# ============================================================================
# 5. Create Complete System Launch File
# ============================================================================
echo -e "${BLUE}[5/7] Creating complete system launch...${NC}"

cat > axbot_driver/launch/slam_bringup.launch.py << 'EOF'
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    axbot_driver_dir = get_package_share_directory('axbot_driver')
    axbot_nav_dir = get_package_share_directory('axbot_navigation')
    
    return LaunchDescription([
        # Launch robot driver
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(axbot_driver_dir, 'launch', 'axbot_driver.launch.py')
            )
        ),
        
        # Launch SLAM
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(axbot_nav_dir, 'launch', 'slam.launch.py')
            )
        ),
        
        # Launch RViz with SLAM config
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', os.path.join(axbot_driver_dir, 'rviz', 'slam_view.rviz')],
            output='screen'
        )
    ])
EOF

echo -e "${GREEN}✓ Complete launch file created${NC}"

# ============================================================================
# 6. Update setup.py with new scripts
# ============================================================================
echo -e "${BLUE}[6/7] Updating package configurations...${NC}"

# Update axbot_driver setup.py to include rviz configs
sed -i "s|(os.path.join('share', package_name, 'config'), glob('config/\*.yaml'))|&,\n        (os.path.join('share', package_name, 'rviz'), glob('rviz/*.rviz'))|" axbot_driver/setup.py

echo -e "${GREEN}✓ Configurations updated${NC}"

# ============================================================================
# 7. Create Quick Start Scripts
# ============================================================================
echo -e "${BLUE}[7/7] Creating quick start scripts...${NC}"

# Start SLAM mapping
cat > ${WORKSPACE}/start_slam.sh << 'EOF'
#!/bin/bash
# Start SLAM mapping

source ~/axbot_ws/install/setup.bash

echo "Starting SLAM Mapping..."
echo "  - Robot driver will connect"
echo "  - SLAM will start building map"
echo "  - RViz will open for visualization"
echo ""
echo "Drive the robot around to build the map!"
echo ""

ros2 launch axbot_driver slam_bringup.launch.py
EOF

# Save map script
cat > ${WORKSPACE}/save_map.sh << 'EOF'
#!/bin/bash
# Save the current SLAM map

if [ -z "$1" ]; then
    echo "Usage: ./save_map.sh <map_name>"
    echo "Example: ./save_map.sh office_floor1"
    exit 1
fi

MAP_NAME=$1
MAP_DIR="${HOME}/axbot_ws/maps"

mkdir -p ${MAP_DIR}
cd ${MAP_DIR}

echo "Saving map as: ${MAP_NAME}"
ros2 run nav2_map_server map_saver_cli -f ${MAP_NAME}

echo ""
echo "Map saved to: ${MAP_DIR}/${MAP_NAME}.yaml"
echo "  Image: ${MAP_DIR}/${MAP_NAME}.pgm"
echo ""
EOF

# View saved map
cat > ${WORKSPACE}/view_map.sh << 'EOF'
#!/bin/bash
# View a saved map in RViz

if [ -z "$1" ]; then
    echo "Usage: ./view_map.sh <map_file.yaml>"
    exit 1
fi

source ~/axbot_ws/install/setup.bash

ros2 run nav2_map_server map_server --ros-args -p yaml_filename:=$1 &
MAP_PID=$!

sleep 2
rviz2 &
RVIZ_PID=$!

echo "Map server and RViz started"
echo "Press Ctrl+C to stop"

trap "kill $MAP_PID $RVIZ_PID 2>/dev/null" EXIT
wait
EOF

chmod +x ${WORKSPACE}/*.sh

echo -e "${GREEN}✓ Quick start scripts created${NC}"

# ============================================================================
# Build Everything
# ============================================================================
echo ""
echo -e "${BLUE}Building workspace...${NC}"

cd ${WORKSPACE}
colcon build --symlink-install
source install/setup.bash

echo ""
echo -e "${GREEN}╔═══════════════════════════════════════════════════════════╗${NC}"
echo -e "${GREEN}║                    Setup Complete!                        ║${NC}"
echo -e "${GREEN}╚═══════════════════════════════════════════════════════════╝${NC}"
echo ""
echo "Quick Start Guide:"
echo ""
echo "1. Start SLAM Mapping:"
echo "   ${WORKSPACE}/start_slam.sh"
echo ""
echo "2. Drive robot around with keyboard:"
echo "   # In another terminal"
echo "   ros2 run axbot_examples teleop_keyboard"
echo ""
echo "3. Save the map when done:"
echo "   ${WORKSPACE}/save_map.sh my_map"
echo ""
echo "Manual Commands:"
echo ""
echo "Start individual components:"
echo "  ros2 launch axbot_driver axbot_driver.launch.py"
echo "  ros2 launch axbot_navigation slam.launch.py"
echo "  rviz2 -d ~/axbot_ws/install/axbot_driver/share/axbot_driver/rviz/slam_view.rviz"
echo ""
echo "Check topics:"
echo "  ros2 topic list"
echo "  ros2 topic echo /map"
echo "  ros2 topic echo /scan"
echo ""
echo "RViz Settings:"
echo "  - Fixed Frame: map"
echo "  - Add Display > Map > Topic: /map"
echo "  - Add Display > LaserScan > Topic: /scan"
echo "  - Add Display > TF"
echo ""
