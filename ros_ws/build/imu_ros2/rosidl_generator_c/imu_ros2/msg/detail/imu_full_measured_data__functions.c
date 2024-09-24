// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from imu_ros2:msg/ImuFullMeasuredData.idl
// generated code does not contain a copyright notice
#include "imu_ros2/msg/detail/imu_full_measured_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `linear_acceleration`
// Member `angular_velocity`
// Member `delta_velocity`
// Member `delta_angle`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
imu_ros2__msg__ImuFullMeasuredData__init(imu_ros2__msg__ImuFullMeasuredData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    imu_ros2__msg__ImuFullMeasuredData__fini(msg);
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->linear_acceleration)) {
    imu_ros2__msg__ImuFullMeasuredData__fini(msg);
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_velocity)) {
    imu_ros2__msg__ImuFullMeasuredData__fini(msg);
    return false;
  }
  // delta_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->delta_velocity)) {
    imu_ros2__msg__ImuFullMeasuredData__fini(msg);
    return false;
  }
  // delta_angle
  if (!geometry_msgs__msg__Vector3__init(&msg->delta_angle)) {
    imu_ros2__msg__ImuFullMeasuredData__fini(msg);
    return false;
  }
  // temperature
  return true;
}

void
imu_ros2__msg__ImuFullMeasuredData__fini(imu_ros2__msg__ImuFullMeasuredData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // linear_acceleration
  geometry_msgs__msg__Vector3__fini(&msg->linear_acceleration);
  // angular_velocity
  geometry_msgs__msg__Vector3__fini(&msg->angular_velocity);
  // delta_velocity
  geometry_msgs__msg__Vector3__fini(&msg->delta_velocity);
  // delta_angle
  geometry_msgs__msg__Vector3__fini(&msg->delta_angle);
  // temperature
}

bool
imu_ros2__msg__ImuFullMeasuredData__are_equal(const imu_ros2__msg__ImuFullMeasuredData * lhs, const imu_ros2__msg__ImuFullMeasuredData * rhs)
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
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->linear_acceleration), &(rhs->linear_acceleration)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->angular_velocity), &(rhs->angular_velocity)))
  {
    return false;
  }
  // delta_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->delta_velocity), &(rhs->delta_velocity)))
  {
    return false;
  }
  // delta_angle
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->delta_angle), &(rhs->delta_angle)))
  {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  return true;
}

bool
imu_ros2__msg__ImuFullMeasuredData__copy(
  const imu_ros2__msg__ImuFullMeasuredData * input,
  imu_ros2__msg__ImuFullMeasuredData * output)
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
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->linear_acceleration), &(output->linear_acceleration)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->angular_velocity), &(output->angular_velocity)))
  {
    return false;
  }
  // delta_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->delta_velocity), &(output->delta_velocity)))
  {
    return false;
  }
  // delta_angle
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->delta_angle), &(output->delta_angle)))
  {
    return false;
  }
  // temperature
  output->temperature = input->temperature;
  return true;
}

imu_ros2__msg__ImuFullMeasuredData *
imu_ros2__msg__ImuFullMeasuredData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_ros2__msg__ImuFullMeasuredData * msg = (imu_ros2__msg__ImuFullMeasuredData *)allocator.allocate(sizeof(imu_ros2__msg__ImuFullMeasuredData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(imu_ros2__msg__ImuFullMeasuredData));
  bool success = imu_ros2__msg__ImuFullMeasuredData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
imu_ros2__msg__ImuFullMeasuredData__destroy(imu_ros2__msg__ImuFullMeasuredData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    imu_ros2__msg__ImuFullMeasuredData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
imu_ros2__msg__ImuFullMeasuredData__Sequence__init(imu_ros2__msg__ImuFullMeasuredData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_ros2__msg__ImuFullMeasuredData * data = NULL;

  if (size) {
    data = (imu_ros2__msg__ImuFullMeasuredData *)allocator.zero_allocate(size, sizeof(imu_ros2__msg__ImuFullMeasuredData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = imu_ros2__msg__ImuFullMeasuredData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        imu_ros2__msg__ImuFullMeasuredData__fini(&data[i - 1]);
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
imu_ros2__msg__ImuFullMeasuredData__Sequence__fini(imu_ros2__msg__ImuFullMeasuredData__Sequence * array)
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
      imu_ros2__msg__ImuFullMeasuredData__fini(&array->data[i]);
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

imu_ros2__msg__ImuFullMeasuredData__Sequence *
imu_ros2__msg__ImuFullMeasuredData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_ros2__msg__ImuFullMeasuredData__Sequence * array = (imu_ros2__msg__ImuFullMeasuredData__Sequence *)allocator.allocate(sizeof(imu_ros2__msg__ImuFullMeasuredData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = imu_ros2__msg__ImuFullMeasuredData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
imu_ros2__msg__ImuFullMeasuredData__Sequence__destroy(imu_ros2__msg__ImuFullMeasuredData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    imu_ros2__msg__ImuFullMeasuredData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
imu_ros2__msg__ImuFullMeasuredData__Sequence__are_equal(const imu_ros2__msg__ImuFullMeasuredData__Sequence * lhs, const imu_ros2__msg__ImuFullMeasuredData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!imu_ros2__msg__ImuFullMeasuredData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
imu_ros2__msg__ImuFullMeasuredData__Sequence__copy(
  const imu_ros2__msg__ImuFullMeasuredData__Sequence * input,
  imu_ros2__msg__ImuFullMeasuredData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(imu_ros2__msg__ImuFullMeasuredData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    imu_ros2__msg__ImuFullMeasuredData * data =
      (imu_ros2__msg__ImuFullMeasuredData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!imu_ros2__msg__ImuFullMeasuredData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          imu_ros2__msg__ImuFullMeasuredData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!imu_ros2__msg__ImuFullMeasuredData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
