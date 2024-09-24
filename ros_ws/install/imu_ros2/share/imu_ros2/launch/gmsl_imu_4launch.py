import os
from ament_index_python.packages import get_package_share_directory
import launch
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    # Your camera namespace
    camera_names = ['camera5004', 'camera5005', 'camera5006', 'camera5007']
    # Location of configuration directory
    config_dir = os.path.join(get_package_share_directory('gscam2'), 'cfg')

    # Parameters file
    #params_file = os.path.join(config_dir, 'params.yaml')

    # Camera calibration file
    camera_config = 'file://' + os.path.join(config_dir, 'my_camera.ini')

    nodes = []
    for index, camera_name in enumerate(camera_names):
        node = Node(
        package='gscam2',
        executable='gscam_main',
        output='screen',
        name='gscam_publisher_' + str(index),
        namespace=camera_name,
        parameters=[
            {
                'camera_name': camera_name,  # Camera Name
                'camera_info_url': camera_config,  # Camera calibration information
                'preroll' : False,
                'use_gst_timestamps' : False,
                'gscam_config': 'udpsrc caps="application/x-rtp,\ sampling=YCbCr-4:2:2,\ depth=(string)8,\ width=(string)1920,\ height=(string)1080" port="'+str(5004+index)+'" ! rtpvrawdepay ! videoconvert',
                'frame_id' : 'camera' + str(5004+index) + '_frame',
            },
        ],
        # Remap outputs to the correct namespace
        remappings=[
            ('/image_raw', '/' + camera_name + '/image_raw'),
            ('/camera_info', '/' + camera_name + '/camera_info'),
        ],
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
            ]
        )


    rviz_param = launch.substitutions.LaunchConfiguration(
        'rviz_param',
        default=os.path.join(
            get_package_share_directory('imu_ros2'),
            'rviz',
            'imu_with_gmsl4.rviz'))

    imu_ros2_node = Node(
        package='imu_ros2',
        executable='imu_ros2_node',
        parameters=[{'measured_data_topic_selection': 2},
                    # the IP address of the processing unit to which the IMU is connected to
                    {'iio_context_string': "ip:10.42.0.1"},],
        remappings=[('/imu','/imu/data_raw')],
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
        executable='yaw_mux4',
        arguments=[]
        )

    return LaunchDescription(
        nodes + [
            mux_node,
            imu_ros2_node,
            imu_filter_madgwick_node,
            rviz,
            imu_yaw_mux,
        ]
    )
