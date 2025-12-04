from setuptools import setup
import os
from glob import glob

package_name = 'axbot_driver'

setup(
    name=package_name,
    version='1.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
        (os.path.join('share', package_name, 'config'), glob('config/*.yaml')),
        (os.path.join('share', package_name, 'rviz'), glob('rviz/*.rviz')),
        (os.path.join('share', package_name, 'rviz'), glob('rviz/*.rviz')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='rsb',
    maintainer_email='syazwaninurul@gmail.com',
    description='ROS2 driver for AxBot Fielder robot',
    license='None',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'axbot_node = axbot_driver.axbot_node:main',
            'scan_bridge = axbot_driver.scan_bridge:main',
        ],
    },
)
