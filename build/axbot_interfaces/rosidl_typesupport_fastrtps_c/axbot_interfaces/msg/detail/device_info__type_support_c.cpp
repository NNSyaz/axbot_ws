// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from axbot_interfaces:msg/DeviceInfo.idl
// generated code does not contain a copyright notice
#include "axbot_interfaces/msg/detail/device_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "axbot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "axbot_interfaces/msg/detail/device_info__struct.h"
#include "axbot_interfaces/msg/detail/device_info__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // axbot_version, device_name, model, nickname, rosdistro, rosversion, serial_number
#include "rosidl_runtime_c/string_functions.h"  // axbot_version, device_name, model, nickname, rosdistro, rosversion, serial_number

// forward declare type support functions


using _DeviceInfo__ros_msg_type = axbot_interfaces__msg__DeviceInfo;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
bool cdr_serialize_axbot_interfaces__msg__DeviceInfo(
  const axbot_interfaces__msg__DeviceInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: rosversion
  {
    const rosidl_runtime_c__String * str = &ros_message->rosversion;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: rosdistro
  {
    const rosidl_runtime_c__String * str = &ros_message->rosdistro;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: axbot_version
  {
    const rosidl_runtime_c__String * str = &ros_message->axbot_version;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: model
  {
    const rosidl_runtime_c__String * str = &ros_message->model;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: serial_number
  {
    const rosidl_runtime_c__String * str = &ros_message->serial_number;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: device_name
  {
    const rosidl_runtime_c__String * str = &ros_message->device_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: nickname
  {
    const rosidl_runtime_c__String * str = &ros_message->nickname;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: inscribed_radius
  {
    cdr << ros_message->inscribed_radius;
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: thickness
  {
    cdr << ros_message->thickness;
  }

  // Field name: wheel_distance
  {
    cdr << ros_message->wheel_distance;
  }

  // Field name: width
  {
    cdr << ros_message->width;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
bool cdr_deserialize_axbot_interfaces__msg__DeviceInfo(
  eprosima::fastcdr::Cdr & cdr,
  axbot_interfaces__msg__DeviceInfo * ros_message)
{
  // Field name: rosversion
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->rosversion.data) {
      rosidl_runtime_c__String__init(&ros_message->rosversion);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->rosversion,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'rosversion'\n");
      return false;
    }
  }

  // Field name: rosdistro
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->rosdistro.data) {
      rosidl_runtime_c__String__init(&ros_message->rosdistro);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->rosdistro,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'rosdistro'\n");
      return false;
    }
  }

  // Field name: axbot_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->axbot_version.data) {
      rosidl_runtime_c__String__init(&ros_message->axbot_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->axbot_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'axbot_version'\n");
      return false;
    }
  }

  // Field name: model
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->model.data) {
      rosidl_runtime_c__String__init(&ros_message->model);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->model,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'model'\n");
      return false;
    }
  }

  // Field name: serial_number
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->serial_number.data) {
      rosidl_runtime_c__String__init(&ros_message->serial_number);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->serial_number,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'serial_number'\n");
      return false;
    }
  }

  // Field name: device_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->device_name.data) {
      rosidl_runtime_c__String__init(&ros_message->device_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->device_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'device_name'\n");
      return false;
    }
  }

  // Field name: nickname
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->nickname.data) {
      rosidl_runtime_c__String__init(&ros_message->nickname);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->nickname,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'nickname'\n");
      return false;
    }
  }

  // Field name: inscribed_radius
  {
    cdr >> ros_message->inscribed_radius;
  }

  // Field name: height
  {
    cdr >> ros_message->height;
  }

  // Field name: thickness
  {
    cdr >> ros_message->thickness;
  }

  // Field name: wheel_distance
  {
    cdr >> ros_message->wheel_distance;
  }

  // Field name: width
  {
    cdr >> ros_message->width;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
size_t get_serialized_size_axbot_interfaces__msg__DeviceInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DeviceInfo__ros_msg_type * ros_message = static_cast<const _DeviceInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: rosversion
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->rosversion.size + 1);

  // Field name: rosdistro
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->rosdistro.size + 1);

  // Field name: axbot_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->axbot_version.size + 1);

  // Field name: model
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->model.size + 1);

  // Field name: serial_number
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->serial_number.size + 1);

  // Field name: device_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->device_name.size + 1);

  // Field name: nickname
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->nickname.size + 1);

  // Field name: inscribed_radius
  {
    size_t item_size = sizeof(ros_message->inscribed_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: thickness
  {
    size_t item_size = sizeof(ros_message->thickness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wheel_distance
  {
    size_t item_size = sizeof(ros_message->wheel_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: width
  {
    size_t item_size = sizeof(ros_message->width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
size_t max_serialized_size_axbot_interfaces__msg__DeviceInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: rosversion
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: rosdistro
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: axbot_version
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: model
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: serial_number
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: device_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: nickname
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: inscribed_radius
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: thickness
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: wheel_distance
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: width
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = axbot_interfaces__msg__DeviceInfo;
    is_plain =
      (
      offsetof(DataType, width) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
bool cdr_serialize_key_axbot_interfaces__msg__DeviceInfo(
  const axbot_interfaces__msg__DeviceInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: rosversion
  {
    const rosidl_runtime_c__String * str = &ros_message->rosversion;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: rosdistro
  {
    const rosidl_runtime_c__String * str = &ros_message->rosdistro;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: axbot_version
  {
    const rosidl_runtime_c__String * str = &ros_message->axbot_version;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: model
  {
    const rosidl_runtime_c__String * str = &ros_message->model;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: serial_number
  {
    const rosidl_runtime_c__String * str = &ros_message->serial_number;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: device_name
  {
    const rosidl_runtime_c__String * str = &ros_message->device_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: nickname
  {
    const rosidl_runtime_c__String * str = &ros_message->nickname;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: inscribed_radius
  {
    cdr << ros_message->inscribed_radius;
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: thickness
  {
    cdr << ros_message->thickness;
  }

  // Field name: wheel_distance
  {
    cdr << ros_message->wheel_distance;
  }

  // Field name: width
  {
    cdr << ros_message->width;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
size_t get_serialized_size_key_axbot_interfaces__msg__DeviceInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DeviceInfo__ros_msg_type * ros_message = static_cast<const _DeviceInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: rosversion
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->rosversion.size + 1);

  // Field name: rosdistro
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->rosdistro.size + 1);

  // Field name: axbot_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->axbot_version.size + 1);

  // Field name: model
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->model.size + 1);

  // Field name: serial_number
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->serial_number.size + 1);

  // Field name: device_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->device_name.size + 1);

  // Field name: nickname
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->nickname.size + 1);

  // Field name: inscribed_radius
  {
    size_t item_size = sizeof(ros_message->inscribed_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: thickness
  {
    size_t item_size = sizeof(ros_message->thickness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wheel_distance
  {
    size_t item_size = sizeof(ros_message->wheel_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: width
  {
    size_t item_size = sizeof(ros_message->width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
size_t max_serialized_size_key_axbot_interfaces__msg__DeviceInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: rosversion
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: rosdistro
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: axbot_version
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: model
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: serial_number
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: device_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: nickname
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: inscribed_radius
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: thickness
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: wheel_distance
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: width
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = axbot_interfaces__msg__DeviceInfo;
    is_plain =
      (
      offsetof(DataType, width) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _DeviceInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const axbot_interfaces__msg__DeviceInfo * ros_message = static_cast<const axbot_interfaces__msg__DeviceInfo *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_axbot_interfaces__msg__DeviceInfo(ros_message, cdr);
}

static bool _DeviceInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  axbot_interfaces__msg__DeviceInfo * ros_message = static_cast<axbot_interfaces__msg__DeviceInfo *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_axbot_interfaces__msg__DeviceInfo(cdr, ros_message);
}

static uint32_t _DeviceInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_axbot_interfaces__msg__DeviceInfo(
      untyped_ros_message, 0));
}

static size_t _DeviceInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_axbot_interfaces__msg__DeviceInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DeviceInfo = {
  "axbot_interfaces::msg",
  "DeviceInfo",
  _DeviceInfo__cdr_serialize,
  _DeviceInfo__cdr_deserialize,
  _DeviceInfo__get_serialized_size,
  _DeviceInfo__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DeviceInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DeviceInfo,
  get_message_typesupport_handle_function,
  &axbot_interfaces__msg__DeviceInfo__get_type_hash,
  &axbot_interfaces__msg__DeviceInfo__get_type_description,
  &axbot_interfaces__msg__DeviceInfo__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, axbot_interfaces, msg, DeviceInfo)() {
  return &_DeviceInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
