// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from axbot_interfaces:msg/DeviceInfo.idl
// generated code does not contain a copyright notice
#include "axbot_interfaces/msg/detail/device_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `rosversion`
// Member `rosdistro`
// Member `axbot_version`
// Member `model`
// Member `serial_number`
// Member `device_name`
// Member `nickname`
#include "rosidl_runtime_c/string_functions.h"

bool
axbot_interfaces__msg__DeviceInfo__init(axbot_interfaces__msg__DeviceInfo * msg)
{
  if (!msg) {
    return false;
  }
  // rosversion
  if (!rosidl_runtime_c__String__init(&msg->rosversion)) {
    axbot_interfaces__msg__DeviceInfo__fini(msg);
    return false;
  }
  // rosdistro
  if (!rosidl_runtime_c__String__init(&msg->rosdistro)) {
    axbot_interfaces__msg__DeviceInfo__fini(msg);
    return false;
  }
  // axbot_version
  if (!rosidl_runtime_c__String__init(&msg->axbot_version)) {
    axbot_interfaces__msg__DeviceInfo__fini(msg);
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__init(&msg->model)) {
    axbot_interfaces__msg__DeviceInfo__fini(msg);
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__init(&msg->serial_number)) {
    axbot_interfaces__msg__DeviceInfo__fini(msg);
    return false;
  }
  // device_name
  if (!rosidl_runtime_c__String__init(&msg->device_name)) {
    axbot_interfaces__msg__DeviceInfo__fini(msg);
    return false;
  }
  // nickname
  if (!rosidl_runtime_c__String__init(&msg->nickname)) {
    axbot_interfaces__msg__DeviceInfo__fini(msg);
    return false;
  }
  // inscribed_radius
  // height
  // thickness
  // wheel_distance
  // width
  return true;
}

void
axbot_interfaces__msg__DeviceInfo__fini(axbot_interfaces__msg__DeviceInfo * msg)
{
  if (!msg) {
    return;
  }
  // rosversion
  rosidl_runtime_c__String__fini(&msg->rosversion);
  // rosdistro
  rosidl_runtime_c__String__fini(&msg->rosdistro);
  // axbot_version
  rosidl_runtime_c__String__fini(&msg->axbot_version);
  // model
  rosidl_runtime_c__String__fini(&msg->model);
  // serial_number
  rosidl_runtime_c__String__fini(&msg->serial_number);
  // device_name
  rosidl_runtime_c__String__fini(&msg->device_name);
  // nickname
  rosidl_runtime_c__String__fini(&msg->nickname);
  // inscribed_radius
  // height
  // thickness
  // wheel_distance
  // width
}

bool
axbot_interfaces__msg__DeviceInfo__are_equal(const axbot_interfaces__msg__DeviceInfo * lhs, const axbot_interfaces__msg__DeviceInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rosversion
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->rosversion), &(rhs->rosversion)))
  {
    return false;
  }
  // rosdistro
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->rosdistro), &(rhs->rosdistro)))
  {
    return false;
  }
  // axbot_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->axbot_version), &(rhs->axbot_version)))
  {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model), &(rhs->model)))
  {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->serial_number), &(rhs->serial_number)))
  {
    return false;
  }
  // device_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->device_name), &(rhs->device_name)))
  {
    return false;
  }
  // nickname
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->nickname), &(rhs->nickname)))
  {
    return false;
  }
  // inscribed_radius
  if (lhs->inscribed_radius != rhs->inscribed_radius) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // thickness
  if (lhs->thickness != rhs->thickness) {
    return false;
  }
  // wheel_distance
  if (lhs->wheel_distance != rhs->wheel_distance) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  return true;
}

bool
axbot_interfaces__msg__DeviceInfo__copy(
  const axbot_interfaces__msg__DeviceInfo * input,
  axbot_interfaces__msg__DeviceInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // rosversion
  if (!rosidl_runtime_c__String__copy(
      &(input->rosversion), &(output->rosversion)))
  {
    return false;
  }
  // rosdistro
  if (!rosidl_runtime_c__String__copy(
      &(input->rosdistro), &(output->rosdistro)))
  {
    return false;
  }
  // axbot_version
  if (!rosidl_runtime_c__String__copy(
      &(input->axbot_version), &(output->axbot_version)))
  {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__copy(
      &(input->model), &(output->model)))
  {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__copy(
      &(input->serial_number), &(output->serial_number)))
  {
    return false;
  }
  // device_name
  if (!rosidl_runtime_c__String__copy(
      &(input->device_name), &(output->device_name)))
  {
    return false;
  }
  // nickname
  if (!rosidl_runtime_c__String__copy(
      &(input->nickname), &(output->nickname)))
  {
    return false;
  }
  // inscribed_radius
  output->inscribed_radius = input->inscribed_radius;
  // height
  output->height = input->height;
  // thickness
  output->thickness = input->thickness;
  // wheel_distance
  output->wheel_distance = input->wheel_distance;
  // width
  output->width = input->width;
  return true;
}

axbot_interfaces__msg__DeviceInfo *
axbot_interfaces__msg__DeviceInfo__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__msg__DeviceInfo * msg = (axbot_interfaces__msg__DeviceInfo *)allocator.allocate(sizeof(axbot_interfaces__msg__DeviceInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(axbot_interfaces__msg__DeviceInfo));
  bool success = axbot_interfaces__msg__DeviceInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
axbot_interfaces__msg__DeviceInfo__destroy(axbot_interfaces__msg__DeviceInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    axbot_interfaces__msg__DeviceInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
axbot_interfaces__msg__DeviceInfo__Sequence__init(axbot_interfaces__msg__DeviceInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__msg__DeviceInfo * data = NULL;

  if (size) {
    data = (axbot_interfaces__msg__DeviceInfo *)allocator.zero_allocate(size, sizeof(axbot_interfaces__msg__DeviceInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = axbot_interfaces__msg__DeviceInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        axbot_interfaces__msg__DeviceInfo__fini(&data[i - 1]);
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
axbot_interfaces__msg__DeviceInfo__Sequence__fini(axbot_interfaces__msg__DeviceInfo__Sequence * array)
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
      axbot_interfaces__msg__DeviceInfo__fini(&array->data[i]);
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

axbot_interfaces__msg__DeviceInfo__Sequence *
axbot_interfaces__msg__DeviceInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__msg__DeviceInfo__Sequence * array = (axbot_interfaces__msg__DeviceInfo__Sequence *)allocator.allocate(sizeof(axbot_interfaces__msg__DeviceInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = axbot_interfaces__msg__DeviceInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
axbot_interfaces__msg__DeviceInfo__Sequence__destroy(axbot_interfaces__msg__DeviceInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    axbot_interfaces__msg__DeviceInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
axbot_interfaces__msg__DeviceInfo__Sequence__are_equal(const axbot_interfaces__msg__DeviceInfo__Sequence * lhs, const axbot_interfaces__msg__DeviceInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!axbot_interfaces__msg__DeviceInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
axbot_interfaces__msg__DeviceInfo__Sequence__copy(
  const axbot_interfaces__msg__DeviceInfo__Sequence * input,
  axbot_interfaces__msg__DeviceInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(axbot_interfaces__msg__DeviceInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    axbot_interfaces__msg__DeviceInfo * data =
      (axbot_interfaces__msg__DeviceInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!axbot_interfaces__msg__DeviceInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          axbot_interfaces__msg__DeviceInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!axbot_interfaces__msg__DeviceInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
