from setuptools import find_packages, setup

package_name = 'pc2_listener'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='roboserver',
    maintainer_email='syazwaninurul02@gmail.com',
    description='LiDAR PointCloud2 listener',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
        	'pc2_listener = pc2_listener.pc2_listener:main',	
        ],
    },
)
