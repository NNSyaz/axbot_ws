from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    # Get the config file path
    config_dir = os.path.join(
        get_package_share_directory('axbot_driver'),
        'config'
    )
    params_file = os.path.join(config_dir, 'axbot_params.yaml')
    
    # Declare launch arguments
    robot_ip_arg = DeclareLaunchArgument(
        'robot_ip',
        default_value='192.168.0.250',
        description='IP address of the AxBot robot'
    )
    
    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='false',
        description='Use simulation time'
    )
    
    # Get launch configurations
    robot_ip = LaunchConfiguration('robot_ip')
    use_sim_time = LaunchConfiguration('use_sim_time')
    
    # AxBot driver node
    axbot_node = Node(
        package='axbot_driver',
        executable='axbot_node',
        name='axbot_node',
        output='screen',
        parameters=[
            params_file,
            {
                'robot_ip': robot_ip,
                'use_sim_time': use_sim_time
            }
        ],
        remappings=[
            # Remap topics if needed
        ]
    )
    
    return LaunchDescription([
        robot_ip_arg,
        use_sim_time_arg,
        axbot_node,
    ])