// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imu_ros2:msg/AccelGyroTempData.idl
// generated code does not contain a copyright notice

#ifndef IMU_ROS2__MSG__DETAIL__ACCEL_GYRO_TEMP_DATA__BUILDER_HPP_
#define IMU_ROS2__MSG__DETAIL__ACCEL_GYRO_TEMP_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imu_ros2/msg/detail/accel_gyro_temp_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imu_ros2
{

namespace msg
{

namespace builder
{

class Init_AccelGyroTempData_temperature
{
public:
  explicit Init_AccelGyroTempData_temperature(::imu_ros2::msg::AccelGyroTempData & msg)
  : msg_(msg)
  {}
  ::imu_ros2::msg::AccelGyroTempData temperature(::imu_ros2::msg::AccelGyroTempData::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imu_ros2::msg::AccelGyroTempData msg_;
};

class Init_AccelGyroTempData_angular_velocity
{
public:
  explicit Init_AccelGyroTempData_angular_velocity(::imu_ros2::msg::AccelGyroTempData & msg)
  : msg_(msg)
  {}
  Init_AccelGyroTempData_temperature angular_velocity(::imu_ros2::msg::AccelGyroTempData::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_AccelGyroTempData_temperature(msg_);
  }

private:
  ::imu_ros2::msg::AccelGyroTempData msg_;
};

class Init_AccelGyroTempData_linear_acceleration
{
public:
  explicit Init_AccelGyroTempData_linear_acceleration(::imu_ros2::msg::AccelGyroTempData & msg)
  : msg_(msg)
  {}
  Init_AccelGyroTempData_angular_velocity linear_acceleration(::imu_ros2::msg::AccelGyroTempData::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_AccelGyroTempData_angular_velocity(msg_);
  }

private:
  ::imu_ros2::msg::AccelGyroTempData msg_;
};

class Init_AccelGyroTempData_header
{
public:
  Init_AccelGyroTempData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AccelGyroTempData_linear_acceleration header(::imu_ros2::msg::AccelGyroTempData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AccelGyroTempData_linear_acceleration(msg_);
  }

private:
  ::imu_ros2::msg::AccelGyroTempData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imu_ros2::msg::AccelGyroTempData>()
{
  return imu_ros2::msg::builder::Init_AccelGyroTempData_header();
}

}  // namespace imu_ros2

#endif  // IMU_ROS2__MSG__DETAIL__ACCEL_GYRO_TEMP_DATA__BUILDER_HPP_
