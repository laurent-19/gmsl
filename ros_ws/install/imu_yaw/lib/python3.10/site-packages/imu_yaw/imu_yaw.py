import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu 
from math import atan2, degrees
from std_msgs.msg import String

class YawExtractorNode(Node):
    def __init__(self):
        super().__init__('yaw_extract_node')

        self.imu_subscription = self.create_subscription(
            Imu,
            'imu/data_raw',
            self.imu_callback,
            10)

        self.yaw_publisher = self.create_publisher(String, 'yaw_angle', 1)
        self.camera_feed_index_publisher = self.create_publisher(String, 'camera_feed_index',1)

        self.camera_intervals = ['camera5004/image_raw',
                                'camera5005/image_raw',
                                'camera5006/image_raw', 
                                'camera5007/image_raw',
                                'camera5008/image_raw',
                                'camera5009/image_raw',                               
                                'camera5010/image_raw',
                                'camera5011/image_raw']

    def imu_callback(self, msg):
        quaternion = msg.orientation
        yaw_degrees = self.quaternion_to_yaw(quaternion)
        yaw_str = String()
        yaw_str.data = str(yaw_degrees)

        self.yaw_publisher.publish(yaw_str)

        camera_feed_index = int(yaw_degrees / 45) % 8
        camera_feed = String()
        camera_feed.data = self.camera_intervals[camera_feed_index]
        self.camera_feed_index_publisher.publish(camera_feed)

    def quaternion_to_yaw(self, quaternion):
        w, x, y, z = quaternion.w, quaternion.x, quaternion.y, quaternion.z
        yaw = atan2(2.0 * (w * z + x *y), 1.0 - 2.0 * (y * y + z * z))
        yaw = degrees(yaw)
        yaw = (yaw + 360) % 360
        return yaw

def main(args=None):
    rclpy.init(args=args)
    node = YawExtractorNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()

