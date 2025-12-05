from setuptools import find_packages
from setuptools import setup

setup(
    name='axbot_interfaces',
    version='1.0.0',
    packages=find_packages(
        include=('axbot_interfaces', 'axbot_interfaces.*')),
)
