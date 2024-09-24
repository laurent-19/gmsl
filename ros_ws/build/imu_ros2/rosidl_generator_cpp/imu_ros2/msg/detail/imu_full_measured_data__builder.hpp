// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imu_ros2:msg/ImuFullMeasuredData.idl
// generated code does not contain a copyright notice

#ifndef IMU_ROS2__MSG__DETAIL__IMU_FULL_MEASURED_DATA__BUILDER_HPP_
#define IMU_ROS2__MSG__DETAIL__IMU_FULL_MEASURED_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imu_ros2/msg/detail/imu_full_measured_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imu_ros2
{

namespace msg
{

namespace builder
{

class Init_ImuFullMeasuredData_temperature
{
public:
  explicit Init_ImuFullMeasuredData_temperature(::imu_ros2::msg::ImuFullMeasuredData & msg)
  : msg_(msg)
  {}
  ::imu_ros2::msg::ImuFullMeasuredData temperature(::imu_ros2::msg::ImuFullMeasuredData::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imu_ros2::msg::ImuFullMeasuredData msg_;
};

class Init_ImuFullMeasuredData_delta_angle
{
public:
  explicit Init_ImuFullMeasuredData_delta_angle(::imu_ros2::msg::ImuFullMeasuredData & msg)
  : msg_(msg)
  {}
  Init_ImuFullMeasuredData_temperature delta_angle(::imu_ros2::msg::ImuFullMeasuredData::_delta_angle_type arg)
  {
    msg_.delta_angle = std::move(arg);
    return Init_ImuFullMeasuredData_temperature(msg_);
  }

private:
  ::imu_ros2::msg::ImuFullMeasuredData msg_;
};

class Init_ImuFullMeasuredData_delta_velocity
{
public:
  explicit Init_ImuFullMeasuredData_delta_velocity(::imu_ros2::msg::ImuFullMeasuredData & msg)
  : msg_(msg)
  {}
  Init_ImuFullMeasuredData_delta_angle delta_velocity(::imu_ros2::msg::ImuFullMeasuredData::_delta_velocity_type arg)
  {
    msg_.delta_velocity = std::move(arg);
    return Init_ImuFullMeasuredData_delta_angle(msg_);
  }

private:
  ::imu_ros2::msg::ImuFullMeasuredData msg_;
};

class Init_ImuFullMeasuredData_angular_velocity
{
public:
  explicit Init_ImuFullMeasuredData_angular_velocity(::imu_ros2::msg::ImuFullMeasuredData & msg)
  : msg_(msg)
  {}
  Init_ImuFullMeasuredData_delta_velocity angular_velocity(::imu_ros2::msg::ImuFullMeasuredData::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_ImuFullMeasuredData_delta_velocity(msg_);
  }

private:
  ::imu_ros2::msg::ImuFullMeasuredData msg_;
};

class Init_ImuFullMeasuredData_linear_acceleration
{
public:
  explicit Init_ImuFullMeasuredData_linear_acceleration(::imu_ros2::msg::ImuFullMeasuredData & msg)
  : msg_(msg)
  {}
  Init_ImuFullMeasuredData_angular_velocity linear_acceleration(::imu_ros2::msg::ImuFullMeasuredData::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_ImuFullMeasuredData_angular_velocity(msg_);
  }

private:
  ::imu_ros2::msg::ImuFullMeasuredData msg_;
};

class Init_ImuFullMeasuredData_header
{
public:
  Init_ImuFullMeasuredData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuFullMeasuredData_linear_acceleration header(::imu_ros2::msg::ImuFullMeasuredData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ImuFullMeasuredData_linear_acceleration(msg_);
  }

private:
  ::imu_ros2::msg::ImuFullMeasuredData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imu_ros2::msg::ImuFullMeasuredData>()
{
  return imu_ros2::msg::builder::Init_ImuFullMeasuredData_header();
}

}  // namespace imu_ros2

#endif  // IMU_ROS2__MSG__DETAIL__IMU_FULL_MEASURED_DATA__BUILDER_HPP_
