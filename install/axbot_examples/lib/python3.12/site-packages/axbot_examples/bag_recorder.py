import rclpy
from rclpy.node import Node
import subprocess
import os
from datetime import datetime

class BagRecorder(Node):
    def __init__(self):
        super().__init__('bag_recorder')
        
        # Create bags directory
        self.bags_dir = os.path.expanduser('~/axbot_bags')
        os.makedirs(self.bags_dir, exist_ok=True)
        
        # Generate timestamp
        timestamp = datetime.now().strftime('%d%m%Y_%H%M%S')
        bag_name = f'axbot_{timestamp}'
        bag_path = os.path.join(self.bags_dir, bag_name)
        
        # Topics to record
        topics = [
            '/axbot/pose',
            '/axbot/odom',
            '/axbot/slam_state',
            '/axbot/wheel_state',
            '/axbot/cmd_vel',
            '/tf',
            '/tf_static'
        ]
        
        # Start recording
        cmd = ['ros2', 'bag', 'record', '-o', bag_path] + topics
        
        self.get_logger().info(f'Starting bag recording: {bag_name}')
        self.get_logger().info(f'Recording topics: {", ".join(topics)}')
        self.get_logger().info(f'Press Ctrl+C to stop recording')
        
        self.process = subprocess.Popen(cmd)

def main(args=None):
    rclpy.init(args=args)
    node = BagRecorder()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Stopping recording...')
    finally:
        node.process.terminate()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
