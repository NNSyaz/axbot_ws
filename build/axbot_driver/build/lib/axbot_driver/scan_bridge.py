#!/usr/bin/env python3
"""
Scan Bridge - Subscribes to robot's scan topic and republishes
with correct frame_id and QoS for RViz/SLAM
"""
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, DurabilityPolicy
from sensor_msgs.msg import LaserScan

class ScanBridge(Node):
    def __init__(self):
        super().__init__('scan_bridge')
        
        # Declare parameters
        self.declare_parameter('input_topic', '/scan')
        self.declare_parameter('output_topic', '/scan')
        self.declare_parameter('frame_id', 'base_scan')
        
        input_topic = self.get_parameter('input_topic').value
        output_topic = self.get_parameter('output_topic').value
        self.frame_id = self.get_parameter('frame_id').value
        
        # QoS for sensor data (best effort)
        qos_sensor = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.VOLATILE,
            depth=10
        )
        
        # Create subscriber and publisher
        self.subscription = self.create_subscription(
            LaserScan,
            input_topic,
            self.scan_callback,
            qos_sensor
        )
        
        self.publisher = self.create_publisher(
            LaserScan,
            output_topic,
            qos_sensor
        )
        
        self.get_logger().info(f'Scan bridge: {input_topic} -> {output_topic}')
        self.get_logger().info(f'Frame ID: {self.frame_id}')
    
    def scan_callback(self, msg):
        # Update frame_id if needed
        msg.header.frame_id = self.frame_id
        msg.header.stamp = self.get_clock().now().to_msg()
        self.publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = ScanBridge()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
