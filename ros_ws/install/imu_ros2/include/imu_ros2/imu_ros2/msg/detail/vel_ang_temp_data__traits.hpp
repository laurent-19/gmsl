// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imu_ros2:msg/VelAngTempData.idl
// generated code does not contain a copyright notice

#ifndef IMU_ROS2__MSG__DETAIL__VEL_ANG_TEMP_DATA__TRAITS_HPP_
#define IMU_ROS2__MSG__DETAIL__VEL_ANG_TEMP_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "imu_ros2/msg/detail/vel_ang_temp_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'delta_velocity'
// Member 'delta_angle'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace imu_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const VelAngTempData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: delta_velocity
  {
    out << "delta_velocity: ";
    to_flow_style_yaml(msg.delta_velocity, out);
    out << ", ";
  }

  // member: delta_angle
  {
    out << "delta_angle: ";
    to_flow_style_yaml(msg.delta_angle, out);
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
  const VelAngTempData & msg,
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

  // member: delta_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_velocity:\n";
    to_block_style_yaml(msg.delta_velocity, out, indentation + 2);
  }

  // member: delta_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_angle:\n";
    to_block_style_yaml(msg.delta_angle, out, indentation + 2);
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

inline std::string to_yaml(const VelAngTempData & msg, bool use_flow_style = false)
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
  const imu_ros2::msg::VelAngTempData & msg,
  std::ostream & out, size_t indentation = 0)
{
  imu_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imu_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const imu_ros2::msg::VelAngTempData & msg)
{
  return imu_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<imu_ros2::msg::VelAngTempData>()
{
  return "imu_ros2::msg::VelAngTempData";
}

template<>
inline const char * name<imu_ros2::msg::VelAngTempData>()
{
  return "imu_ros2/msg/VelAngTempData";
}

template<>
struct has_fixed_size<imu_ros2::msg::VelAngTempData>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<imu_ros2::msg::VelAngTempData>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<imu_ros2::msg::VelAngTempData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMU_ROS2__MSG__DETAIL__VEL_ANG_TEMP_DATA__TRAITS_HPP_
