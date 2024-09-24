// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from imu_ros2:msg/ImuDiagData.idl
// generated code does not contain a copyright notice
#include "imu_ros2/msg/detail/imu_diag_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "imu_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "imu_ros2/msg/detail/imu_diag_data__struct.h"
#include "imu_ros2/msg/detail/imu_diag_data__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_imu_ros2
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_imu_ros2
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_imu_ros2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ImuDiagData__ros_msg_type = imu_ros2__msg__ImuDiagData;

static bool _ImuDiagData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ImuDiagData__ros_msg_type * ros_message = static_cast<const _ImuDiagData__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: diag_data_path_overrun
  {
    cdr << (ros_message->diag_data_path_overrun ? true : false);
  }

  // Field name: diag_flash_memory_update_error
  {
    cdr << (ros_message->diag_flash_memory_update_error ? true : false);
  }

  // Field name: diag_spi_communication_error
  {
    cdr << (ros_message->diag_spi_communication_error ? true : false);
  }

  // Field name: diag_standby_mode
  {
    cdr << (ros_message->diag_standby_mode ? true : false);
  }

  // Field name: diag_sensor_self_test_error
  {
    cdr << (ros_message->diag_sensor_self_test_error ? true : false);
  }

  // Field name: diag_flash_memory_test_error
  {
    cdr << (ros_message->diag_flash_memory_test_error ? true : false);
  }

  // Field name: diag_clock_error
  {
    cdr << (ros_message->diag_clock_error ? true : false);
  }

  // Field name: diag_acceleration_self_test_error
  {
    cdr << (ros_message->diag_acceleration_self_test_error ? true : false);
  }

  // Field name: diag_gyroscope1_self_test_error
  {
    cdr << (ros_message->diag_gyroscope1_self_test_error ? true : false);
  }

  // Field name: diag_gyroscope2_self_test_error
  {
    cdr << (ros_message->diag_gyroscope2_self_test_error ? true : false);
  }

  // Field name: diag_flash_memory_write_count_exceeded_error
  {
    cdr << (ros_message->diag_flash_memory_write_count_exceeded_error ? true : false);
  }

  // Field name: flash_counter
  {
    cdr << ros_message->flash_counter;
  }

  return true;
}

static bool _ImuDiagData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ImuDiagData__ros_msg_type * ros_message = static_cast<_ImuDiagData__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: diag_data_path_overrun
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->diag_data_path_overrun = tmp ? true : false;
  }

  // Field name: diag_flash_memory_update_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->diag_flash_memory_update_error = tmp ? true : false;
  }

  // Field name: diag_spi_communication_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->diag_spi_communication_error = tmp ? true : false;
  }

  // Field name: diag_standby_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->diag_standby_mode = tmp ? true : false;
  }

  // Field name: diag_sensor_self_test_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->diag_sensor_self_test_error = tmp ? true : false;
  }

  // Field name: diag_flash_memory_test_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->diag_flash_memory_test_error = tmp ? true : false;
  }

  // Field name: diag_clock_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->diag_clock_error = tmp ? true : false;
  }

  // Field name: diag_acceleration_self_test_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->diag_acceleration_self_test_error = tmp ? true : false;
  }

  // Field name: diag_gyroscope1_self_test_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->diag_gyroscope1_self_test_error = tmp ? true : false;
  }

  // Field name: diag_gyroscope2_self_test_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->diag_gyroscope2_self_test_error = tmp ? true : false;
  }

  // Field name: diag_flash_memory_write_count_exceeded_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->diag_flash_memory_write_count_exceeded_error = tmp ? true : false;
  }

  // Field name: flash_counter
  {
    cdr >> ros_message->flash_counter;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_imu_ros2
size_t get_serialized_size_imu_ros2__msg__ImuDiagData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ImuDiagData__ros_msg_type * ros_message = static_cast<const _ImuDiagData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name diag_data_path_overrun
  {
    size_t item_size = sizeof(ros_message->diag_data_path_overrun);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diag_flash_memory_update_error
  {
    size_t item_size = sizeof(ros_message->diag_flash_memory_update_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diag_spi_communication_error
  {
    size_t item_size = sizeof(ros_message->diag_spi_communication_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diag_standby_mode
  {
    size_t item_size = sizeof(ros_message->diag_standby_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diag_sensor_self_test_error
  {
    size_t item_size = sizeof(ros_message->diag_sensor_self_test_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diag_flash_memory_test_error
  {
    size_t item_size = sizeof(ros_message->diag_flash_memory_test_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diag_clock_error
  {
    size_t item_size = sizeof(ros_message->diag_clock_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diag_acceleration_self_test_error
  {
    size_t item_size = sizeof(ros_message->diag_acceleration_self_test_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diag_gyroscope1_self_test_error
  {
    size_t item_size = sizeof(ros_message->diag_gyroscope1_self_test_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diag_gyroscope2_self_test_error
  {
    size_t item_size = sizeof(ros_message->diag_gyroscope2_self_test_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diag_flash_memory_write_count_exceeded_error
  {
    size_t item_size = sizeof(ros_message->diag_flash_memory_write_count_exceeded_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flash_counter
  {
    size_t item_size = sizeof(ros_message->flash_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ImuDiagData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_imu_ros2__msg__ImuDiagData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_imu_ros2
size_t max_serialized_size_imu_ros2__msg__ImuDiagData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: diag_data_path_overrun
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: diag_flash_memory_update_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: diag_spi_communication_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: diag_standby_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: diag_sensor_self_test_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: diag_flash_memory_test_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: diag_clock_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: diag_acceleration_self_test_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: diag_gyroscope1_self_test_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: diag_gyroscope2_self_test_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: diag_flash_memory_write_count_exceeded_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flash_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = imu_ros2__msg__ImuDiagData;
    is_plain =
      (
      offsetof(DataType, flash_counter) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ImuDiagData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_imu_ros2__msg__ImuDiagData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ImuDiagData = {
  "imu_ros2::msg",
  "ImuDiagData",
  _ImuDiagData__cdr_serialize,
  _ImuDiagData__cdr_deserialize,
  _ImuDiagData__get_serialized_size,
  _ImuDiagData__max_serialized_size
};

static rosidl_message_type_support_t _ImuDiagData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ImuDiagData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, imu_ros2, msg, ImuDiagData)() {
  return &_ImuDiagData__type_support;
}

#if defined(__cplusplus)
}
#endif
