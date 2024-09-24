// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imu_ros2:msg/ImuIdentificationData.idl
// generated code does not contain a copyright notice

#ifndef IMU_ROS2__MSG__DETAIL__IMU_IDENTIFICATION_DATA__STRUCT_H_
#define IMU_ROS2__MSG__DETAIL__IMU_IDENTIFICATION_DATA__STRUCT_H_

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
// Member 'firmware_revision'
// Member 'firmware_date'
// Member 'gyroscope_measurement_range'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ImuIdentificationData in the package imu_ros2.
/**
  *   @file   ImuIdentificationData.msg
  *   @brief  Definition of ImuIdentificationData message
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
typedef struct imu_ros2__msg__ImuIdentificationData
{
  /// message header
  std_msgs__msg__Header header;
  /// firmware revision for the imu internal firmware
  rosidl_runtime_c__String firmware_revision;
  /// firmware date for the imu internal firmware
  rosidl_runtime_c__String firmware_date;
  /// imu product identification
  uint32_t product_id;
  /// imu lot specific serial number
  uint32_t serial_number;
  /// imu gyroscope measurement range
  rosidl_runtime_c__String gyroscope_measurement_range;
} imu_ros2__msg__ImuIdentificationData;

// Struct for a sequence of imu_ros2__msg__ImuIdentificationData.
typedef struct imu_ros2__msg__ImuIdentificationData__Sequence
{
  imu_ros2__msg__ImuIdentificationData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imu_ros2__msg__ImuIdentificationData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMU_ROS2__MSG__DETAIL__IMU_IDENTIFICATION_DATA__STRUCT_H_
