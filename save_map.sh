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
