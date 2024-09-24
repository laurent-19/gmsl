// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imu_ros2:msg/ImuDiagData.idl
// generated code does not contain a copyright notice

#ifndef IMU_ROS2__MSG__DETAIL__IMU_DIAG_DATA__STRUCT_H_
#define IMU_ROS2__MSG__DETAIL__IMU_DIAG_DATA__STRUCT_H_

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

/// Struct defined in msg/ImuDiagData in the package imu_ros2.
/**
  *   @file   ImuDiagData.msg
  *   @brief  Definition of ImuDiagData message
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
typedef struct imu_ros2__msg__ImuDiagData
{
  /// message header
  std_msgs__msg__Header header;
  /// if true, one of the datapaths experienced an overrun condition
  bool diag_data_path_overrun;
  /// if true, the most recent imu memory flash failed
  bool diag_flash_memory_update_error;
  /// if true, the total number of SPI SCLK cycles is not equal to an integer multiple of 16
  bool diag_spi_communication_error;
  /// if true, the imu voltage across VDD and GND < 2.9V, which causes data processing to stop
  bool diag_standby_mode;
  /// if true, the imu self-test routine failed
  bool diag_sensor_self_test_error;
  /// if true, there is a failure in imu flash memory
  bool diag_flash_memory_test_error;
  /// if true, the internal data sampling clock does not synchronize with the external clock (only in scaled sync mode)
  bool diag_clock_error;
  /// if true, a failure occurred on accelerometer
  bool diag_acceleration_self_test_error;
  /// if true, a failure occurred on gyroscope 1
  bool diag_gyroscope1_self_test_error;
  /// if true, a failure occurred on gyroscope 2
  bool diag_gyroscope2_self_test_error;
  /// if true, the imu flash memory was written more times than the data-sheet specified endurance
  bool diag_flash_memory_write_count_exceeded_error;
  /// the value of the imu flash writes
  uint32_t flash_counter;
} imu_ros2__msg__ImuDiagData;

// Struct for a sequence of imu_ros2__msg__ImuDiagData.
typedef struct imu_ros2__msg__ImuDiagData__Sequence
{
  imu_ros2__msg__ImuDiagData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imu_ros2__msg__ImuDiagData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMU_ROS2__MSG__DETAIL__IMU_DIAG_DATA__STRUCT_H_
