// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from imu_ros2:msg/ImuDiagData.idl
// generated code does not contain a copyright notice
#include "imu_ros2/msg/detail/imu_diag_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
imu_ros2__msg__ImuDiagData__init(imu_ros2__msg__ImuDiagData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    imu_ros2__msg__ImuDiagData__fini(msg);
    return false;
  }
  // diag_data_path_overrun
  // diag_flash_memory_update_error
  // diag_spi_communication_error
  // diag_standby_mode
  // diag_sensor_self_test_error
  // diag_flash_memory_test_error
  // diag_clock_error
  // diag_acceleration_self_test_error
  // diag_gyroscope1_self_test_error
  // diag_gyroscope2_self_test_error
  // diag_flash_memory_write_count_exceeded_error
  // flash_counter
  return true;
}

void
imu_ros2__msg__ImuDiagData__fini(imu_ros2__msg__ImuDiagData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // diag_data_path_overrun
  // diag_flash_memory_update_error
  // diag_spi_communication_error
  // diag_standby_mode
  // diag_sensor_self_test_error
  // diag_flash_memory_test_error
  // diag_clock_error
  // diag_acceleration_self_test_error
  // diag_gyroscope1_self_test_error
  // diag_gyroscope2_self_test_error
  // diag_flash_memory_write_count_exceeded_error
  // flash_counter
}

bool
imu_ros2__msg__ImuDiagData__are_equal(const imu_ros2__msg__ImuDiagData * lhs, const imu_ros2__msg__ImuDiagData * rhs)
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
  // diag_data_path_overrun
  if (lhs->diag_data_path_overrun != rhs->diag_data_path_overrun) {
    return false;
  }
  // diag_flash_memory_update_error
  if (lhs->diag_flash_memory_update_error != rhs->diag_flash_memory_update_error) {
    return false;
  }
  // diag_spi_communication_error
  if (lhs->diag_spi_communication_error != rhs->diag_spi_communication_error) {
    return false;
  }
  // diag_standby_mode
  if (lhs->diag_standby_mode != rhs->diag_standby_mode) {
    return false;
  }
  // diag_sensor_self_test_error
  if (lhs->diag_sensor_self_test_error != rhs->diag_sensor_self_test_error) {
    return false;
  }
  // diag_flash_memory_test_error
  if (lhs->diag_flash_memory_test_error != rhs->diag_flash_memory_test_error) {
    return false;
  }
  // diag_clock_error
  if (lhs->diag_clock_error != rhs->diag_clock_error) {
    return false;
  }
  // diag_acceleration_self_test_error
  if (lhs->diag_acceleration_self_test_error != rhs->diag_acceleration_self_test_error) {
    return false;
  }
  // diag_gyroscope1_self_test_error
  if (lhs->diag_gyroscope1_self_test_error != rhs->diag_gyroscope1_self_test_error) {
    return false;
  }
  // diag_gyroscope2_self_test_error
  if (lhs->diag_gyroscope2_self_test_error != rhs->diag_gyroscope2_self_test_error) {
    return false;
  }
  // diag_flash_memory_write_count_exceeded_error
  if (lhs->diag_flash_memory_write_count_exceeded_error != rhs->diag_flash_memory_write_count_exceeded_error) {
    return false;
  }
  // flash_counter
  if (lhs->flash_counter != rhs->flash_counter) {
    return false;
  }
  return true;
}

bool
imu_ros2__msg__ImuDiagData__copy(
  const imu_ros2__msg__ImuDiagData * input,
  imu_ros2__msg__ImuDiagData * output)
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
  // diag_data_path_overrun
  output->diag_data_path_overrun = input->diag_data_path_overrun;
  // diag_flash_memory_update_error
  output->diag_flash_memory_update_error = input->diag_flash_memory_update_error;
  // diag_spi_communication_error
  output->diag_spi_communication_error = input->diag_spi_communication_error;
  // diag_standby_mode
  output->diag_standby_mode = input->diag_standby_mode;
  // diag_sensor_self_test_error
  output->diag_sensor_self_test_error = input->diag_sensor_self_test_error;
  // diag_flash_memory_test_error
  output->diag_flash_memory_test_error = input->diag_flash_memory_test_error;
  // diag_clock_error
  output->diag_clock_error = input->diag_clock_error;
  // diag_acceleration_self_test_error
  output->diag_acceleration_self_test_error = input->diag_acceleration_self_test_error;
  // diag_gyroscope1_self_test_error
  output->diag_gyroscope1_self_test_error = input->diag_gyroscope1_self_test_error;
  // diag_gyroscope2_self_test_error
  output->diag_gyroscope2_self_test_error = input->diag_gyroscope2_self_test_error;
  // diag_flash_memory_write_count_exceeded_error
  output->diag_flash_memory_write_count_exceeded_error = input->diag_flash_memory_write_count_exceeded_error;
  // flash_counter
  output->flash_counter = input->flash_counter;
  return true;
}

imu_ros2__msg__ImuDiagData *
imu_ros2__msg__ImuDiagData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_ros2__msg__ImuDiagData * msg = (imu_ros2__msg__ImuDiagData *)allocator.allocate(sizeof(imu_ros2__msg__ImuDiagData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(imu_ros2__msg__ImuDiagData));
  bool success = imu_ros2__msg__ImuDiagData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
imu_ros2__msg__ImuDiagData__destroy(imu_ros2__msg__ImuDiagData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    imu_ros2__msg__ImuDiagData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
imu_ros2__msg__ImuDiagData__Sequence__init(imu_ros2__msg__ImuDiagData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_ros2__msg__ImuDiagData * data = NULL;

  if (size) {
    data = (imu_ros2__msg__ImuDiagData *)allocator.zero_allocate(size, sizeof(imu_ros2__msg__ImuDiagData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = imu_ros2__msg__ImuDiagData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        imu_ros2__msg__ImuDiagData__fini(&data[i - 1]);
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
imu_ros2__msg__ImuDiagData__Sequence__fini(imu_ros2__msg__ImuDiagData__Sequence * array)
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
      imu_ros2__msg__ImuDiagData__fini(&array->data[i]);
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

imu_ros2__msg__ImuDiagData__Sequence *
imu_ros2__msg__ImuDiagData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_ros2__msg__ImuDiagData__Sequence * array = (imu_ros2__msg__ImuDiagData__Sequence *)allocator.allocate(sizeof(imu_ros2__msg__ImuDiagData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = imu_ros2__msg__ImuDiagData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
imu_ros2__msg__ImuDiagData__Sequence__destroy(imu_ros2__msg__ImuDiagData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    imu_ros2__msg__ImuDiagData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
imu_ros2__msg__ImuDiagData__Sequence__are_equal(const imu_ros2__msg__ImuDiagData__Sequence * lhs, const imu_ros2__msg__ImuDiagData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!imu_ros2__msg__ImuDiagData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
imu_ros2__msg__ImuDiagData__Sequence__copy(
  const imu_ros2__msg__ImuDiagData__Sequence * input,
  imu_ros2__msg__ImuDiagData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(imu_ros2__msg__ImuDiagData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    imu_ros2__msg__ImuDiagData * data =
      (imu_ros2__msg__ImuDiagData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!imu_ros2__msg__ImuDiagData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          imu_ros2__msg__ImuDiagData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!imu_ros2__msg__ImuDiagData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
