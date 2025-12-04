import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import time


class SquareMover(Node):
    def __init__(self):
        super().__init__('square_mover')
        
        # Declare parameters
        self.declare_parameter('side_length', 1.0)  # meters
        self.declare_parameter('linear_speed', 0.2)  # m/s
        self.declare_parameter('angular_speed', 0.5)  # rad/s
        
        # Get parameters
        self.side_length = self.get_parameter('side_length').value
        self.linear_speed = self.get_parameter('linear_speed').value
        self.angular_speed = self.get_parameter('angular_speed').value
        
        # Create publisher
        self.publisher = self.create_publisher(
            Twist,
            '/axbot/cmd_vel',
            10
        )
        
        self.get_logger().info('Square Mover initialized')
        self.get_logger().info(f'Side length: {self.side_length}m')
        self.get_logger().info(f'Linear speed: {self.linear_speed}m/s')
        self.get_logger().info(f'Angular speed: {self.angular_speed}rad/s')
    
    def publish_twist(self, linear: float, angular: float):
        '''Publish velocity command.'''
        msg = Twist()
        msg.linear.x = linear
        msg.angular.z = angular
        self.publisher.publish(msg)
    
    def stop(self):
        '''Stop the robot.'''
        self.publish_twist(0.0, 0.0)
    
    def move_forward(self, distance: float):
        '''Move forward for a specified distance.'''
        duration = distance / self.linear_speed
        
        self.get_logger().info(f'Moving forward {distance}m...')
        self.publish_twist(self.linear_speed, 0.0)
        time.sleep(duration)
        self.stop()
        time.sleep(0.5)  # Brief pauseimport rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import time


class SquareMover(Node):
    def __init__(self):
        super().__init__('square_mover')
        
        # Declare parameters
        self.declare_parameter('side_length', 1.0)  # meters
        self.declare_parameter('linear_speed', 0.2)  # m/s
        self.declare_parameter('angular_speed', 0.5)  # rad/s
        
        # Get parameters
        self.side_length = self.get_parameter('side_length').value
        self.linear_speed = self.get_parameter('linear_speed').value
        self.angular_speed = self.get_parameter('angular_speed').value
        
        # Create publisher
        self.publisher = self.create_publisher(
            Twist,
            '/axbot/cmd_vel',
            10
        )
        
        self.get_logger().info('Square Mover initialized')
        self.get_logger().info(f'Side length: {self.side_length}m')
        self.get_logger().info(f'Linear speed: {self.linear_speed}m/s')
        self.get_logger().info(f'Angular speed: {self.angular_speed}rad/s')
    
    def publish_twist(self, linear: float, angular: float):
        '''Publish velocity command.'''
        msg = Twist()
        msg.linear.x = linear
        msg.angular.z = angular
        self.publisher.publish(msg)
    
    def stop(self):
        '''Stop the robot.'''
        self.publish_twist(0.0, 0.0)
    
    def move_forward(self, distance: float):
        '''Move forward for a specified distance.'''
        duration = distance / self.linear_speed
        
        self.get_logger().info(f'Moving forward {distance}m...')
        self.publish_twist(self.linear_speed, 0.0)
        time.sleep(duration)
        self.stop()
        time.sleep(0.5)  # Brief pause
    
    def turn_90_degrees(self):
        '''Turn 90 degrees left.'''
        # 90 degrees = π/2 radians
        duration = (3.14159 / 2.0) / self.angular_speed
        
        self.get_logger().info('Turning 90 degrees...')
        self.publish_twist(0.0, self.angular_speed)
        time.sleep(duration)
        self.stop()
        time.sleep(0.5)  # Brief pause
    
    def execute_square(self):
        '''Execute a square movement pattern.'''
        self.get_logger().info('Starting square pattern')
        
        try:
            for i in range(4):
                self.get_logger().info(f'Side {i+1}/4')
                self.move_forward(self.side_length)
                self.turn_90_degrees()
            
            self.get_logger().info('Square pattern completed!')
            
        except KeyboardInterrupt:
            self.get_logger().info('Interrupted by user')
            self.stop()


def main(args=None):
    rclpy.init(args=args)
    node = SquareMover()
    
    try:
        # Wait a moment for everything to initialize
        time.sleep(1.0)
        
        # Execute the square pattern
        node.execute_square()
        
    except KeyboardInterrupt:
        pass
    finally:
        node.stop()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
    
    def turn_90_degrees(self):
        '''Turn 90 degrees left.'''
        # 90 degrees = π/2 radians
        duration = (3.14159 / 2.0) / self.angular_speed
        
        self.get_logger().info('Turning 90 degrees...')
        self.publish_twist(0.0, self.angular_speed)
        time.sleep(duration)
        self.stop()
        time.sleep(0.5)  # Brief pause
    
    def execute_square(self):
        '''Execute a square movement pattern.'''
        self.get_logger().info('Starting square pattern')
        
        try:
            for i in range(4):
                self.get_logger().info(f'Side {i+1}/4')
                self.move_forward(self.side_length)
                self.turn_90_degrees()
            
            self.get_logger().info('Square pattern completed!')
            
        except KeyboardInterrupt:
            self.get_logger().info('Interrupted by user')
            self.stop()


def main(args=None):
    rclpy.init(args=args)
    node = SquareMover()
    
    try:
        # Wait a moment for everything to initialize
        time.sleep(1.0)
        
        # Execute the square pattern
        node.execute_square()
        
    except KeyboardInterrupt:
        pass
    finally:
        node.stop()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
