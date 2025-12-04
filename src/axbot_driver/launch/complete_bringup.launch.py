from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, TimerAction
from launch.conditions import IfCondition
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration, Command
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    # Directories
    axbot_driver_dir = get_package_share_directory('axbot_driver')
    axbot_description_dir = get_package_share_directory('axbot_description')
    
    # Files
    urdf_file = os.path.join(axbot_description_dir, 'urdf', 'axbot.urdf')
    params_file = os.path.join(axbot_driver_dir, 'config', 'axbot_params.yaml')
    rviz_config = os.path.join(axbot_driver_dir, 'rviz', 'slam_view.rviz')
    
    # Launch arguments
    robot_ip_arg = DeclareLaunchArgument('robot_ip', default_value='192.168.0.250')
    use_sim_time_arg = DeclareLaunchArgument('use_sim_time', default_value='false')
    enable_slam_arg = DeclareLaunchArgument('enable_slam', default_value='true')
    use_rviz_arg = DeclareLaunchArgument('use_rviz', default_value='true')
    
    robot_ip = LaunchConfiguration('robot_ip')
    use_sim_time = LaunchConfiguration('use_sim_time')
    
    # 1. Robot State Publisher
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{
            'robot_description': Command(['cat ', urdf_file]),
            'use_sim_time': use_sim_time
        }]
    )
    
    # 2. Joint State Publisher
    joint_state_publisher = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        parameters=[{'use_sim_time': use_sim_time}]
    )
    
    # 3. AxBot Driver Node
    axbot_driver = Node(
        package='axbot_driver',
        executable='axbot_node',
        output='screen',
        parameters=[params_file, {'robot_ip': robot_ip, 'use_sim_time': use_sim_time}]
    )
    
    # 4. SLAM Toolbox with PROPER configuration
    slam_toolbox = Node(
        package='slam_toolbox',
        executable='async_slam_toolbox_node',
        output='screen',
        parameters=[{
            'use_sim_time': use_sim_time,
            'odom_frame': 'odom',
            'map_frame': 'map',
            'base_frame': 'base_link',
            'scan_topic': '/scan',
            'mode': 'mapping',
            
            # CRITICAL: Map anchoring settings
            'map_start_pose': [0.0, 0.0, 0.0],  # Start at origin
            'map_start_at_dock': True,
            
            # Resolution and range
            'resolution': 0.05,
            'max_laser_range': 20.0,
            'minimum_time_interval': 0.5,
            
            # Transform settings - IMPORTANT
            'transform_publish_period': 0.02,
            'tf_buffer_duration': 30.0,
            'transform_timeout': 0.2,
            
            # Map update
            'map_update_interval': 2.0,
            
            # Scan matching - helps stability
            'use_scan_matching': True,
            'use_scan_barycenter': True,
            'minimum_travel_distance': 0.2,
            'minimum_travel_heading': 0.2,
            
            # Loop closure
            'do_loop_closing': True,
            'loop_search_maximum_distance': 3.0,
            
            # Other settings
            'debug_logging': False,
            'throttle_scans': 1,
            'stack_size_to_use': 40000000,
        }],
        condition=IfCondition(LaunchConfiguration('enable_slam'))
    )
    
    # 5. RViz2 (delayed 3 seconds to allow everything to initialize)
    rviz = TimerAction(
        period=3.0,
        actions=[Node(
            package='rviz2',
            executable='rviz2',
            arguments=['-d', rviz_config],
            parameters=[{'use_sim_time': use_sim_time}],
            condition=IfCondition(LaunchConfiguration('use_rviz'))
        )]
    )
    
    return LaunchDescription([
        robot_ip_arg,
        use_sim_time_arg,
        enable_slam_arg,
        use_rviz_arg,
        robot_state_publisher,
        joint_state_publisher,
        axbot_driver,
        slam_toolbox,
        rviz
    ])