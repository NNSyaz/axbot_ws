import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import sys
import termios
import tty


class TeleopKeyboard(Node):
    def __init__(self):
        super().__init__('teleop_keyboard')
        
        self.publisher = self.create_publisher(
            Twist,
            '/axbot/cmd_vel',
            10
        )
        
        # Velocity parameters
        self.linear_speed = 0.2  # m/s
        self.angular_speed = 0.5  # rad/s
        
        self.get_logger().info('Keyboard Teleoperation Node Started')
        self.print_instructions()
    
    def print_instructions(self):
        print('\\n' + '='*50)
        print('Fielder Robot Teleoperation')
        print('='*50)
        print('Controls:')
        print('  W - Move forward')
        print('  S - Move backward')
        print('  A - Turn left')
        print('  D - Turn right')
        print('  Space - Stop')
        print('  Q - Quit')
        print('='*50 + '\\n')
    
    def get_key(self):
        '''Get a single keypress.'''
        fd = sys.stdin.fileno()
        old_settings = termios.tcgetattr(fd)
        try:
            tty.setraw(sys.stdin.fileno())
            key = sys.stdin.read(1)
        finally:
            termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)
        return key
    
    def publish_velocity(self, linear: float, angular: float):
        '''Publish a Twist message.'''
        msg = Twist()
        msg.linear.x = linear
        msg.angular.z = angular
        self.publisher.publish(msg)
        
        self.get_logger().info(
            f'Published: linear={linear:.2f}, angular={angular:.2f}'
        )
    
    def run(self):
        '''Main control loop.'''
        try:
            while True:
                key = self.get_key().lower()
                
                if key == 'w':
                    self.publish_velocity(self.linear_speed, 0.0)
                elif key == 's':
                    self.publish_velocity(-self.linear_speed, 0.0)
                elif key == 'a':
                    self.publish_velocity(0.0, self.angular_speed)
                elif key == 'd':
                    self.publish_velocity(0.0, -self.angular_speed)
                elif key == ' ':
                    self.publish_velocity(0.0, 0.0)
                    self.get_logger().info('Stopped')
                elif key == 'q':
                    self.get_logger().info('Quitting...')
                    break
                else:
                    self.get_logger().warn(f'Unknown key: {key}')
                    
        except Exception as e:
            self.get_logger().error(f'Error: {e}')
        finally:
            # Send stop command before exiting
            self.publish_velocity(0.0, 0.0)


def main(args=None):
    rclpy.init(args=args)
    node = TeleopKeyboard()
    
    try:
        node.run()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
