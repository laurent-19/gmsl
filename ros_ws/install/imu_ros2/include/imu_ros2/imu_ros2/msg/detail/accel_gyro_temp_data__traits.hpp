// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imu_ros2:msg/AccelGyroTempData.idl
// generated code does not contain a copyright notice

#ifndef IMU_ROS2__MSG__DETAIL__ACCEL_GYRO_TEMP_DATA__TRAITS_HPP_
#define IMU_ROS2__MSG__DETAIL__ACCEL_GYRO_TEMP_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "imu_ros2/msg/detail/accel_gyro_temp_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'linear_acceleration'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace imu_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const AccelGyroTempData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: linear_acceleration
  {
    out << "linear_acceleration: ";
    to_flow_style_yaml(msg.linear_acceleration, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    to_flow_style_yaml(msg.angular_velocity, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AccelGyroTempData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: linear_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_acceleration:\n";
    to_block_style_yaml(msg.linear_acceleration, out, indentation + 2);
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity:\n";
    to_block_style_yaml(msg.angular_velocity, out, indentation + 2);
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AccelGyroTempData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace imu_ros2

namespace rosidl_generator_traits
{

[[deprecated("use imu_ros2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const imu_ros2::msg::AccelGyroTempData & msg,
  std::ostream & out, size_t indentation = 0)
{
  imu_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imu_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const imu_ros2::msg::AccelGyroTempData & msg)
{
  return imu_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<imu_ros2::msg::AccelGyroTempData>()
{
  return "imu_ros2::msg::AccelGyroTempData";
}

template<>
inline const char * name<imu_ros2::msg::AccelGyroTempData>()
{
  return "imu_ros2/msg/AccelGyroTempData";
}

template<>
struct has_fixed_size<imu_ros2::msg::AccelGyroTempData>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<imu_ros2::msg::AccelGyroTempData>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<imu_ros2::msg::AccelGyroTempData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMU_ROS2__MSG__DETAIL__ACCEL_GYRO_TEMP_DATA__TRAITS_HPP_
