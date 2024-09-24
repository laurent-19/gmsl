// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imu_ros2:msg/ImuIdentificationData.idl
// generated code does not contain a copyright notice

#ifndef IMU_ROS2__MSG__DETAIL__IMU_IDENTIFICATION_DATA__TRAITS_HPP_
#define IMU_ROS2__MSG__DETAIL__IMU_IDENTIFICATION_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "imu_ros2/msg/detail/imu_identification_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace imu_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImuIdentificationData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: firmware_revision
  {
    out << "firmware_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_revision, out);
    out << ", ";
  }

  // member: firmware_date
  {
    out << "firmware_date: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_date, out);
    out << ", ";
  }

  // member: product_id
  {
    out << "product_id: ";
    rosidl_generator_traits::value_to_yaml(msg.product_id, out);
    out << ", ";
  }

  // member: serial_number
  {
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << ", ";
  }

  // member: gyroscope_measurement_range
  {
    out << "gyroscope_measurement_range: ";
    rosidl_generator_traits::value_to_yaml(msg.gyroscope_measurement_range, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImuIdentificationData & msg,
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

  // member: firmware_revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_revision, out);
    out << "\n";
  }

  // member: firmware_date
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware_date: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_date, out);
    out << "\n";
  }

  // member: product_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "product_id: ";
    rosidl_generator_traits::value_to_yaml(msg.product_id, out);
    out << "\n";
  }

  // member: serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << "\n";
  }

  // member: gyroscope_measurement_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyroscope_measurement_range: ";
    rosidl_generator_traits::value_to_yaml(msg.gyroscope_measurement_range, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImuIdentificationData & msg, bool use_flow_style = false)
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
  const imu_ros2::msg::ImuIdentificationData & msg,
  std::ostream & out, size_t indentation = 0)
{
  imu_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imu_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const imu_ros2::msg::ImuIdentificationData & msg)
{
  return imu_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<imu_ros2::msg::ImuIdentificationData>()
{
  return "imu_ros2::msg::ImuIdentificationData";
}

template<>
inline const char * name<imu_ros2::msg::ImuIdentificationData>()
{
  return "imu_ros2/msg/ImuIdentificationData";
}

template<>
struct has_fixed_size<imu_ros2::msg::ImuIdentificationData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<imu_ros2::msg::ImuIdentificationData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<imu_ros2::msg::ImuIdentificationData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMU_ROS2__MSG__DETAIL__IMU_IDENTIFICATION_DATA__TRAITS_HPP_
