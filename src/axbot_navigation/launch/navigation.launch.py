from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    nav_pkg_dir = get_package_share_directory('axbot_navigation')
    nav2_bringup_dir = get_package_share_directory('nav2_bringup')
    
    params_file = os.path.join(nav_pkg_dir, 'config', 'nav2_params.yaml')
    
    map_yaml_file = LaunchConfiguration('map')
    use_sim_time = LaunchConfiguration('use_sim_time')
    
    declare_map_yaml_cmd = DeclareLaunchArgument(
        'map',
        default_value=os.path.join(nav_pkg_dir, 'maps', 'my_map.yaml'),
        description='Full path to map yaml file'
    )
    
    declare_use_sim_time = DeclareLaunchArgument(
        'use_sim_time',
        default_value='false',
        description='Use simulation time'
    )
    
    nav2_bringup = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(nav2_bringup_dir, 'launch', 'bringup_launch.py')
        ),
        launch_arguments={
            'map': map_yaml_file,
            'use_sim_time': use_sim_time,
            'params_file': params_file
        }.items()
    )
    
    return LaunchDescription([
        declare_map_yaml_cmd,
        declare_use_sim_time,
        nav2_bringup
    ])
