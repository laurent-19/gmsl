// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imu_ros2:msg/AccelGyroTempData.idl
// generated code does not contain a copyright notice

#ifndef IMU_ROS2__MSG__DETAIL__ACCEL_GYRO_TEMP_DATA__STRUCT_HPP_
#define IMU_ROS2__MSG__DETAIL__ACCEL_GYRO_TEMP_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'linear_acceleration'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__imu_ros2__msg__AccelGyroTempData __attribute__((deprecated))
#else
# define DEPRECATED__imu_ros2__msg__AccelGyroTempData __declspec(deprecated)
#endif

namespace imu_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AccelGyroTempData_
{
  using Type = AccelGyroTempData_<ContainerAllocator>;

  explicit AccelGyroTempData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    linear_acceleration(_init),
    angular_velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0.0;
    }
  }

  explicit AccelGyroTempData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    linear_acceleration(_alloc, _init),
    angular_velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _linear_acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _linear_acceleration_type linear_acceleration;
  using _angular_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;
  using _temperature_type =
    double;
  _temperature_type temperature;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__linear_acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->linear_acceleration = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__temperature(
    const double & _arg)
  {
    this->temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    imu_ros2::msg::AccelGyroTempData_<ContainerAllocator> *;
  using ConstRawPtr =
    const imu_ros2::msg::AccelGyroTempData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imu_ros2::msg::AccelGyroTempData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imu_ros2::msg::AccelGyroTempData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imu_ros2::msg::AccelGyroTempData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imu_ros2::msg::AccelGyroTempData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imu_ros2::msg::AccelGyroTempData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imu_ros2::msg::AccelGyroTempData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imu_ros2::msg::AccelGyroTempData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imu_ros2::msg::AccelGyroTempData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imu_ros2__msg__AccelGyroTempData
    std::shared_ptr<imu_ros2::msg::AccelGyroTempData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imu_ros2__msg__AccelGyroTempData
    std::shared_ptr<imu_ros2::msg::AccelGyroTempData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AccelGyroTempData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->linear_acceleration != other.linear_acceleration) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const AccelGyroTempData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AccelGyroTempData_

// alias to use template instance with default allocator
using AccelGyroTempData =
  imu_ros2::msg::AccelGyroTempData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace imu_ros2

#endif  // IMU_ROS2__MSG__DETAIL__ACCEL_GYRO_TEMP_DATA__STRUCT_HPP_
