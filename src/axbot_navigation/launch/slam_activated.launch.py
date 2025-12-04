from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, ExecuteProcess, TimerAction
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time')
    
    slam_params = {
        'use_sim_time': use_sim_time,
        'odom_frame': 'odom',
        'map_frame': 'map',
        'base_frame': 'base_link',
        'scan_topic': '/scan',
        'mode': 'mapping',
        'resolution': 0.05,
        'max_laser_range': 20.0,
        'minimum_time_interval': 0.5,
        'transform_publish_period': 0.02,
        'map_update_interval': 2.0,
        'debug_logging': False,
        'throttle_scans': 1,
        'transform_timeout': 0.2,
        'tf_buffer_duration': 30.0,
        'stack_size_to_use': 40000000,
        'enable_interactive_mode': True
    }
    
    slam_node = Node(
        package='slam_toolbox',
        executable='async_slam_toolbox_node',
        name='slam_toolbox',
        output='screen',
        parameters=[slam_params]
    )
    
    # Configure SLAM after 2 seconds
    configure_slam = TimerAction(
        period=2.0,
        actions=[
            ExecuteProcess(
                cmd=['ros2', 'lifecycle', 'set', '/slam_toolbox', 'configure'],
                output='screen'
            )
        ]
    )
    
    # Activate SLAM after 4 seconds
    activate_slam = TimerAction(
        period=4.0,
        actions=[
            ExecuteProcess(
                cmd=['ros2', 'lifecycle', 'set', '/slam_toolbox', 'activate'],
                output='screen'
            )
        ]
    )
    
    return LaunchDescription([
        DeclareLaunchArgument('use_sim_time', default_value='false'),
        slam_node,
        configure_slam,
        activate_slam
    ])
