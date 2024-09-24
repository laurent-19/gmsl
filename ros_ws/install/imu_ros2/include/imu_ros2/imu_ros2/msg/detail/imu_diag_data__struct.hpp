// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imu_ros2:msg/ImuDiagData.idl
// generated code does not contain a copyright notice

#ifndef IMU_ROS2__MSG__DETAIL__IMU_DIAG_DATA__STRUCT_HPP_
#define IMU_ROS2__MSG__DETAIL__IMU_DIAG_DATA__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__imu_ros2__msg__ImuDiagData __attribute__((deprecated))
#else
# define DEPRECATED__imu_ros2__msg__ImuDiagData __declspec(deprecated)
#endif

namespace imu_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImuDiagData_
{
  using Type = ImuDiagData_<ContainerAllocator>;

  explicit ImuDiagData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->diag_data_path_overrun = false;
      this->diag_flash_memory_update_error = false;
      this->diag_spi_communication_error = false;
      this->diag_standby_mode = false;
      this->diag_sensor_self_test_error = false;
      this->diag_flash_memory_test_error = false;
      this->diag_clock_error = false;
      this->diag_acceleration_self_test_error = false;
      this->diag_gyroscope1_self_test_error = false;
      this->diag_gyroscope2_self_test_error = false;
      this->diag_flash_memory_write_count_exceeded_error = false;
      this->flash_counter = 0ul;
    }
  }

  explicit ImuDiagData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->diag_data_path_overrun = false;
      this->diag_flash_memory_update_error = false;
      this->diag_spi_communication_error = false;
      this->diag_standby_mode = false;
      this->diag_sensor_self_test_error = false;
      this->diag_flash_memory_test_error = false;
      this->diag_clock_error = false;
      this->diag_acceleration_self_test_error = false;
      this->diag_gyroscope1_self_test_error = false;
      this->diag_gyroscope2_self_test_error = false;
      this->diag_flash_memory_write_count_exceeded_error = false;
      this->flash_counter = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _diag_data_path_overrun_type =
    bool;
  _diag_data_path_overrun_type diag_data_path_overrun;
  using _diag_flash_memory_update_error_type =
    bool;
  _diag_flash_memory_update_error_type diag_flash_memory_update_error;
  using _diag_spi_communication_error_type =
    bool;
  _diag_spi_communication_error_type diag_spi_communication_error;
  using _diag_standby_mode_type =
    bool;
  _diag_standby_mode_type diag_standby_mode;
  using _diag_sensor_self_test_error_type =
    bool;
  _diag_sensor_self_test_error_type diag_sensor_self_test_error;
  using _diag_flash_memory_test_error_type =
    bool;
  _diag_flash_memory_test_error_type diag_flash_memory_test_error;
  using _diag_clock_error_type =
    bool;
  _diag_clock_error_type diag_clock_error;
  using _diag_acceleration_self_test_error_type =
    bool;
  _diag_acceleration_self_test_error_type diag_acceleration_self_test_error;
  using _diag_gyroscope1_self_test_error_type =
    bool;
  _diag_gyroscope1_self_test_error_type diag_gyroscope1_self_test_error;
  using _diag_gyroscope2_self_test_error_type =
    bool;
  _diag_gyroscope2_self_test_error_type diag_gyroscope2_self_test_error;
  using _diag_flash_memory_write_count_exceeded_error_type =
    bool;
  _diag_flash_memory_write_count_exceeded_error_type diag_flash_memory_write_count_exceeded_error;
  using _flash_counter_type =
    uint32_t;
  _flash_counter_type flash_counter;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__diag_data_path_overrun(
    const bool & _arg)
  {
    this->diag_data_path_overrun = _arg;
    return *this;
  }
  Type & set__diag_flash_memory_update_error(
    const bool & _arg)
  {
    this->diag_flash_memory_update_error = _arg;
    return *this;
  }
  Type & set__diag_spi_communication_error(
    const bool & _arg)
  {
    this->diag_spi_communication_error = _arg;
    return *this;
  }
  Type & set__diag_standby_mode(
    const bool & _arg)
  {
    this->diag_standby_mode = _arg;
    return *this;
  }
  Type & set__diag_sensor_self_test_error(
    const bool & _arg)
  {
    this->diag_sensor_self_test_error = _arg;
    return *this;
  }
  Type & set__diag_flash_memory_test_error(
    const bool & _arg)
  {
    this->diag_flash_memory_test_error = _arg;
    return *this;
  }
  Type & set__diag_clock_error(
    const bool & _arg)
  {
    this->diag_clock_error = _arg;
    return *this;
  }
  Type & set__diag_acceleration_self_test_error(
    const bool & _arg)
  {
    this->diag_acceleration_self_test_error = _arg;
    return *this;
  }
  Type & set__diag_gyroscope1_self_test_error(
    const bool & _arg)
  {
    this->diag_gyroscope1_self_test_error = _arg;
    return *this;
  }
  Type & set__diag_gyroscope2_self_test_error(
    const bool & _arg)
  {
    this->diag_gyroscope2_self_test_error = _arg;
    return *this;
  }
  Type & set__diag_flash_memory_write_count_exceeded_error(
    const bool & _arg)
  {
    this->diag_flash_memory_write_count_exceeded_error = _arg;
    return *this;
  }
  Type & set__flash_counter(
    const uint32_t & _arg)
  {
    this->flash_counter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    imu_ros2::msg::ImuDiagData_<ContainerAllocator> *;
  using ConstRawPtr =
    const imu_ros2::msg::ImuDiagData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imu_ros2::msg::ImuDiagData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imu_ros2::msg::ImuDiagData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imu_ros2::msg::ImuDiagData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imu_ros2::msg::ImuDiagData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imu_ros2::msg::ImuDiagData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imu_ros2::msg::ImuDiagData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imu_ros2::msg::ImuDiagData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imu_ros2::msg::ImuDiagData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imu_ros2__msg__ImuDiagData
    std::shared_ptr<imu_ros2::msg::ImuDiagData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imu_ros2__msg__ImuDiagData
    std::shared_ptr<imu_ros2::msg::ImuDiagData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuDiagData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->diag_data_path_overrun != other.diag_data_path_overrun) {
      return false;
    }
    if (this->diag_flash_memory_update_error != other.diag_flash_memory_update_error) {
      return false;
    }
    if (this->diag_spi_communication_error != other.diag_spi_communication_error) {
      return false;
    }
    if (this->diag_standby_mode != other.diag_standby_mode) {
      return false;
    }
    if (this->diag_sensor_self_test_error != other.diag_sensor_self_test_error) {
      return false;
    }
    if (this->diag_flash_memory_test_error != other.diag_flash_memory_test_error) {
      return false;
    }
    if (this->diag_clock_error != other.diag_clock_error) {
      return false;
    }
    if (this->diag_acceleration_self_test_error != other.diag_acceleration_self_test_error) {
      return false;
    }
    if (this->diag_gyroscope1_self_test_error != other.diag_gyroscope1_self_test_error) {
      return false;
    }
    if (this->diag_gyroscope2_self_test_error != other.diag_gyroscope2_self_test_error) {
      return false;
    }
    if (this->diag_flash_memory_write_count_exceeded_error != other.diag_flash_memory_write_count_exceeded_error) {
      return false;
    }
    if (this->flash_counter != other.flash_counter) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuDiagData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuDiagData_

// alias to use template instance with default allocator
using ImuDiagData =
  imu_ros2::msg::ImuDiagData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace imu_ros2

#endif  // IMU_ROS2__MSG__DETAIL__IMU_DIAG_DATA__STRUCT_HPP_
