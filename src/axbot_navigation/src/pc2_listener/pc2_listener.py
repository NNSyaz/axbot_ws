import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2
import sensor_msgs_py.point_cloud2 as pc2

class PC2Listener(Node):
    def __init__(self):
        super().__init__('pc2_listener')
        self.subscription = self.create_subscription(
            PointCloud2,
            '/scan_matched_points2',  # or your lidar topic
            self.pc_callback,
            10
        )
        self.get_logger().info('LiDAR PointCloud2 Listener Started')

    def pc_callback(self, msg):
        points = list(pc2.read_points(msg, field_names=("x", "y", "z"), skip_nans=True))
        self.get_logger().info(f'Received {len(points)} points')

def main(args=None):
    rclpy.init(args=args)
    node = PC2Listener()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

