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
