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
