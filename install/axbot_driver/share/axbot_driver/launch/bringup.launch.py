from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    axbot_driver_dir = get_package_share_directory('axbot_driver')
    
    return LaunchDescription([
        # Launch driver
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(axbot_driver_dir, 'launch', 'axbot_driver.launch.py')
            )
        ),
        
        # Launch RViz
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(axbot_driver_dir, 'launch', 'rviz.launch.py')
            )
        ),
    ])
