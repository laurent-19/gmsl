// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from imu_ros2:msg/ImuDiagData.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "imu_ros2/msg/detail/imu_diag_data__struct.h"
#include "imu_ros2/msg/detail/imu_diag_data__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool imu_ros2__msg__imu_diag_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("imu_ros2.msg._imu_diag_data.ImuDiagData", full_classname_dest, 39) == 0);
  }
  imu_ros2__msg__ImuDiagData * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // diag_data_path_overrun
    PyObject * field = PyObject_GetAttrString(_pymsg, "diag_data_path_overrun");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->diag_data_path_overrun = (Py_True == field);
    Py_DECREF(field);
  }
  {  // diag_flash_memory_update_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "diag_flash_memory_update_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->diag_flash_memory_update_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // diag_spi_communication_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "diag_spi_communication_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->diag_spi_communication_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // diag_standby_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "diag_standby_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->diag_standby_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // diag_sensor_self_test_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "diag_sensor_self_test_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->diag_sensor_self_test_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // diag_flash_memory_test_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "diag_flash_memory_test_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->diag_flash_memory_test_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // diag_clock_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "diag_clock_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->diag_clock_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // diag_acceleration_self_test_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "diag_acceleration_self_test_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->diag_acceleration_self_test_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // diag_gyroscope1_self_test_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "diag_gyroscope1_self_test_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->diag_gyroscope1_self_test_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // diag_gyroscope2_self_test_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "diag_gyroscope2_self_test_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->diag_gyroscope2_self_test_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // diag_flash_memory_write_count_exceeded_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "diag_flash_memory_write_count_exceeded_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->diag_flash_memory_write_count_exceeded_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flash_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "flash_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->flash_counter = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * imu_ros2__msg__imu_diag_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ImuDiagData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("imu_ros2.msg._imu_diag_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ImuDiagData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  imu_ros2__msg__ImuDiagData * ros_message = (imu_ros2__msg__ImuDiagData *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diag_data_path_overrun
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->diag_data_path_overrun ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diag_data_path_overrun", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diag_flash_memory_update_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->diag_flash_memory_update_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diag_flash_memory_update_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diag_spi_communication_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->diag_spi_communication_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diag_spi_communication_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diag_standby_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->diag_standby_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diag_standby_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diag_sensor_self_test_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->diag_sensor_self_test_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diag_sensor_self_test_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diag_flash_memory_test_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->diag_flash_memory_test_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diag_flash_memory_test_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diag_clock_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->diag_clock_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diag_clock_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diag_acceleration_self_test_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->diag_acceleration_self_test_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diag_acceleration_self_test_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diag_gyroscope1_self_test_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->diag_gyroscope1_self_test_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diag_gyroscope1_self_test_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diag_gyroscope2_self_test_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->diag_gyroscope2_self_test_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diag_gyroscope2_self_test_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diag_flash_memory_write_count_exceeded_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->diag_flash_memory_write_count_exceeded_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diag_flash_memory_write_count_exceeded_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flash_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->flash_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flash_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
