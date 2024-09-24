// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imu_ros2:msg/VelAngTempData.idl
// generated code does not contain a copyright notice

#ifndef IMU_ROS2__MSG__DETAIL__VEL_ANG_TEMP_DATA__STRUCT_H_
#define IMU_ROS2__MSG__DETAIL__VEL_ANG_TEMP_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'delta_velocity'
// Member 'delta_angle'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/VelAngTempData in the package imu_ros2.
/**
  *   @file   VelAngTempData.msg
  *   @brief  Definition of VelAngTempData message
  *   @author RBolboac (ramona.bolboaca@analog.com)
  *
  * Copyright 2023(c) Analog Devices, Inc.
  *
  * Licensed under the Apache License, Version 2.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  *     http://www.apache.org/licenses/LICENSE-2.0
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
 */
typedef struct imu_ros2__msg__VelAngTempData
{
  /// message header
  std_msgs__msg__Header header;
  /// 3-axis delta velocity (delta between two consecutive measurements)
  geometry_msgs__msg__Vector3 delta_velocity;
  /// 3-axis delta angle (delta between two consecutive measurements)
  geometry_msgs__msg__Vector3 delta_angle;
  /// imu internal temperature
  double temperature;
} imu_ros2__msg__VelAngTempData;

// Struct for a sequence of imu_ros2__msg__VelAngTempData.
typedef struct imu_ros2__msg__VelAngTempData__Sequence
{
  imu_ros2__msg__VelAngTempData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imu_ros2__msg__VelAngTempData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMU_ROS2__MSG__DETAIL__VEL_ANG_TEMP_DATA__STRUCT_H_
