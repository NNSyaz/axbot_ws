from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.conditions import IfCondition
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    axbot_driver_dir = get_package_share_directory('axbot_driver')
    
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
    
    use_rviz_arg = DeclareLaunchArgument(
        'use_rviz',
        default_value='true',
        description='Whether to launch RViz'
    )
    
    # Get launch configurations
    use_sim_time = LaunchConfiguration('use_sim_time')
    
    # Static transform: map -> odom
    map_to_odom_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='map_to_odom_publisher',
        arguments=['0', '0', '0', '0', '0', '0', 'map', 'odom'],
        parameters=[{'use_sim_time': use_sim_time}]
    )
    
    # Launch driver with arguments
    driver_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(axbot_driver_dir, 'launch', 'axbot_driver.launch.py')
        ),
        launch_arguments={
            'robot_ip': LaunchConfiguration('robot_ip'),
            'use_sim_time': use_sim_time
        }.items()
    )
    
    # Launch RViz
    rviz_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(axbot_driver_dir, 'launch', 'rviz.launch.py')
        ),
        condition=IfCondition(LaunchConfiguration('use_rviz'))
    )
    
    return LaunchDescription([
        robot_ip_arg,
        use_sim_time_arg,
        use_rviz_arg,
        map_to_odom_tf,
        driver_launch,
        rviz_launch,
    ])
