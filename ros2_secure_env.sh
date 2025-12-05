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
