#!/bin/bash
###############################################################################
# ROS2 Security Setup for AxBot
# Restricts ROS2 topics to localhost only
###############################################################################

set -e

WORKSPACE="/media/roboserver/DATA/axbot_ws"
mkdir -p ${WORKSPACE}/src/axbot_driver/launch

GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
NC='\033[0m'

echo -e "${GREEN}╔═══════════════════════════════════════════════════════════╗${NC}"
echo -e "${GREEN}║        ROS2 Security Setup for AxBot                      ║${NC}"
echo -e "${GREEN}╚═══════════════════════════════════════════════════════════╝${NC}"
echo ""

# ============================================================================
# Method 1: Network Interface Restriction (Recommended)
# ============================================================================
echo -e "${BLUE}[1/3] Configuring ROS2 to use localhost only...${NC}"

# Create ROS2 environment setup
cat > ${WORKSPACE}/ros2_secure_env.sh << 'EOF'
#!/bin/bash
# ROS2 Security Environment Variables

# Restrict ROS2 to localhost only
export ROS_LOCALHOST_ONLY=1

# Set ROS2 domain ID (change if you want isolation from other ROS2 systems)
export ROS_DOMAIN_ID=42

# Disable multicast discovery (optional, for extra security)
# export FASTRTPS_DEFAULT_PROFILES_FILE=${HOME}/axbot_ws/fastrtps_localhost.xml

echo "ROS2 Security Environment Loaded:"
echo "  - ROS_LOCALHOST_ONLY=1 (network isolation)"
echo "  - ROS_DOMAIN_ID=${ROS_DOMAIN_ID}"
EOF

chmod +x ${WORKSPACE}/ros2_secure_env.sh

echo -e "${GREEN}✓ Security environment created${NC}"

# ============================================================================
# Method 2: FastDDS/FastRTPS Profile Configuration
# ============================================================================
echo -e "${BLUE}[2/3] Creating FastDDS localhost profile...${NC}"

cat > ${WORKSPACE}/fastrtps_localhost.xml << 'EOF'
<?xml version="1.0" encoding="UTF-8"?>
<dds xmlns="http://www.eprosima.com/XMLSchemas/fastRTPS_Profiles">
    <profiles>
        <!-- Localhost-only profile -->
        <transport_descriptors>
            <transport_descriptor>
                <transport_id>LoopbackTransport</transport_id>
                <type>UDPv4</type>
                <interfaceWhiteList>
                    <address>127.0.0.1</address>
                    <address>localhost</address>
                </interfaceWhiteList>
            </transport_descriptor>
        </transport_descriptors>

        <participant profile_name="localhost_only">
            <rtps>
                <userTransports>
                    <transport_id>LoopbackTransport</transport_id>
                </userTransports>
                <useBuiltinTransports>false</useBuiltinTransports>
            </rtps>
        </participant>
    </profiles>
</dds>
EOF

echo -e "${GREEN}✓ FastDDS profile created${NC}"

# ============================================================================
# Method 3: Firewall Rules (Optional but Recommended)
# ============================================================================
echo -e "${BLUE}[3/3] Setting up firewall rules...${NC}"

cat > ${WORKSPACE}/setup_firewall.sh << 'EOF'
#!/bin/bash
# Firewall rules to block external ROS2 traffic

echo "Setting up UFW firewall rules for ROS2..."

# Enable UFW if not already enabled
sudo ufw --force enable

# Block ROS2 DDS ports from external networks
# ROS2 uses UDP ports 7400-7600 by default
sudo ufw deny from any to any port 7400:7600 proto udp

# Allow localhost
sudo ufw allow from 127.0.0.1

# Allow your local network if needed (uncomment and adjust)
# sudo ufw allow from 192.168.0.0/24

echo "Firewall rules applied:"
sudo ufw status numbered

echo ""
echo "Note: This blocks ROS2 traffic from external networks."
echo "To allow specific IPs, run: sudo ufw allow from <IP_ADDRESS>"
EOF

chmod +x ${WORKSPACE}/setup_firewall.sh

echo -e "${YELLOW}Firewall script created but NOT executed automatically.${NC}"
echo -e "${YELLOW}Run manually if you want firewall protection: ${WORKSPACE}/setup_firewall.sh${NC}"

# ============================================================================
# Create Secure Launch Files
# ============================================================================
echo -e "${BLUE}Creating secure launch files...${NC}"

cat > ${WORKSPACE}/src/axbot_driver/launch/axbot_driver_secure.launch.py << 'EOF'
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, SetEnvironmentVariable
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    # Get the config file path
    config_dir = os.path.join(
        get_package_share_directory('axbot_driver'),
        'config'
    )
    params_file = os.path.join(config_dir, 'axbot_params.yaml')
    
    # Declare launch arguments
    robot_ip_arg = DeclareLaunchArgument(
        'robot_ip',
        default_value='192.168.0.250',
        description='IP address of the AxBot robot'
    )
    
    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='false',
        description='Use simulation time'
    )
    
    # Get launch configurations
    robot_ip = LaunchConfiguration('robot_ip')
    use_sim_time = LaunchConfiguration('use_sim_time')
    
    # Security: Restrict to localhost
    set_localhost_only = SetEnvironmentVariable(
        'ROS_LOCALHOST_ONLY', '1'
    )
    
    set_domain_id = SetEnvironmentVariable(
        'ROS_DOMAIN_ID', '42'
    )
    
    # AxBot driver node
    axbot_node = Node(
        package='axbot_driver',
        executable='axbot_node',
        name='axbot_node',
        output='screen',
        parameters=[
            params_file,
            {
                'robot_ip': robot_ip,
                'use_sim_time': use_sim_time
            }
        ]
    )
    
    # Static transform: map -> odom
    map_to_odom_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='map_to_odom_publisher',
        arguments=['0', '0', '0', '0', '0', '0', 'map', 'odom'],
        parameters=[{'use_sim_time': use_sim_time}]
    )
    
    return LaunchDescription([
        set_localhost_only,
        set_domain_id,
        robot_ip_arg,
        use_sim_time_arg,
        axbot_node,
        map_to_odom_tf,
    ])
EOF

# ============================================================================
# Create Diagnostic Script
# ============================================================================
echo -e "${BLUE}Creating diagnostic script...${NC}"

cat > ${WORKSPACE}/diagnose_slam.sh << 'EOF'
#!/bin/bash
# Diagnostic script for SLAM issues

source ~/axbot_ws/install/setup.bash

echo "╔═══════════════════════════════════════════════════════════╗"
echo "║              AxBot SLAM Diagnostics                       ║"
echo "╚═══════════════════════════════════════════════════════════╝"
echo ""

echo "1. Checking ROS2 Topics:"
echo "   Available topics:"
ros2 topic list
echo ""

echo "2. Checking /scan topic:"
timeout 3 ros2 topic echo /scan --once 2>/dev/null && echo "   ✓ /scan is publishing" || echo "   ✗ /scan is NOT publishing"
echo ""

echo "3. Checking /axbot/odom topic:"
timeout 3 ros2 topic echo /axbot/odom --once 2>/dev/null && echo "   ✓ /axbot/odom is publishing" || echo "   ✗ /axbot/odom is NOT publishing"
echo ""

echo "4. Checking TF frames:"
timeout 3 ros2 run tf2_ros tf2_echo map base_link 2>/dev/null && echo "   ✓ TF map->base_link available" || echo "   ✗ TF map->base_link NOT available"
echo ""

echo "5. Checking SLAM Toolbox node:"
ros2 node list | grep slam_toolbox && echo "   ✓ SLAM Toolbox is running" || echo "   ✗ SLAM Toolbox is NOT running"
echo ""

echo "6. /scan statistics:"
ros2 topic hz /scan &
SCAN_PID=$!
sleep 5
kill $SCAN_PID 2>/dev/null
echo ""

echo "7. WebSocket connection status:"
ros2 topic echo /axbot/slam_state --once 2>/dev/null || echo "   Waiting for WebSocket data..."
echo ""

echo "Diagnostics complete!"
echo ""
echo "Common issues:"
echo "  - No /scan topic: Check WebSocket connection and scan conversion"
echo "  - No TF: Check robot_state_publisher and odometry"
echo "  - SLAM not running: Check slam_toolbox launch"
EOF

chmod +x ${WORKSPACE}/diagnose_slam.sh

# ============================================================================
# Create Quick Start Scripts
# ============================================================================
echo -e "${BLUE}Creating quick start scripts...${NC}"

cat > ${WORKSPACE}/start_slam_secure.sh << 'EOF'
#!/bin/bash
# Start SLAM with security enabled

source ~/axbot_ws/ros2_secure_env.sh
source ~/axbot_ws/install/setup.bash

echo "╔═══════════════════════════════════════════════════════════╗"
echo "║          Starting Secure SLAM Mapping System              ║"
echo "╚═══════════════════════════════════════════════════════════╝"
echo ""
echo "Security Status:"
echo "  ✓ ROS_LOCALHOST_ONLY enabled"
echo "  ✓ Domain ID: ${ROS_DOMAIN_ID}"
echo "  ✓ Topics restricted to this machine only"
echo ""
echo "Components starting:"
echo "  1. Robot driver (WebSocket connection)"
echo "  2. URDF/TF publishers"
echo "  3. SLAM Toolbox"
echo "  4. RViz visualization"
echo ""

# Kill any existing processes
pkill -f axbot_node
pkill -f slam_toolbox
sleep 2

# Start everything with proper security
ros2 launch axbot_driver complete_bringup.launch.py \
    robot_ip:=192.168.0.250 \
    enable_slam:=true \
    use_rviz:=true
EOF

chmod +x ${WORKSPACE}/start_slam_secure.sh

# ============================================================================
# Update bashrc
# ============================================================================
echo -e "${BLUE}Updating .bashrc...${NC}"

if ! grep -q "ros2_secure_env.sh" ~/.bashrc; then
    cat >> ~/.bashrc << 'EOF'

# AxBot ROS2 Security
if [ -f ~/axbot_ws/ros2_secure_env.sh ]; then
    source ~/axbot_ws/ros2_secure_env.sh
fi
EOF
    echo -e "${GREEN}✓ Added security environment to .bashrc${NC}"
else
    echo -e "${YELLOW}Security environment already in .bashrc${NC}"
fi

# ============================================================================
# Summary
# ============================================================================
echo ""
echo -e "${GREEN}╔═══════════════════════════════════════════════════════════╗${NC}"
echo -e "${GREEN}║              Security Setup Complete!                     ║${NC}"
echo -e "${GREEN}╚═══════════════════════════════════════════════════════════╝${NC}"
echo ""
echo -e "${GREEN}Security Features Enabled:${NC}"
echo "  ✓ ROS_LOCALHOST_ONLY=1 (network isolation)"
echo "  ✓ Custom Domain ID (isolation from other ROS2 systems)"
echo "  ✓ FastDDS localhost profile available"
echo "  ✓ Firewall script ready (optional)"
echo ""
echo -e "${BLUE}Quick Start Commands:${NC}"
echo ""
echo "1. Start Secure SLAM System:"
echo "   ${WORKSPACE}/start_slam_secure.sh"
echo ""
echo "2. Or start components individually:"
echo "   # Terminal 1: Robot driver with security"
echo "   source ~/axbot_ws/ros2_secure_env.sh"
echo "   ros2 launch axbot_driver axbot_driver_secure.launch.py"
echo ""
echo "   # Terminal 2: SLAM"
echo "   source ~/axbot_ws/ros2_secure_env.sh"
echo "   ros2 launch axbot_navigation slam.launch.py"
echo ""
echo "   # Terminal 3: RViz"
echo "   source ~/axbot_ws/ros2_secure_env.sh"
echo "   rviz2 -d install/axbot_driver/share/axbot_driver/rviz/slam_view.rviz"
echo ""
echo "3. Run Diagnostics:"
echo "   ${WORKSPACE}/diagnose_slam.sh"
echo ""
echo "4. Drive robot:"
echo "   source ~/axbot_ws/ros2_secure_env.sh"
echo "   ros2 run axbot_examples teleop_keyboard"
echo ""
echo -e "${YELLOW}Important Notes:${NC}"
echo "  - Restart terminal or run: source ~/axbot_ws/ros2_secure_env.sh"
echo "  - All ROS2 commands must use the same Domain ID"
echo "  - Topics are now restricted to localhost only"
echo "  - To allow specific external access, modify firewall rules"
echo ""
echo -e "${RED}Optional: Enable Firewall${NC}"
echo "  ${WORKSPACE}/setup_firewall.sh"
echo ""
