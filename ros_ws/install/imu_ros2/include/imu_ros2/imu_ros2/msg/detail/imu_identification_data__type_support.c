// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from imu_ros2:msg/ImuIdentificationData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "imu_ros2/msg/detail/imu_identification_data__rosidl_typesupport_introspection_c.h"
#include "imu_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "imu_ros2/msg/detail/imu_identification_data__functions.h"
#include "imu_ros2/msg/detail/imu_identification_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `firmware_revision`
// Member `firmware_date`
// Member `gyroscope_measurement_range`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void imu_ros2__msg__ImuIdentificationData__rosidl_typesupport_introspection_c__ImuIdentificationData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  imu_ros2__msg__ImuIdentificationData__init(message_memory);
}

void imu_ros2__msg__ImuIdentificationData__rosidl_typesupport_introspection_c__ImuIdentificationData_fini_function(void * message_memory)
{
  imu_ros2__msg__ImuIdentificationData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember imu_ros2__msg__ImuIdentificationData__rosidl_typesupport_introspection_c__ImuIdentificationData_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imu_ros2__msg__ImuIdentificationData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "firmware_revision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imu_ros2__msg__ImuIdentificationData, firmware_revision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "firmware_date",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imu_ros2__msg__ImuIdentificationData, firmware_date),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "product_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imu_ros2__msg__ImuIdentificationData, product_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "serial_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imu_ros2__msg__ImuIdentificationData, serial_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyroscope_measurement_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imu_ros2__msg__ImuIdentificationData, gyroscope_measurement_range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers imu_ros2__msg__ImuIdentificationData__rosidl_typesupport_introspection_c__ImuIdentificationData_message_members = {
  "imu_ros2__msg",  // message namespace
  "ImuIdentificationData",  // message name
  6,  // number of fields
  sizeof(imu_ros2__msg__ImuIdentificationData),
  imu_ros2__msg__ImuIdentificationData__rosidl_typesupport_introspection_c__ImuIdentificationData_message_member_array,  // message members
  imu_ros2__msg__ImuIdentificationData__rosidl_typesupport_introspection_c__ImuIdentificationData_init_function,  // function to initialize message memory (memory has to be allocated)
  imu_ros2__msg__ImuIdentificationData__rosidl_typesupport_introspection_c__ImuIdentificationData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t imu_ros2__msg__ImuIdentificationData__rosidl_typesupport_introspection_c__ImuIdentificationData_message_type_support_handle = {
  0,
  &imu_ros2__msg__ImuIdentificationData__rosidl_typesupport_introspection_c__ImuIdentificationData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_imu_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, imu_ros2, msg, ImuIdentificationData)() {
  imu_ros2__msg__ImuIdentificationData__rosidl_typesupport_introspection_c__ImuIdentificationData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!imu_ros2__msg__ImuIdentificationData__rosidl_typesupport_introspection_c__ImuIdentificationData_message_type_support_handle.typesupport_identifier) {
    imu_ros2__msg__ImuIdentificationData__rosidl_typesupport_introspection_c__ImuIdentificationData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &imu_ros2__msg__ImuIdentificationData__rosidl_typesupport_introspection_c__ImuIdentificationData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
