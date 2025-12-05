from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    axbot_driver_dir = get_package_share_directory('axbot_driver')
    axbot_nav_dir = get_package_share_directory('axbot_navigation')
    
    return LaunchDescription([
        # Launch robot driver
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(axbot_driver_dir, 'launch', 'axbot_driver.launch.py')
            )
        ),
        
        # Launch SLAM
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(axbot_nav_dir, 'launch', 'slam.launch.py')
            )
        ),
        
        # Launch RViz with SLAM config
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', os.path.join(axbot_driver_dir, 'rviz', 'slam_view.rviz')],
            output='screen'
        )
    ])
