#!/bin/bash
# Complete SLAM Mapping Startup

WORKSPACE="/media/roboserver/DATA/axbot_ws"
source ${WORKSPACE}/install/setup.bash
export ROS_LOCALHOST_ONLY=1
export ROS_DOMAIN_ID=42

echo "╔═══════════════════════════════════════════════════════════╗"
echo "║          Starting SLAM Mapping System                     ║"
echo "╚═══════════════════════════════════════════════════════════╝"
echo ""

# Kill existing
pkill -9 -f axbot_node 2>/dev/null
pkill -9 -f slam_toolbox 2>/dev/null
pkill -9 -f robot_state_publisher 2>/dev/null
pkill -9 -f rviz2 2>/dev/null
sleep 2

# Start robot state publisher
echo "[1/4] Starting Robot State Publisher..."
ros2 launch axbot_description display.launch.py &
sleep 2

# Start driver
echo "[2/4] Starting AxBot Driver..."
ros2 launch axbot_driver axbot_driver.launch.py robot_ip:=192.168.0.250 &
sleep 3

# Wait for scan
echo "Waiting for scan data..."
for i in {1..15}; do
    if ros2 topic list 2>/dev/null | grep -q "/scan"; then
        echo "✓ Scan available"
        break
    fi
    sleep 1
done

# Start SLAM
echo "[3/4] Starting SLAM Toolbox..."
ros2 launch axbot_navigation slam.launch.py &
sleep 3

# Wait for map
echo "Waiting for map..."
for i in {1..15}; do
    if ros2 topic list 2>/dev/null | grep -q "/map"; then
        echo "✓ Map available"
        break
    fi
    sleep 1
done

# Start RViz
echo "[4/4] Starting RViz..."
sleep 2
rviz2 -d ${WORKSPACE}/install/axbot_driver/share/axbot_driver/rviz/slam_view.rviz &

echo ""
echo "╔═══════════════════════════════════════════════════════════╗"
echo "║                  System Started!                          ║"
echo "╚═══════════════════════════════════════════════════════════╝"
echo ""
echo "IMPORTANT: In RViz, set Fixed Frame to 'map'"
echo ""
echo "Check status:"
echo "  ros2 topic list | grep map"
echo "  ros2 topic hz /scan"
echo "  ros2 topic echo /map --once"
echo ""
echo "Control robot:"
echo "  ros2 run axbot_examples teleop_keyboard"
echo ""

cleanup() {
    echo "Stopping..."
    pkill -9 -f rviz2
    pkill -9 -f slam_toolbox
    pkill -9 -f axbot_node
    pkill -9 -f robot_state_publisher
    exit 0
}

trap cleanup SIGINT SIGTERM
wait
