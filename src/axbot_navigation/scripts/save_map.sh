
if [ -z "$1" ]; then
    MAP_NAME="my_map"
else
    MAP_NAME="$1"
fi

MAP_DIR="$HOME/axbot_ws/src/axbot_navigation/maps"
mkdir -p "$MAP_DIR"

echo "Saving map as: $MAP_NAME"
cd "$MAP_DIR"
ros2 run nav2_map_server map_saver_cli -f "$MAP_NAME"

echo ""
echo "Map saved to: $MAP_DIR/$MAP_NAME.yaml"
echo ""
echo "To use this map with navigation:"
echo "ros2 launch axbot_navigation navigation.launch.py map:=$MAP_DIR/$MAP_NAME.yaml"
