// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from imu_ros2:msg/ImuIdentificationData.idl
// generated code does not contain a copyright notice
#include "imu_ros2/msg/detail/imu_identification_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "imu_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "imu_ros2/msg/detail/imu_identification_data__struct.h"
#include "imu_ros2/msg/detail/imu_identification_data__functions.h"
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

#include "rosidl_runtime_c/string.h"  // firmware_date, firmware_revision, gyroscope_measurement_range
#include "rosidl_runtime_c/string_functions.h"  // firmware_date, firmware_revision, gyroscope_measurement_range
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


using _ImuIdentificationData__ros_msg_type = imu_ros2__msg__ImuIdentificationData;

static bool _ImuIdentificationData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ImuIdentificationData__ros_msg_type * ros_message = static_cast<const _ImuIdentificationData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: firmware_revision
  {
    const rosidl_runtime_c__String * str = &ros_message->firmware_revision;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: firmware_date
  {
    const rosidl_runtime_c__String * str = &ros_message->firmware_date;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: product_id
  {
    cdr << ros_message->product_id;
  }

  // Field name: serial_number
  {
    cdr << ros_message->serial_number;
  }

  // Field name: gyroscope_measurement_range
  {
    const rosidl_runtime_c__String * str = &ros_message->gyroscope_measurement_range;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ImuIdentificationData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ImuIdentificationData__ros_msg_type * ros_message = static_cast<_ImuIdentificationData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: firmware_revision
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->firmware_revision.data) {
      rosidl_runtime_c__String__init(&ros_message->firmware_revision);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->firmware_revision,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'firmware_revision'\n");
      return false;
    }
  }

  // Field name: firmware_date
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->firmware_date.data) {
      rosidl_runtime_c__String__init(&ros_message->firmware_date);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->firmware_date,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'firmware_date'\n");
      return false;
    }
  }

  // Field name: product_id
  {
    cdr >> ros_message->product_id;
  }

  // Field name: serial_number
  {
    cdr >> ros_message->serial_number;
  }

  // Field name: gyroscope_measurement_range
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->gyroscope_measurement_range.data) {
      rosidl_runtime_c__String__init(&ros_message->gyroscope_measurement_range);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->gyroscope_measurement_range,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'gyroscope_measurement_range'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_imu_ros2
size_t get_serialized_size_imu_ros2__msg__ImuIdentificationData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ImuIdentificationData__ros_msg_type * ros_message = static_cast<const _ImuIdentificationData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name firmware_revision
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->firmware_revision.size + 1);
  // field.name firmware_date
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->firmware_date.size + 1);
  // field.name product_id
  {
    size_t item_size = sizeof(ros_message->product_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name serial_number
  {
    size_t item_size = sizeof(ros_message->serial_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyroscope_measurement_range
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->gyroscope_measurement_range.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ImuIdentificationData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_imu_ros2__msg__ImuIdentificationData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_imu_ros2
size_t max_serialized_size_imu_ros2__msg__ImuIdentificationData(
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
  // member: firmware_revision
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: firmware_date
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: product_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: serial_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyroscope_measurement_range
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = imu_ros2__msg__ImuIdentificationData;
    is_plain =
      (
      offsetof(DataType, gyroscope_measurement_range) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ImuIdentificationData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_imu_ros2__msg__ImuIdentificationData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ImuIdentificationData = {
  "imu_ros2::msg",
  "ImuIdentificationData",
  _ImuIdentificationData__cdr_serialize,
  _ImuIdentificationData__cdr_deserialize,
  _ImuIdentificationData__get_serialized_size,
  _ImuIdentificationData__max_serialized_size
};

static rosidl_message_type_support_t _ImuIdentificationData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ImuIdentificationData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, imu_ros2, msg, ImuIdentificationData)() {
  return &_ImuIdentificationData__type_support;
}

#if defined(__cplusplus)
}
#endif
