// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from imu_ros2:msg/ImuIdentificationData.idl
// generated code does not contain a copyright notice
#include "imu_ros2/msg/detail/imu_identification_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `firmware_revision`
// Member `firmware_date`
// Member `gyroscope_measurement_range`
#include "rosidl_runtime_c/string_functions.h"

bool
imu_ros2__msg__ImuIdentificationData__init(imu_ros2__msg__ImuIdentificationData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    imu_ros2__msg__ImuIdentificationData__fini(msg);
    return false;
  }
  // firmware_revision
  if (!rosidl_runtime_c__String__init(&msg->firmware_revision)) {
    imu_ros2__msg__ImuIdentificationData__fini(msg);
    return false;
  }
  // firmware_date
  if (!rosidl_runtime_c__String__init(&msg->firmware_date)) {
    imu_ros2__msg__ImuIdentificationData__fini(msg);
    return false;
  }
  // product_id
  // serial_number
  // gyroscope_measurement_range
  if (!rosidl_runtime_c__String__init(&msg->gyroscope_measurement_range)) {
    imu_ros2__msg__ImuIdentificationData__fini(msg);
    return false;
  }
  return true;
}

void
imu_ros2__msg__ImuIdentificationData__fini(imu_ros2__msg__ImuIdentificationData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // firmware_revision
  rosidl_runtime_c__String__fini(&msg->firmware_revision);
  // firmware_date
  rosidl_runtime_c__String__fini(&msg->firmware_date);
  // product_id
  // serial_number
  // gyroscope_measurement_range
  rosidl_runtime_c__String__fini(&msg->gyroscope_measurement_range);
}

bool
imu_ros2__msg__ImuIdentificationData__are_equal(const imu_ros2__msg__ImuIdentificationData * lhs, const imu_ros2__msg__ImuIdentificationData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // firmware_revision
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->firmware_revision), &(rhs->firmware_revision)))
  {
    return false;
  }
  // firmware_date
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->firmware_date), &(rhs->firmware_date)))
  {
    return false;
  }
  // product_id
  if (lhs->product_id != rhs->product_id) {
    return false;
  }
  // serial_number
  if (lhs->serial_number != rhs->serial_number) {
    return false;
  }
  // gyroscope_measurement_range
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->gyroscope_measurement_range), &(rhs->gyroscope_measurement_range)))
  {
    return false;
  }
  return true;
}

bool
imu_ros2__msg__ImuIdentificationData__copy(
  const imu_ros2__msg__ImuIdentificationData * input,
  imu_ros2__msg__ImuIdentificationData * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // firmware_revision
  if (!rosidl_runtime_c__String__copy(
      &(input->firmware_revision), &(output->firmware_revision)))
  {
    return false;
  }
  // firmware_date
  if (!rosidl_runtime_c__String__copy(
      &(input->firmware_date), &(output->firmware_date)))
  {
    return false;
  }
  // product_id
  output->product_id = input->product_id;
  // serial_number
  output->serial_number = input->serial_number;
  // gyroscope_measurement_range
  if (!rosidl_runtime_c__String__copy(
      &(input->gyroscope_measurement_range), &(output->gyroscope_measurement_range)))
  {
    return false;
  }
  return true;
}

imu_ros2__msg__ImuIdentificationData *
imu_ros2__msg__ImuIdentificationData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_ros2__msg__ImuIdentificationData * msg = (imu_ros2__msg__ImuIdentificationData *)allocator.allocate(sizeof(imu_ros2__msg__ImuIdentificationData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(imu_ros2__msg__ImuIdentificationData));
  bool success = imu_ros2__msg__ImuIdentificationData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
imu_ros2__msg__ImuIdentificationData__destroy(imu_ros2__msg__ImuIdentificationData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    imu_ros2__msg__ImuIdentificationData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
imu_ros2__msg__ImuIdentificationData__Sequence__init(imu_ros2__msg__ImuIdentificationData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_ros2__msg__ImuIdentificationData * data = NULL;

  if (size) {
    data = (imu_ros2__msg__ImuIdentificationData *)allocator.zero_allocate(size, sizeof(imu_ros2__msg__ImuIdentificationData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = imu_ros2__msg__ImuIdentificationData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        imu_ros2__msg__ImuIdentificationData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
imu_ros2__msg__ImuIdentificationData__Sequence__fini(imu_ros2__msg__ImuIdentificationData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      imu_ros2__msg__ImuIdentificationData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

imu_ros2__msg__ImuIdentificationData__Sequence *
imu_ros2__msg__ImuIdentificationData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_ros2__msg__ImuIdentificationData__Sequence * array = (imu_ros2__msg__ImuIdentificationData__Sequence *)allocator.allocate(sizeof(imu_ros2__msg__ImuIdentificationData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = imu_ros2__msg__ImuIdentificationData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
imu_ros2__msg__ImuIdentificationData__Sequence__destroy(imu_ros2__msg__ImuIdentificationData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    imu_ros2__msg__ImuIdentificationData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
imu_ros2__msg__ImuIdentificationData__Sequence__are_equal(const imu_ros2__msg__ImuIdentificationData__Sequence * lhs, const imu_ros2__msg__ImuIdentificationData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!imu_ros2__msg__ImuIdentificationData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
imu_ros2__msg__ImuIdentificationData__Sequence__copy(
  const imu_ros2__msg__ImuIdentificationData__Sequence * input,
  imu_ros2__msg__ImuIdentificationData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(imu_ros2__msg__ImuIdentificationData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    imu_ros2__msg__ImuIdentificationData * data =
      (imu_ros2__msg__ImuIdentificationData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!imu_ros2__msg__ImuIdentificationData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          imu_ros2__msg__ImuIdentificationData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!imu_ros2__msg__ImuIdentificationData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
