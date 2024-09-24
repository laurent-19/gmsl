import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
from math import atan2, degrees
from std_msgs.msg import String
from topic_tools_interfaces.srv import MuxSelect

class MuxSelectClient(Node):
    def __init__(self):
        super().__init__('mux_select_client')
        # Create a client for the mux_select service
        self.client = self.create_client(MuxSelect, '/mux_node/select') #needs to be node name given in launch

        # Wait for the service to become available
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting...')

        # Subscriber for IMU data
        self.imu_subscription = self.create_subscription(
            Imu,
            '/imu/data_raw',
            self.imu_callback,
            10)

        # Publisher for yaw angle
        self.yaw_publisher = self.create_publisher(String, '/yaw_angle', 1)
        
        # Publisher for camera feed index
        self.camera_feed_index_publisher = self.create_publisher(String, '/camera_feed', 1)
        self.camera_intervals = [
            '/camera5004/image_raw',
            '/camera5005/image_raw',
            '/camera5006/image_raw',
            '/camera5007/image_raw',
            '/camera5008/image_raw',
            '/camera5009/image_raw',
            '/camera5010/image_raw',
            '/camera5011/image_raw']
        self.camera_feed_index = 0
        self.camera_feed = '/camera5004/image_raw'
        self.camera_feed_prev = '/camera5004/image_raw'

    def send_request(self):
        # Create a request message
        request = MuxSelect.Request()
        request.topic = self.camera_feed

        # Send the request to the service
        future = self.client.call_async(request)

        # Wait for the response
        if future.done():
            try:
                response = future.result()
                if response.success:
                    pass
                    #self.get_logger().info(f"mux selected input: [{self.camera_feed}]")
                else:
                    self.get_logger().error(f"Failed to switch mux to {self.camera_feed}")
            except Exception as e:
                self.get_logger().error('Service call failed %r' % (e,))

    def imu_callback(self, msg):
        # Extract orientation from IMU message
        quaternion = msg.orientation
        yaw_degrees = String()
        yaw_degrees.data = str(self.quaternion_to_yaw(quaternion))

        # Publish yaw angle
        self.yaw_publisher.publish(yaw_degrees)

        # Calculate camera feed index
        self.camera_feed_index = int(self.quaternion_to_yaw(quaternion) / 90) % 4
        self.camera_feed = self.camera_intervals[self.camera_feed_index]

        camera_feed_msg = String()
        camera_feed_msg.data = self.camera_feed
        self.camera_feed_index_publisher.publish(camera_feed_msg)

        if(self.camera_feed != self.camera_feed_prev):
            self.camera_feed_prev = self.camera_feed
            # Send request to change mux topic
            self.send_request()

    def quaternion_to_yaw(self, quaternion):
        # Extract quaternion components
        w, x, y, z = quaternion.w, quaternion.x, quaternion.y, quaternion.z
        yaw = atan2(2.0 * (w * z + x * y), 1.0 - 2.0 * (y * y + z * z))
        yaw = degrees(yaw)
        yaw = (yaw + 360) % 360
        return yaw

def main(args=None):
    rclpy.init(args=args)
    node = MuxSelectClient()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()