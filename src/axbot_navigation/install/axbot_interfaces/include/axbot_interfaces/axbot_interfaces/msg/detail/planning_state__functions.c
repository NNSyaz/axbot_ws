// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from axbot_interfaces:msg/PlanningState.idl
// generated code does not contain a copyright notice
#include "axbot_interfaces/msg/detail/planning_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `move_state`
#include "rosidl_runtime_c/string_functions.h"
// Member `target_poses`
// Member `charger_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
axbot_interfaces__msg__PlanningState__init(axbot_interfaces__msg__PlanningState * msg)
{
  if (!msg) {
    return false;
  }
  // move_state
  if (!rosidl_runtime_c__String__init(&msg->move_state)) {
    axbot_interfaces__msg__PlanningState__fini(msg);
    return false;
  }
  // target_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->target_poses, 0)) {
    axbot_interfaces__msg__PlanningState__fini(msg);
    return false;
  }
  // charger_pose
  if (!geometry_msgs__msg__Pose__init(&msg->charger_pose)) {
    axbot_interfaces__msg__PlanningState__fini(msg);
    return false;
  }
  // going_back_to_charger
  // action_id
  return true;
}

void
axbot_interfaces__msg__PlanningState__fini(axbot_interfaces__msg__PlanningState * msg)
{
  if (!msg) {
    return;
  }
  // move_state
  rosidl_runtime_c__String__fini(&msg->move_state);
  // target_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->target_poses);
  // charger_pose
  geometry_msgs__msg__Pose__fini(&msg->charger_pose);
  // going_back_to_charger
  // action_id
}

bool
axbot_interfaces__msg__PlanningState__are_equal(const axbot_interfaces__msg__PlanningState * lhs, const axbot_interfaces__msg__PlanningState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // move_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->move_state), &(rhs->move_state)))
  {
    return false;
  }
  // target_poses
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->target_poses), &(rhs->target_poses)))
  {
    return false;
  }
  // charger_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->charger_pose), &(rhs->charger_pose)))
  {
    return false;
  }
  // going_back_to_charger
  if (lhs->going_back_to_charger != rhs->going_back_to_charger) {
    return false;
  }
  // action_id
  if (lhs->action_id != rhs->action_id) {
    return false;
  }
  return true;
}

bool
axbot_interfaces__msg__PlanningState__copy(
  const axbot_interfaces__msg__PlanningState * input,
  axbot_interfaces__msg__PlanningState * output)
{
  if (!input || !output) {
    return false;
  }
  // move_state
  if (!rosidl_runtime_c__String__copy(
      &(input->move_state), &(output->move_state)))
  {
    return false;
  }
  // target_poses
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->target_poses), &(output->target_poses)))
  {
    return false;
  }
  // charger_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->charger_pose), &(output->charger_pose)))
  {
    return false;
  }
  // going_back_to_charger
  output->going_back_to_charger = input->going_back_to_charger;
  // action_id
  output->action_id = input->action_id;
  return true;
}

axbot_interfaces__msg__PlanningState *
axbot_interfaces__msg__PlanningState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__msg__PlanningState * msg = (axbot_interfaces__msg__PlanningState *)allocator.allocate(sizeof(axbot_interfaces__msg__PlanningState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(axbot_interfaces__msg__PlanningState));
  bool success = axbot_interfaces__msg__PlanningState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
axbot_interfaces__msg__PlanningState__destroy(axbot_interfaces__msg__PlanningState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    axbot_interfaces__msg__PlanningState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
axbot_interfaces__msg__PlanningState__Sequence__init(axbot_interfaces__msg__PlanningState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__msg__PlanningState * data = NULL;

  if (size) {
    data = (axbot_interfaces__msg__PlanningState *)allocator.zero_allocate(size, sizeof(axbot_interfaces__msg__PlanningState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = axbot_interfaces__msg__PlanningState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        axbot_interfaces__msg__PlanningState__fini(&data[i - 1]);
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
axbot_interfaces__msg__PlanningState__Sequence__fini(axbot_interfaces__msg__PlanningState__Sequence * array)
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
      axbot_interfaces__msg__PlanningState__fini(&array->data[i]);
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

axbot_interfaces__msg__PlanningState__Sequence *
axbot_interfaces__msg__PlanningState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  axbot_interfaces__msg__PlanningState__Sequence * array = (axbot_interfaces__msg__PlanningState__Sequence *)allocator.allocate(sizeof(axbot_interfaces__msg__PlanningState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = axbot_interfaces__msg__PlanningState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
axbot_interfaces__msg__PlanningState__Sequence__destroy(axbot_interfaces__msg__PlanningState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    axbot_interfaces__msg__PlanningState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
axbot_interfaces__msg__PlanningState__Sequence__are_equal(const axbot_interfaces__msg__PlanningState__Sequence * lhs, const axbot_interfaces__msg__PlanningState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!axbot_interfaces__msg__PlanningState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
axbot_interfaces__msg__PlanningState__Sequence__copy(
  const axbot_interfaces__msg__PlanningState__Sequence * input,
  axbot_interfaces__msg__PlanningState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(axbot_interfaces__msg__PlanningState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    axbot_interfaces__msg__PlanningState * data =
      (axbot_interfaces__msg__PlanningState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!axbot_interfaces__msg__PlanningState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          axbot_interfaces__msg__PlanningState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!axbot_interfaces__msg__PlanningState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
