// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from axbot_interfaces:msg/WheelState.idl
// generated code does not contain a copyright notice
#include "axbot_interfaces/msg/detail/wheel_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `control_mode`
#include "rosidl_runtime_c/string_functions.h"

bool
axbot_interfaces__msg__WheelState__init(axbot_interfaces__msg__WheelState * msg)
{
  if (!msg) {
    return false;
  }
  // control_mode
  if (!rosidl_runtime_c__String__init(&msg->control_mode)) {
    axbot_interfaces__msg__WheelState__fini(msg);
    return false;
  }
  // emergency_stop_pressed
  return true;
}

void
axbot_interfaces__msg__WheelState__fini(axbot_interfaces__msg__WheelState * msg)
{
  if (!msg) {
    return;
  }
  // control_mode
  rosidl_runtime_c__String__fini(&msg->control_mode);
  // emergency_stop_pressed
}

bool
axbot_interfaces__msg__WheelState__are_equal(const axbot_interfaces__msg__WheelState * lhs, const axbot_interfaces__msg__WheelState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // control_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->control_mode), &(rhs->control_mode)))
  {
    return false;
  }
  // emergency_stop_pressed
  if (lhs->emergency_stop_pressed != rhs->emergency_stop_pressed) {
    return false;
  }
  return true;
}

bool
axbot_interfaces__msg__WheelState__copy(
  const axbot_interfaces__msg__WheelState * input,
  axbot_interfaces__msg__WheelState * output)
{
  if (!input || !output) {
    return false;
  }
  // control_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->control_mode), &(output->control_mode)))
  {
    return false;
  }
  // emergency_stop_pressed
  output->emergency_stop_pressed = input->emergency_stop_pressed;
  return true;
}

axbot_interfaces__msg__WheelState *
axbot_interfaces__msg__WheelState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__msg__WheelState * msg = (axbot_interfaces__msg__WheelState *)allocator.allocate(sizeof(axbot_interfaces__msg__WheelState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(axbot_interfaces__msg__WheelState));
  bool success = axbot_interfaces__msg__WheelState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
axbot_interfaces__msg__WheelState__destroy(axbot_interfaces__msg__WheelState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    axbot_interfaces__msg__WheelState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
axbot_interfaces__msg__WheelState__Sequence__init(axbot_interfaces__msg__WheelState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__msg__WheelState * data = NULL;

  if (size) {
    data = (axbot_interfaces__msg__WheelState *)allocator.zero_allocate(size, sizeof(axbot_interfaces__msg__WheelState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = axbot_interfaces__msg__WheelState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        axbot_interfaces__msg__WheelState__fini(&data[i - 1]);
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
axbot_interfaces__msg__WheelState__Sequence__fini(axbot_interfaces__msg__WheelState__Sequence * array)
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
      axbot_interfaces__msg__WheelState__fini(&array->data[i]);
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

axbot_interfaces__msg__WheelState__Sequence *
axbot_interfaces__msg__WheelState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__msg__WheelState__Sequence * array = (axbot_interfaces__msg__WheelState__Sequence *)allocator.allocate(sizeof(axbot_interfaces__msg__WheelState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = axbot_interfaces__msg__WheelState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
axbot_interfaces__msg__WheelState__Sequence__destroy(axbot_interfaces__msg__WheelState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    axbot_interfaces__msg__WheelState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
axbot_interfaces__msg__WheelState__Sequence__are_equal(const axbot_interfaces__msg__WheelState__Sequence * lhs, const axbot_interfaces__msg__WheelState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!axbot_interfaces__msg__WheelState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
axbot_interfaces__msg__WheelState__Sequence__copy(
  const axbot_interfaces__msg__WheelState__Sequence * input,
  axbot_interfaces__msg__WheelState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(axbot_interfaces__msg__WheelState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    axbot_interfaces__msg__WheelState * data =
      (axbot_interfaces__msg__WheelState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!axbot_interfaces__msg__WheelState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          axbot_interfaces__msg__WheelState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!axbot_interfaces__msg__WheelState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
