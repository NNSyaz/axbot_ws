from setuptools import setup
import os
from glob import glob

package_name = 'axbot_examples'

setup(
    name=package_name,
    version='1.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='rsb',
    maintainer_email='syazwaninurul02@gmail.com',
    description='Educational examples for AxBot robot',
    license='None',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'device_info_reader = axbot_examples.device_info_reader:main',
            'teleop_keyboard = axbot_examples.teleop_keyboard:main',
            'pose_logger = axbot_examples.pose_logger:main',
            'square_mover = axbot_examples.square_mover:main',
        ],
    },
)
