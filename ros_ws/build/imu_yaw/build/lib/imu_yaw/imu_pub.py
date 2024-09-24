import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Quaternion
from sensor_msgs.msg import Imu
from math import sin, cos, pi

class YawPublisher(Node):
    def __init__(self):
        super().__init__('yaw_publisher')
        self.publisher_ = self.create_publisher(Imu, 'imu/data_raw', 10)
        self.timer_ = self.create_timer(1.0, self.publish_quaternion)
        self.yaw_angle = pi/8  # Initialize the yaw angle 
        
    def publish_quaternion(self):
        # Calculate the quaternion based on the updated yaw angle
        quaternion = Quaternion()
        quaternion.z = sin(self.yaw_angle / 2)
        quaternion.w = cos(self.yaw_angle / 2)

        imu_msg = Imu()
        imu_msg.orientation = quaternion
        imu_msg.header.frame_id = 'imu'
        self.publisher_.publish(imu_msg)
        self.yaw_angle += pi/4 # Move to the next camera angle (2*pi circle, 8 cameras)
        
def main(args=None):
    rclpy.init(args=args)
    yaw_publisher = YawPublisher()
    rclpy.spin(yaw_publisher)
    yaw_publisher.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()