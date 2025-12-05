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
