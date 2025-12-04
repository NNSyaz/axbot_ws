// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from axbot_interfaces:srv/SetEmergencyStop.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/srv/set_emergency_stop.h"


#ifndef AXBOT_INTERFACES__SRV__DETAIL__SET_EMERGENCY_STOP__STRUCT_H_
#define AXBOT_INTERFACES__SRV__DETAIL__SET_EMERGENCY_STOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetEmergencyStop in the package axbot_interfaces.
typedef struct axbot_interfaces__srv__SetEmergencyStop_Request
{
  /// true to enable emergency stop, false to disable
  bool enable;
} axbot_interfaces__srv__SetEmergencyStop_Request;

// Struct for a sequence of axbot_interfaces__srv__SetEmergencyStop_Request.
typedef struct axbot_interfaces__srv__SetEmergencyStop_Request__Sequence
{
  axbot_interfaces__srv__SetEmergencyStop_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} axbot_interfaces__srv__SetEmergencyStop_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetEmergencyStop in the package axbot_interfaces.
typedef struct axbot_interfaces__srv__SetEmergencyStop_Response
{
  bool success;
  rosidl_runtime_c__String message;
} axbot_interfaces__srv__SetEmergencyStop_Response;

// Struct for a sequence of axbot_interfaces__srv__SetEmergencyStop_Response.
typedef struct axbot_interfaces__srv__SetEmergencyStop_Response__Sequence
{
  axbot_interfaces__srv__SetEmergencyStop_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} axbot_interfaces__srv__SetEmergencyStop_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  axbot_interfaces__srv__SetEmergencyStop_Event__request__MAX_SIZE = 1
};
// response
enum
{
  axbot_interfaces__srv__SetEmergencyStop_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetEmergencyStop in the package axbot_interfaces.
typedef struct axbot_interfaces__srv__SetEmergencyStop_Event
{
  service_msgs__msg__ServiceEventInfo info;
  axbot_interfaces__srv__SetEmergencyStop_Request__Sequence request;
  axbot_interfaces__srv__SetEmergencyStop_Response__Sequence response;
} axbot_interfaces__srv__SetEmergencyStop_Event;

// Struct for a sequence of axbot_interfaces__srv__SetEmergencyStop_Event.
typedef struct axbot_interfaces__srv__SetEmergencyStop_Event__Sequence
{
  axbot_interfaces__srv__SetEmergencyStop_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} axbot_interfaces__srv__SetEmergencyStop_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AXBOT_INTERFACES__SRV__DETAIL__SET_EMERGENCY_STOP__STRUCT_H_
