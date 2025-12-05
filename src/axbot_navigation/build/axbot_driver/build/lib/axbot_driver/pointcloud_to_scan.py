#!/usr/bin/env python3
"""
Convert AxBot point cloud to LaserScan for SLAM
"""
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
import math

class PointCloudToScan(Node):
    def __init__(self):
        super().__init__('pointcloud_to_scan')
        
        # Publisher for LaserScan
        self.scan_pub = self.create_publisher(LaserScan, '/scan', 10)
        
        # Store latest points from WebSocket
        self.latest_points = []
        
        self.get_logger().info('PointCloud to LaserScan converter started')
    
    def publish_scan_from_points(self, points, stamp_secs):
        """Convert point cloud to LaserScan"""
        if not points:
            return
        
        # LaserScan parameters
        angle_min = -math.pi
        angle_max = math.pi
        angle_increment = math.radians(1.0)  # 1 degree resolution
        num_readings = int((angle_max - angle_min) / angle_increment)
        range_min = 0.15
        range_max = 12.0
        
        # Initialize ranges with max value
        ranges = [range_max] * num_readings
        intensities = [0.0] * num_readings
        
        # Convert points to ranges
        for point in points:
            if len(point) < 2:
                continue
            
            x, y = point[0], point[1]
            
            # Calculate range and angle
            range_val = math.sqrt(x*x + y*y)
            angle = math.atan2(y, x)
            
            # Skip if out of range
            if range_val < range_min or range_val > range_max:
                continue
            
            # Calculate index
            index = int((angle - angle_min) / angle_increment)
            if 0 <= index < num_readings:
                # Keep minimum range for this angle
                if range_val < ranges[index]:
                    ranges[index] = range_val
                    if len(point) > 3:  # Has intensity
                        intensities[index] = point[3]
        
        # Create LaserScan message
        scan = LaserScan()
        scan.header.stamp = self.get_clock().now().to_msg()
        scan.header.frame_id = 'base_scan'
        scan.angle_min = angle_min
        scan.angle_max = angle_max
        scan.angle_increment = angle_increment
        scan.time_increment = 0.0
        scan.scan_time = 0.1
        scan.range_min = range_min
        scan.range_max = range_max
        scan.ranges = ranges
        scan.intensities = intensities
        
        self.scan_pub.publish(scan)

def main(args=None):
    rclpy.init(args=args)
    node = PointCloudToScan()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
