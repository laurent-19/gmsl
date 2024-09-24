// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imu_ros2:msg/ImuDiagData.idl
// generated code does not contain a copyright notice

#ifndef IMU_ROS2__MSG__DETAIL__IMU_DIAG_DATA__TRAITS_HPP_
#define IMU_ROS2__MSG__DETAIL__IMU_DIAG_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "imu_ros2/msg/detail/imu_diag_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace imu_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImuDiagData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: diag_data_path_overrun
  {
    out << "diag_data_path_overrun: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_data_path_overrun, out);
    out << ", ";
  }

  // member: diag_flash_memory_update_error
  {
    out << "diag_flash_memory_update_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_flash_memory_update_error, out);
    out << ", ";
  }

  // member: diag_spi_communication_error
  {
    out << "diag_spi_communication_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_spi_communication_error, out);
    out << ", ";
  }

  // member: diag_standby_mode
  {
    out << "diag_standby_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_standby_mode, out);
    out << ", ";
  }

  // member: diag_sensor_self_test_error
  {
    out << "diag_sensor_self_test_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_sensor_self_test_error, out);
    out << ", ";
  }

  // member: diag_flash_memory_test_error
  {
    out << "diag_flash_memory_test_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_flash_memory_test_error, out);
    out << ", ";
  }

  // member: diag_clock_error
  {
    out << "diag_clock_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_clock_error, out);
    out << ", ";
  }

  // member: diag_acceleration_self_test_error
  {
    out << "diag_acceleration_self_test_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_acceleration_self_test_error, out);
    out << ", ";
  }

  // member: diag_gyroscope1_self_test_error
  {
    out << "diag_gyroscope1_self_test_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_gyroscope1_self_test_error, out);
    out << ", ";
  }

  // member: diag_gyroscope2_self_test_error
  {
    out << "diag_gyroscope2_self_test_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_gyroscope2_self_test_error, out);
    out << ", ";
  }

  // member: diag_flash_memory_write_count_exceeded_error
  {
    out << "diag_flash_memory_write_count_exceeded_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_flash_memory_write_count_exceeded_error, out);
    out << ", ";
  }

  // member: flash_counter
  {
    out << "flash_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.flash_counter, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImuDiagData & msg,
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

  // member: diag_data_path_overrun
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_data_path_overrun: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_data_path_overrun, out);
    out << "\n";
  }

  // member: diag_flash_memory_update_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_flash_memory_update_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_flash_memory_update_error, out);
    out << "\n";
  }

  // member: diag_spi_communication_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_spi_communication_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_spi_communication_error, out);
    out << "\n";
  }

  // member: diag_standby_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_standby_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_standby_mode, out);
    out << "\n";
  }

  // member: diag_sensor_self_test_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_sensor_self_test_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_sensor_self_test_error, out);
    out << "\n";
  }

  // member: diag_flash_memory_test_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_flash_memory_test_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_flash_memory_test_error, out);
    out << "\n";
  }

  // member: diag_clock_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_clock_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_clock_error, out);
    out << "\n";
  }

  // member: diag_acceleration_self_test_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_acceleration_self_test_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_acceleration_self_test_error, out);
    out << "\n";
  }

  // member: diag_gyroscope1_self_test_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_gyroscope1_self_test_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_gyroscope1_self_test_error, out);
    out << "\n";
  }

  // member: diag_gyroscope2_self_test_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_gyroscope2_self_test_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_gyroscope2_self_test_error, out);
    out << "\n";
  }

  // member: diag_flash_memory_write_count_exceeded_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_flash_memory_write_count_exceeded_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_flash_memory_write_count_exceeded_error, out);
    out << "\n";
  }

  // member: flash_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flash_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.flash_counter, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImuDiagData & msg, bool use_flow_style = false)
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
  const imu_ros2::msg::ImuDiagData & msg,
  std::ostream & out, size_t indentation = 0)
{
  imu_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use imu_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const imu_ros2::msg::ImuDiagData & msg)
{
  return imu_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<imu_ros2::msg::ImuDiagData>()
{
  return "imu_ros2::msg::ImuDiagData";
}

template<>
inline const char * name<imu_ros2::msg::ImuDiagData>()
{
  return "imu_ros2/msg/ImuDiagData";
}

template<>
struct has_fixed_size<imu_ros2::msg::ImuDiagData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<imu_ros2::msg::ImuDiagData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<imu_ros2::msg::ImuDiagData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMU_ROS2__MSG__DETAIL__IMU_DIAG_DATA__TRAITS_HPP_
