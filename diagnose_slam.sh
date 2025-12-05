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
