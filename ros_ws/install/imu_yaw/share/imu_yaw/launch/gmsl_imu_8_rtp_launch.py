import os
from ament_index_python.packages import get_package_share_directory
import launch
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    nodes = []
    for i in range(8):
        node = Node(
            package='video_receiver',
            executable='video_receiver',
            name=f'rtp_video_receiver_node{i}',
            parameters=[
            {'ip': '127.0.0.1'},
            {'port': 5004 + i},
            {'topic': f'/camera{5004 + i}/image_raw'},
            {'width': 1280},
            {'height': 720},
            {'timestamp_config': 0}
            ]
        )
        nodes.append(node)  

        # Configure Video Mux Node
        mux_node = Node(
            package='topic_tools',
            executable='mux',
            name='mux_node',
            arguments=['sel_video', '/camera5004/image_raw',
                        '/camera5005/image_raw',
                        '/camera5006/image_raw',
                        '/camera5007/image_raw',
                        '/camera5008/image_raw',
                        '/camera5009/image_raw',
                        '/camera5010/image_raw',
                        '/camera5011/image_raw',
            ]
        )

    rviz_param = launch.substitutions.LaunchConfiguration(
        'rviz_param',
        default=os.path.join(
            get_package_share_directory('imu_ros2'),
            'rviz',
            'imu_with_gmsl8.rviz'))

    """
    imu_ros2_node = Node(
        package='imu_ros2',
        executable='imu_ros2_node',
        parameters=[{'measured_data_topic_selection': 2},
                        # the IP address of the processing unit to which the IMU is connected to
                        {'iio_context_string': "ip:10.42.0.1"},],
        remappings=[('/imu','/imu/data_raw')],
        output='screen'
        )
    """

    imu_ros2_node = Node(
        package='imu_yaw',
        executable='imu_pub',
        output='screen'
        )

    imu_filter_madgwick_node = Node(
        package='imu_filter_madgwick',
        executable='imu_filter_madgwick_node',
        parameters=[{'use_mag': False},],
        output='screen'
        )

    rviz = Node(
        package='rviz2',
        executable='rviz2',
        arguments=['-d', rviz_param]
        )

    imu_yaw_mux = Node(
        package='imu_yaw',
        executable='yaw_mux8',
        arguments=[]
        )

    return LaunchDescription(
        nodes + [
            mux_node,
            imu_ros2_node,
            # imu_filter_madgwick_node,
            rviz,
            imu_yaw_mux,
        ]
    )
