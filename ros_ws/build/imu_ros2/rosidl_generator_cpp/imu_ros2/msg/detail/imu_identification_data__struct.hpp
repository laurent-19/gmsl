// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from imu_ros2:msg/ImuIdentificationData.idl
// generated code does not contain a copyright notice

#ifndef IMU_ROS2__MSG__DETAIL__IMU_IDENTIFICATION_DATA__STRUCT_HPP_
#define IMU_ROS2__MSG__DETAIL__IMU_IDENTIFICATION_DATA__STRUCT_HPP_

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
# define DEPRECATED__imu_ros2__msg__ImuIdentificationData __attribute__((deprecated))
#else
# define DEPRECATED__imu_ros2__msg__ImuIdentificationData __declspec(deprecated)
#endif

namespace imu_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImuIdentificationData_
{
  using Type = ImuIdentificationData_<ContainerAllocator>;

  explicit ImuIdentificationData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->firmware_revision = "";
      this->firmware_date = "";
      this->product_id = 0ul;
      this->serial_number = 0ul;
      this->gyroscope_measurement_range = "";
    }
  }

  explicit ImuIdentificationData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    firmware_revision(_alloc),
    firmware_date(_alloc),
    gyroscope_measurement_range(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->firmware_revision = "";
      this->firmware_date = "";
      this->product_id = 0ul;
      this->serial_number = 0ul;
      this->gyroscope_measurement_range = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _firmware_revision_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _firmware_revision_type firmware_revision;
  using _firmware_date_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _firmware_date_type firmware_date;
  using _product_id_type =
    uint32_t;
  _product_id_type product_id;
  using _serial_number_type =
    uint32_t;
  _serial_number_type serial_number;
  using _gyroscope_measurement_range_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _gyroscope_measurement_range_type gyroscope_measurement_range;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__firmware_revision(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->firmware_revision = _arg;
    return *this;
  }
  Type & set__firmware_date(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->firmware_date = _arg;
    return *this;
  }
  Type & set__product_id(
    const uint32_t & _arg)
  {
    this->product_id = _arg;
    return *this;
  }
  Type & set__serial_number(
    const uint32_t & _arg)
  {
    this->serial_number = _arg;
    return *this;
  }
  Type & set__gyroscope_measurement_range(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->gyroscope_measurement_range = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    imu_ros2::msg::ImuIdentificationData_<ContainerAllocator> *;
  using ConstRawPtr =
    const imu_ros2::msg::ImuIdentificationData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<imu_ros2::msg::ImuIdentificationData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<imu_ros2::msg::ImuIdentificationData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      imu_ros2::msg::ImuIdentificationData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<imu_ros2::msg::ImuIdentificationData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      imu_ros2::msg::ImuIdentificationData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<imu_ros2::msg::ImuIdentificationData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<imu_ros2::msg::ImuIdentificationData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<imu_ros2::msg::ImuIdentificationData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__imu_ros2__msg__ImuIdentificationData
    std::shared_ptr<imu_ros2::msg::ImuIdentificationData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__imu_ros2__msg__ImuIdentificationData
    std::shared_ptr<imu_ros2::msg::ImuIdentificationData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuIdentificationData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->firmware_revision != other.firmware_revision) {
      return false;
    }
    if (this->firmware_date != other.firmware_date) {
      return false;
    }
    if (this->product_id != other.product_id) {
      return false;
    }
    if (this->serial_number != other.serial_number) {
      return false;
    }
    if (this->gyroscope_measurement_range != other.gyroscope_measurement_range) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuIdentificationData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuIdentificationData_

// alias to use template instance with default allocator
using ImuIdentificationData =
  imu_ros2::msg::ImuIdentificationData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace imu_ros2

#endif  // IMU_ROS2__MSG__DETAIL__IMU_IDENTIFICATION_DATA__STRUCT_HPP_
