from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'imu_yaw'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='radu',
    maintainer_email='radu.etz@analog.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [ 
            'yaw_mux4 = imu_yaw.yaw_mux4:main',
            'yaw_mux8 = imu_yaw.yaw_mux8:main',
            'imu_pub = imu_yaw.imu_pub:main',
            'imu_yaw = imu_yaw.imu_yaw:main',
        ],
    },
)
