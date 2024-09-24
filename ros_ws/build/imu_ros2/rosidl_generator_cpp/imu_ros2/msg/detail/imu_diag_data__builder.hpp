// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imu_ros2:msg/ImuDiagData.idl
// generated code does not contain a copyright notice

#ifndef IMU_ROS2__MSG__DETAIL__IMU_DIAG_DATA__BUILDER_HPP_
#define IMU_ROS2__MSG__DETAIL__IMU_DIAG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "imu_ros2/msg/detail/imu_diag_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace imu_ros2
{

namespace msg
{

namespace builder
{

class Init_ImuDiagData_flash_counter
{
public:
  explicit Init_ImuDiagData_flash_counter(::imu_ros2::msg::ImuDiagData & msg)
  : msg_(msg)
  {}
  ::imu_ros2::msg::ImuDiagData flash_counter(::imu_ros2::msg::ImuDiagData::_flash_counter_type arg)
  {
    msg_.flash_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imu_ros2::msg::ImuDiagData msg_;
};

class Init_ImuDiagData_diag_flash_memory_write_count_exceeded_error
{
public:
  explicit Init_ImuDiagData_diag_flash_memory_write_count_exceeded_error(::imu_ros2::msg::ImuDiagData & msg)
  : msg_(msg)
  {}
  Init_ImuDiagData_flash_counter diag_flash_memory_write_count_exceeded_error(::imu_ros2::msg::ImuDiagData::_diag_flash_memory_write_count_exceeded_error_type arg)
  {
    msg_.diag_flash_memory_write_count_exceeded_error = std::move(arg);
    return Init_ImuDiagData_flash_counter(msg_);
  }

private:
  ::imu_ros2::msg::ImuDiagData msg_;
};

class Init_ImuDiagData_diag_gyroscope2_self_test_error
{
public:
  explicit Init_ImuDiagData_diag_gyroscope2_self_test_error(::imu_ros2::msg::ImuDiagData & msg)
  : msg_(msg)
  {}
  Init_ImuDiagData_diag_flash_memory_write_count_exceeded_error diag_gyroscope2_self_test_error(::imu_ros2::msg::ImuDiagData::_diag_gyroscope2_self_test_error_type arg)
  {
    msg_.diag_gyroscope2_self_test_error = std::move(arg);
    return Init_ImuDiagData_diag_flash_memory_write_count_exceeded_error(msg_);
  }

private:
  ::imu_ros2::msg::ImuDiagData msg_;
};

class Init_ImuDiagData_diag_gyroscope1_self_test_error
{
public:
  explicit Init_ImuDiagData_diag_gyroscope1_self_test_error(::imu_ros2::msg::ImuDiagData & msg)
  : msg_(msg)
  {}
  Init_ImuDiagData_diag_gyroscope2_self_test_error diag_gyroscope1_self_test_error(::imu_ros2::msg::ImuDiagData::_diag_gyroscope1_self_test_error_type arg)
  {
    msg_.diag_gyroscope1_self_test_error = std::move(arg);
    return Init_ImuDiagData_diag_gyroscope2_self_test_error(msg_);
  }

private:
  ::imu_ros2::msg::ImuDiagData msg_;
};

class Init_ImuDiagData_diag_acceleration_self_test_error
{
public:
  explicit Init_ImuDiagData_diag_acceleration_self_test_error(::imu_ros2::msg::ImuDiagData & msg)
  : msg_(msg)
  {}
  Init_ImuDiagData_diag_gyroscope1_self_test_error diag_acceleration_self_test_error(::imu_ros2::msg::ImuDiagData::_diag_acceleration_self_test_error_type arg)
  {
    msg_.diag_acceleration_self_test_error = std::move(arg);
    return Init_ImuDiagData_diag_gyroscope1_self_test_error(msg_);
  }

private:
  ::imu_ros2::msg::ImuDiagData msg_;
};

class Init_ImuDiagData_diag_clock_error
{
public:
  explicit Init_ImuDiagData_diag_clock_error(::imu_ros2::msg::ImuDiagData & msg)
  : msg_(msg)
  {}
  Init_ImuDiagData_diag_acceleration_self_test_error diag_clock_error(::imu_ros2::msg::ImuDiagData::_diag_clock_error_type arg)
  {
    msg_.diag_clock_error = std::move(arg);
    return Init_ImuDiagData_diag_acceleration_self_test_error(msg_);
  }

private:
  ::imu_ros2::msg::ImuDiagData msg_;
};

class Init_ImuDiagData_diag_flash_memory_test_error
{
public:
  explicit Init_ImuDiagData_diag_flash_memory_test_error(::imu_ros2::msg::ImuDiagData & msg)
  : msg_(msg)
  {}
  Init_ImuDiagData_diag_clock_error diag_flash_memory_test_error(::imu_ros2::msg::ImuDiagData::_diag_flash_memory_test_error_type arg)
  {
    msg_.diag_flash_memory_test_error = std::move(arg);
    return Init_ImuDiagData_diag_clock_error(msg_);
  }

private:
  ::imu_ros2::msg::ImuDiagData msg_;
};

class Init_ImuDiagData_diag_sensor_self_test_error
{
public:
  explicit Init_ImuDiagData_diag_sensor_self_test_error(::imu_ros2::msg::ImuDiagData & msg)
  : msg_(msg)
  {}
  Init_ImuDiagData_diag_flash_memory_test_error diag_sensor_self_test_error(::imu_ros2::msg::ImuDiagData::_diag_sensor_self_test_error_type arg)
  {
    msg_.diag_sensor_self_test_error = std::move(arg);
    return Init_ImuDiagData_diag_flash_memory_test_error(msg_);
  }

private:
  ::imu_ros2::msg::ImuDiagData msg_;
};

class Init_ImuDiagData_diag_standby_mode
{
public:
  explicit Init_ImuDiagData_diag_standby_mode(::imu_ros2::msg::ImuDiagData & msg)
  : msg_(msg)
  {}
  Init_ImuDiagData_diag_sensor_self_test_error diag_standby_mode(::imu_ros2::msg::ImuDiagData::_diag_standby_mode_type arg)
  {
    msg_.diag_standby_mode = std::move(arg);
    return Init_ImuDiagData_diag_sensor_self_test_error(msg_);
  }

private:
  ::imu_ros2::msg::ImuDiagData msg_;
};

class Init_ImuDiagData_diag_spi_communication_error
{
public:
  explicit Init_ImuDiagData_diag_spi_communication_error(::imu_ros2::msg::ImuDiagData & msg)
  : msg_(msg)
  {}
  Init_ImuDiagData_diag_standby_mode diag_spi_communication_error(::imu_ros2::msg::ImuDiagData::_diag_spi_communication_error_type arg)
  {
    msg_.diag_spi_communication_error = std::move(arg);
    return Init_ImuDiagData_diag_standby_mode(msg_);
  }

private:
  ::imu_ros2::msg::ImuDiagData msg_;
};

class Init_ImuDiagData_diag_flash_memory_update_error
{
public:
  explicit Init_ImuDiagData_diag_flash_memory_update_error(::imu_ros2::msg::ImuDiagData & msg)
  : msg_(msg)
  {}
  Init_ImuDiagData_diag_spi_communication_error diag_flash_memory_update_error(::imu_ros2::msg::ImuDiagData::_diag_flash_memory_update_error_type arg)
  {
    msg_.diag_flash_memory_update_error = std::move(arg);
    return Init_ImuDiagData_diag_spi_communication_error(msg_);
  }

private:
  ::imu_ros2::msg::ImuDiagData msg_;
};

class Init_ImuDiagData_diag_data_path_overrun
{
public:
  explicit Init_ImuDiagData_diag_data_path_overrun(::imu_ros2::msg::ImuDiagData & msg)
  : msg_(msg)
  {}
  Init_ImuDiagData_diag_flash_memory_update_error diag_data_path_overrun(::imu_ros2::msg::ImuDiagData::_diag_data_path_overrun_type arg)
  {
    msg_.diag_data_path_overrun = std::move(arg);
    return Init_ImuDiagData_diag_flash_memory_update_error(msg_);
  }

private:
  ::imu_ros2::msg::ImuDiagData msg_;
};

class Init_ImuDiagData_header
{
public:
  Init_ImuDiagData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuDiagData_diag_data_path_overrun header(::imu_ros2::msg::ImuDiagData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ImuDiagData_diag_data_path_overrun(msg_);
  }

private:
  ::imu_ros2::msg::ImuDiagData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imu_ros2::msg::ImuDiagData>()
{
  return imu_ros2::msg::builder::Init_ImuDiagData_header();
}

}  // namespace imu_ros2

#endif  // IMU_ROS2__MSG__DETAIL__IMU_DIAG_DATA__BUILDER_HPP_
