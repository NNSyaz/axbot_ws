import rclpy
from rclpy.node import Node
from axbot_interfaces.msg import RobotPose
import csv
import os
from datetime import datetime


class PoseLogger(Node):
    def __init__(self):
        super().__init__('pose_logger')
        
        # Create log file with timestamp
        timestamp = datetime.now().strftime('%Y%m%d_%H%M%S')
        self.log_file = f'axbot_pose_log_{timestamp}.csv'
        
        # Initialize CSV file
        with open(self.log_file, 'w', newline='') as f:
            writer = csv.writer(f)
            writer.writerow(['Timestamp', 'X (m)', 'Y (m)', 'Orientation (rad)'])
        
        # Subscribe to pose
        self.subscription = self.create_subscription(
            RobotPose,
            '/axbot/pose',
            self.pose_callback,
            10
        )
        
        self.sample_count = 0
        
        self.get_logger().info(f'Pose Logger started')
        self.get_logger().info(f'Logging to: {self.log_file}')
    
    def pose_callback(self, msg):
        # Get current time
        timestamp = self.get_clock().now().to_msg()
        time_sec = timestamp.sec + timestamp.nanosec * 1e-9
        
        # Write to CSV
        with open(self.log_file, 'a', newline='') as f:
            writer = csv.writer(f)
            writer.writerow([
                f'{time_sec:.3f}',
                f'{msg.x:.4f}',
                f'{msg.y:.4f}',
                f'{msg.orientation:.4f}'
            ])
        
        self.sample_count += 1
        
        # Log every 10 samples
        if self.sample_count % 10 == 0:
            self.get_logger().info(
                f'Logged {self.sample_count} samples - '
                f'Current pose: ({msg.x:.3f}, {msg.y:.3f}, {msg.orientation:.3f})'
            )


def main(args=None):
    rclpy.init(args=args)
    node = PoseLogger()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info(f'\\nLogging stopped. Total samples: {node.sample_count}')
        node.get_logger().info(f'Data saved to: {node.log_file}')
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
