// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from axbot_interfaces:srv/GetDeviceInfo.idl
// generated code does not contain a copyright notice
#include "axbot_interfaces/srv/detail/get_device_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
axbot_interfaces__srv__GetDeviceInfo_Request__init(axbot_interfaces__srv__GetDeviceInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
axbot_interfaces__srv__GetDeviceInfo_Request__fini(axbot_interfaces__srv__GetDeviceInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
axbot_interfaces__srv__GetDeviceInfo_Request__are_equal(const axbot_interfaces__srv__GetDeviceInfo_Request * lhs, const axbot_interfaces__srv__GetDeviceInfo_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
axbot_interfaces__srv__GetDeviceInfo_Request__copy(
  const axbot_interfaces__srv__GetDeviceInfo_Request * input,
  axbot_interfaces__srv__GetDeviceInfo_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

axbot_interfaces__srv__GetDeviceInfo_Request *
axbot_interfaces__srv__GetDeviceInfo_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__srv__GetDeviceInfo_Request * msg = (axbot_interfaces__srv__GetDeviceInfo_Request *)allocator.allocate(sizeof(axbot_interfaces__srv__GetDeviceInfo_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(axbot_interfaces__srv__GetDeviceInfo_Request));
  bool success = axbot_interfaces__srv__GetDeviceInfo_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
axbot_interfaces__srv__GetDeviceInfo_Request__destroy(axbot_interfaces__srv__GetDeviceInfo_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    axbot_interfaces__srv__GetDeviceInfo_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
axbot_interfaces__srv__GetDeviceInfo_Request__Sequence__init(axbot_interfaces__srv__GetDeviceInfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__srv__GetDeviceInfo_Request * data = NULL;

  if (size) {
    data = (axbot_interfaces__srv__GetDeviceInfo_Request *)allocator.zero_allocate(size, sizeof(axbot_interfaces__srv__GetDeviceInfo_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = axbot_interfaces__srv__GetDeviceInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        axbot_interfaces__srv__GetDeviceInfo_Request__fini(&data[i - 1]);
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
axbot_interfaces__srv__GetDeviceInfo_Request__Sequence__fini(axbot_interfaces__srv__GetDeviceInfo_Request__Sequence * array)
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
      axbot_interfaces__srv__GetDeviceInfo_Request__fini(&array->data[i]);
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

axbot_interfaces__srv__GetDeviceInfo_Request__Sequence *
axbot_interfaces__srv__GetDeviceInfo_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__srv__GetDeviceInfo_Request__Sequence * array = (axbot_interfaces__srv__GetDeviceInfo_Request__Sequence *)allocator.allocate(sizeof(axbot_interfaces__srv__GetDeviceInfo_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = axbot_interfaces__srv__GetDeviceInfo_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
axbot_interfaces__srv__GetDeviceInfo_Request__Sequence__destroy(axbot_interfaces__srv__GetDeviceInfo_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    axbot_interfaces__srv__GetDeviceInfo_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
axbot_interfaces__srv__GetDeviceInfo_Request__Sequence__are_equal(const axbot_interfaces__srv__GetDeviceInfo_Request__Sequence * lhs, const axbot_interfaces__srv__GetDeviceInfo_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!axbot_interfaces__srv__GetDeviceInfo_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
axbot_interfaces__srv__GetDeviceInfo_Request__Sequence__copy(
  const axbot_interfaces__srv__GetDeviceInfo_Request__Sequence * input,
  axbot_interfaces__srv__GetDeviceInfo_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(axbot_interfaces__srv__GetDeviceInfo_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    axbot_interfaces__srv__GetDeviceInfo_Request * data =
      (axbot_interfaces__srv__GetDeviceInfo_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!axbot_interfaces__srv__GetDeviceInfo_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          axbot_interfaces__srv__GetDeviceInfo_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!axbot_interfaces__srv__GetDeviceInfo_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


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
axbot_interfaces__srv__GetDeviceInfo_Response__init(axbot_interfaces__srv__GetDeviceInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // rosversion
  if (!rosidl_runtime_c__String__init(&msg->rosversion)) {
    axbot_interfaces__srv__GetDeviceInfo_Response__fini(msg);
    return false;
  }
  // rosdistro
  if (!rosidl_runtime_c__String__init(&msg->rosdistro)) {
    axbot_interfaces__srv__GetDeviceInfo_Response__fini(msg);
    return false;
  }
  // axbot_version
  if (!rosidl_runtime_c__String__init(&msg->axbot_version)) {
    axbot_interfaces__srv__GetDeviceInfo_Response__fini(msg);
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__init(&msg->model)) {
    axbot_interfaces__srv__GetDeviceInfo_Response__fini(msg);
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__init(&msg->serial_number)) {
    axbot_interfaces__srv__GetDeviceInfo_Response__fini(msg);
    return false;
  }
  // device_name
  if (!rosidl_runtime_c__String__init(&msg->device_name)) {
    axbot_interfaces__srv__GetDeviceInfo_Response__fini(msg);
    return false;
  }
  // nickname
  if (!rosidl_runtime_c__String__init(&msg->nickname)) {
    axbot_interfaces__srv__GetDeviceInfo_Response__fini(msg);
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
axbot_interfaces__srv__GetDeviceInfo_Response__fini(axbot_interfaces__srv__GetDeviceInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
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
axbot_interfaces__srv__GetDeviceInfo_Response__are_equal(const axbot_interfaces__srv__GetDeviceInfo_Response * lhs, const axbot_interfaces__srv__GetDeviceInfo_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
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
axbot_interfaces__srv__GetDeviceInfo_Response__copy(
  const axbot_interfaces__srv__GetDeviceInfo_Response * input,
  axbot_interfaces__srv__GetDeviceInfo_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
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

axbot_interfaces__srv__GetDeviceInfo_Response *
axbot_interfaces__srv__GetDeviceInfo_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__srv__GetDeviceInfo_Response * msg = (axbot_interfaces__srv__GetDeviceInfo_Response *)allocator.allocate(sizeof(axbot_interfaces__srv__GetDeviceInfo_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(axbot_interfaces__srv__GetDeviceInfo_Response));
  bool success = axbot_interfaces__srv__GetDeviceInfo_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
axbot_interfaces__srv__GetDeviceInfo_Response__destroy(axbot_interfaces__srv__GetDeviceInfo_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    axbot_interfaces__srv__GetDeviceInfo_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
axbot_interfaces__srv__GetDeviceInfo_Response__Sequence__init(axbot_interfaces__srv__GetDeviceInfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__srv__GetDeviceInfo_Response * data = NULL;

  if (size) {
    data = (axbot_interfaces__srv__GetDeviceInfo_Response *)allocator.zero_allocate(size, sizeof(axbot_interfaces__srv__GetDeviceInfo_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = axbot_interfaces__srv__GetDeviceInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        axbot_interfaces__srv__GetDeviceInfo_Response__fini(&data[i - 1]);
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
axbot_interfaces__srv__GetDeviceInfo_Response__Sequence__fini(axbot_interfaces__srv__GetDeviceInfo_Response__Sequence * array)
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
      axbot_interfaces__srv__GetDeviceInfo_Response__fini(&array->data[i]);
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

axbot_interfaces__srv__GetDeviceInfo_Response__Sequence *
axbot_interfaces__srv__GetDeviceInfo_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__srv__GetDeviceInfo_Response__Sequence * array = (axbot_interfaces__srv__GetDeviceInfo_Response__Sequence *)allocator.allocate(sizeof(axbot_interfaces__srv__GetDeviceInfo_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = axbot_interfaces__srv__GetDeviceInfo_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
axbot_interfaces__srv__GetDeviceInfo_Response__Sequence__destroy(axbot_interfaces__srv__GetDeviceInfo_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    axbot_interfaces__srv__GetDeviceInfo_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
axbot_interfaces__srv__GetDeviceInfo_Response__Sequence__are_equal(const axbot_interfaces__srv__GetDeviceInfo_Response__Sequence * lhs, const axbot_interfaces__srv__GetDeviceInfo_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!axbot_interfaces__srv__GetDeviceInfo_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
axbot_interfaces__srv__GetDeviceInfo_Response__Sequence__copy(
  const axbot_interfaces__srv__GetDeviceInfo_Response__Sequence * input,
  axbot_interfaces__srv__GetDeviceInfo_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(axbot_interfaces__srv__GetDeviceInfo_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    axbot_interfaces__srv__GetDeviceInfo_Response * data =
      (axbot_interfaces__srv__GetDeviceInfo_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!axbot_interfaces__srv__GetDeviceInfo_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          axbot_interfaces__srv__GetDeviceInfo_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!axbot_interfaces__srv__GetDeviceInfo_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "axbot_interfaces/srv/detail/get_device_info__functions.h"

bool
axbot_interfaces__srv__GetDeviceInfo_Event__init(axbot_interfaces__srv__GetDeviceInfo_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    axbot_interfaces__srv__GetDeviceInfo_Event__fini(msg);
    return false;
  }
  // request
  if (!axbot_interfaces__srv__GetDeviceInfo_Request__Sequence__init(&msg->request, 0)) {
    axbot_interfaces__srv__GetDeviceInfo_Event__fini(msg);
    return false;
  }
  // response
  if (!axbot_interfaces__srv__GetDeviceInfo_Response__Sequence__init(&msg->response, 0)) {
    axbot_interfaces__srv__GetDeviceInfo_Event__fini(msg);
    return false;
  }
  return true;
}

void
axbot_interfaces__srv__GetDeviceInfo_Event__fini(axbot_interfaces__srv__GetDeviceInfo_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  axbot_interfaces__srv__GetDeviceInfo_Request__Sequence__fini(&msg->request);
  // response
  axbot_interfaces__srv__GetDeviceInfo_Response__Sequence__fini(&msg->response);
}

bool
axbot_interfaces__srv__GetDeviceInfo_Event__are_equal(const axbot_interfaces__srv__GetDeviceInfo_Event * lhs, const axbot_interfaces__srv__GetDeviceInfo_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!axbot_interfaces__srv__GetDeviceInfo_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!axbot_interfaces__srv__GetDeviceInfo_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
axbot_interfaces__srv__GetDeviceInfo_Event__copy(
  const axbot_interfaces__srv__GetDeviceInfo_Event * input,
  axbot_interfaces__srv__GetDeviceInfo_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!axbot_interfaces__srv__GetDeviceInfo_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!axbot_interfaces__srv__GetDeviceInfo_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

axbot_interfaces__srv__GetDeviceInfo_Event *
axbot_interfaces__srv__GetDeviceInfo_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__srv__GetDeviceInfo_Event * msg = (axbot_interfaces__srv__GetDeviceInfo_Event *)allocator.allocate(sizeof(axbot_interfaces__srv__GetDeviceInfo_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(axbot_interfaces__srv__GetDeviceInfo_Event));
  bool success = axbot_interfaces__srv__GetDeviceInfo_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
axbot_interfaces__srv__GetDeviceInfo_Event__destroy(axbot_interfaces__srv__GetDeviceInfo_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    axbot_interfaces__srv__GetDeviceInfo_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
axbot_interfaces__srv__GetDeviceInfo_Event__Sequence__init(axbot_interfaces__srv__GetDeviceInfo_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__srv__GetDeviceInfo_Event * data = NULL;

  if (size) {
    data = (axbot_interfaces__srv__GetDeviceInfo_Event *)allocator.zero_allocate(size, sizeof(axbot_interfaces__srv__GetDeviceInfo_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = axbot_interfaces__srv__GetDeviceInfo_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        axbot_interfaces__srv__GetDeviceInfo_Event__fini(&data[i - 1]);
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
axbot_interfaces__srv__GetDeviceInfo_Event__Sequence__fini(axbot_interfaces__srv__GetDeviceInfo_Event__Sequence * array)
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
      axbot_interfaces__srv__GetDeviceInfo_Event__fini(&array->data[i]);
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

axbot_interfaces__srv__GetDeviceInfo_Event__Sequence *
axbot_interfaces__srv__GetDeviceInfo_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__srv__GetDeviceInfo_Event__Sequence * array = (axbot_interfaces__srv__GetDeviceInfo_Event__Sequence *)allocator.allocate(sizeof(axbot_interfaces__srv__GetDeviceInfo_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = axbot_interfaces__srv__GetDeviceInfo_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
axbot_interfaces__srv__GetDeviceInfo_Event__Sequence__destroy(axbot_interfaces__srv__GetDeviceInfo_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    axbot_interfaces__srv__GetDeviceInfo_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
axbot_interfaces__srv__GetDeviceInfo_Event__Sequence__are_equal(const axbot_interfaces__srv__GetDeviceInfo_Event__Sequence * lhs, const axbot_interfaces__srv__GetDeviceInfo_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!axbot_interfaces__srv__GetDeviceInfo_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
axbot_interfaces__srv__GetDeviceInfo_Event__Sequence__copy(
  const axbot_interfaces__srv__GetDeviceInfo_Event__Sequence * input,
  axbot_interfaces__srv__GetDeviceInfo_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(axbot_interfaces__srv__GetDeviceInfo_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    axbot_interfaces__srv__GetDeviceInfo_Event * data =
      (axbot_interfaces__srv__GetDeviceInfo_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!axbot_interfaces__srv__GetDeviceInfo_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          axbot_interfaces__srv__GetDeviceInfo_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!axbot_interfaces__srv__GetDeviceInfo_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
