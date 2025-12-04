// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from axbot_interfaces:msg/DeviceInfo.idl
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
#include "axbot_interfaces/msg/detail/device_info__struct.h"
#include "axbot_interfaces/msg/detail/device_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool axbot_interfaces__msg__device_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("axbot_interfaces.msg._device_info.DeviceInfo", full_classname_dest, 44) == 0);
  }
  axbot_interfaces__msg__DeviceInfo * ros_message = _ros_message;
  {  // rosversion
    PyObject * field = PyObject_GetAttrString(_pymsg, "rosversion");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->rosversion, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // rosdistro
    PyObject * field = PyObject_GetAttrString(_pymsg, "rosdistro");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->rosdistro, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // axbot_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "axbot_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->axbot_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // model
    PyObject * field = PyObject_GetAttrString(_pymsg, "model");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->model, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // serial_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "serial_number");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->serial_number, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // device_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->device_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // nickname
    PyObject * field = PyObject_GetAttrString(_pymsg, "nickname");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->nickname, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // inscribed_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "inscribed_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inscribed_radius = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // thickness
    PyObject * field = PyObject_GetAttrString(_pymsg, "thickness");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->thickness = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheel_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->width = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * axbot_interfaces__msg__device_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DeviceInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("axbot_interfaces.msg._device_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DeviceInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  axbot_interfaces__msg__DeviceInfo * ros_message = (axbot_interfaces__msg__DeviceInfo *)raw_ros_message;
  {  // rosversion
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->rosversion.data,
      strlen(ros_message->rosversion.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rosversion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rosdistro
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->rosdistro.data,
      strlen(ros_message->rosdistro.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rosdistro", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axbot_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->axbot_version.data,
      strlen(ros_message->axbot_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "axbot_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // model
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->model.data,
      strlen(ros_message->model.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "model", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // serial_number
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->serial_number.data,
      strlen(ros_message->serial_number.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "serial_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // device_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->device_name.data,
      strlen(ros_message->device_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nickname
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->nickname.data,
      strlen(ros_message->nickname.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nickname", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inscribed_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inscribed_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inscribed_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thickness
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->thickness);
    {
      int rc = PyObject_SetAttrString(_pymessage, "thickness", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
