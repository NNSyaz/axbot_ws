// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from axbot_interfaces:msg/SlamState.idl
// generated code does not contain a copyright notice
#include "axbot_interfaces/msg/detail/slam_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

bool
axbot_interfaces__msg__SlamState__init(axbot_interfaces__msg__SlamState * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    axbot_interfaces__msg__SlamState__fini(msg);
    return false;
  }
  // reliable
  return true;
}

void
axbot_interfaces__msg__SlamState__fini(axbot_interfaces__msg__SlamState * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // reliable
}

bool
axbot_interfaces__msg__SlamState__are_equal(const axbot_interfaces__msg__SlamState * lhs, const axbot_interfaces__msg__SlamState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // reliable
  if (lhs->reliable != rhs->reliable) {
    return false;
  }
  return true;
}

bool
axbot_interfaces__msg__SlamState__copy(
  const axbot_interfaces__msg__SlamState * input,
  axbot_interfaces__msg__SlamState * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // reliable
  output->reliable = input->reliable;
  return true;
}

axbot_interfaces__msg__SlamState *
axbot_interfaces__msg__SlamState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__msg__SlamState * msg = (axbot_interfaces__msg__SlamState *)allocator.allocate(sizeof(axbot_interfaces__msg__SlamState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(axbot_interfaces__msg__SlamState));
  bool success = axbot_interfaces__msg__SlamState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
axbot_interfaces__msg__SlamState__destroy(axbot_interfaces__msg__SlamState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    axbot_interfaces__msg__SlamState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
axbot_interfaces__msg__SlamState__Sequence__init(axbot_interfaces__msg__SlamState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__msg__SlamState * data = NULL;

  if (size) {
    data = (axbot_interfaces__msg__SlamState *)allocator.zero_allocate(size, sizeof(axbot_interfaces__msg__SlamState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = axbot_interfaces__msg__SlamState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        axbot_interfaces__msg__SlamState__fini(&data[i - 1]);
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
axbot_interfaces__msg__SlamState__Sequence__fini(axbot_interfaces__msg__SlamState__Sequence * array)
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
      axbot_interfaces__msg__SlamState__fini(&array->data[i]);
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

axbot_interfaces__msg__SlamState__Sequence *
axbot_interfaces__msg__SlamState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__msg__SlamState__Sequence * array = (axbot_interfaces__msg__SlamState__Sequence *)allocator.allocate(sizeof(axbot_interfaces__msg__SlamState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = axbot_interfaces__msg__SlamState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
axbot_interfaces__msg__SlamState__Sequence__destroy(axbot_interfaces__msg__SlamState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    axbot_interfaces__msg__SlamState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
axbot_interfaces__msg__SlamState__Sequence__are_equal(const axbot_interfaces__msg__SlamState__Sequence * lhs, const axbot_interfaces__msg__SlamState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!axbot_interfaces__msg__SlamState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
axbot_interfaces__msg__SlamState__Sequence__copy(
  const axbot_interfaces__msg__SlamState__Sequence * input,
  axbot_interfaces__msg__SlamState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(axbot_interfaces__msg__SlamState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    axbot_interfaces__msg__SlamState * data =
      (axbot_interfaces__msg__SlamState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!axbot_interfaces__msg__SlamState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          axbot_interfaces__msg__SlamState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!axbot_interfaces__msg__SlamState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
