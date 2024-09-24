// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from imu_ros2:msg/ImuDiagData.idl
// generated code does not contain a copyright notice

#ifndef IMU_ROS2__MSG__DETAIL__IMU_DIAG_DATA__FUNCTIONS_H_
#define IMU_ROS2__MSG__DETAIL__IMU_DIAG_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "imu_ros2/msg/rosidl_generator_c__visibility_control.h"

#include "imu_ros2/msg/detail/imu_diag_data__struct.h"

/// Initialize msg/ImuDiagData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * imu_ros2__msg__ImuDiagData
 * )) before or use
 * imu_ros2__msg__ImuDiagData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_ros2
bool
imu_ros2__msg__ImuDiagData__init(imu_ros2__msg__ImuDiagData * msg);

/// Finalize msg/ImuDiagData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_ros2
void
imu_ros2__msg__ImuDiagData__fini(imu_ros2__msg__ImuDiagData * msg);

/// Create msg/ImuDiagData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * imu_ros2__msg__ImuDiagData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_ros2
imu_ros2__msg__ImuDiagData *
imu_ros2__msg__ImuDiagData__create();

/// Destroy msg/ImuDiagData message.
/**
 * It calls
 * imu_ros2__msg__ImuDiagData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_ros2
void
imu_ros2__msg__ImuDiagData__destroy(imu_ros2__msg__ImuDiagData * msg);

/// Check for msg/ImuDiagData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_ros2
bool
imu_ros2__msg__ImuDiagData__are_equal(const imu_ros2__msg__ImuDiagData * lhs, const imu_ros2__msg__ImuDiagData * rhs);

/// Copy a msg/ImuDiagData message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_ros2
bool
imu_ros2__msg__ImuDiagData__copy(
  const imu_ros2__msg__ImuDiagData * input,
  imu_ros2__msg__ImuDiagData * output);

/// Initialize array of msg/ImuDiagData messages.
/**
 * It allocates the memory for the number of elements and calls
 * imu_ros2__msg__ImuDiagData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_ros2
bool
imu_ros2__msg__ImuDiagData__Sequence__init(imu_ros2__msg__ImuDiagData__Sequence * array, size_t size);

/// Finalize array of msg/ImuDiagData messages.
/**
 * It calls
 * imu_ros2__msg__ImuDiagData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_ros2
void
imu_ros2__msg__ImuDiagData__Sequence__fini(imu_ros2__msg__ImuDiagData__Sequence * array);

/// Create array of msg/ImuDiagData messages.
/**
 * It allocates the memory for the array and calls
 * imu_ros2__msg__ImuDiagData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_ros2
imu_ros2__msg__ImuDiagData__Sequence *
imu_ros2__msg__ImuDiagData__Sequence__create(size_t size);

/// Destroy array of msg/ImuDiagData messages.
/**
 * It calls
 * imu_ros2__msg__ImuDiagData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_ros2
void
imu_ros2__msg__ImuDiagData__Sequence__destroy(imu_ros2__msg__ImuDiagData__Sequence * array);

/// Check for msg/ImuDiagData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_ros2
bool
imu_ros2__msg__ImuDiagData__Sequence__are_equal(const imu_ros2__msg__ImuDiagData__Sequence * lhs, const imu_ros2__msg__ImuDiagData__Sequence * rhs);

/// Copy an array of msg/ImuDiagData messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_imu_ros2
bool
imu_ros2__msg__ImuDiagData__Sequence__copy(
  const imu_ros2__msg__ImuDiagData__Sequence * input,
  imu_ros2__msg__ImuDiagData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IMU_ROS2__MSG__DETAIL__IMU_DIAG_DATA__FUNCTIONS_H_
