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
