// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:srv/PositionControl.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__POSITION_CONTROL__STRUCT_H_
#define TUTORIAL_INTERFACES__SRV__DETAIL__POSITION_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PositionControl in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__PositionControl_Request
{
  double joint1_ref;
  double joint2_ref;
  double joint3_ref;
} tutorial_interfaces__srv__PositionControl_Request;

// Struct for a sequence of tutorial_interfaces__srv__PositionControl_Request.
typedef struct tutorial_interfaces__srv__PositionControl_Request__Sequence
{
  tutorial_interfaces__srv__PositionControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__PositionControl_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PositionControl in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__PositionControl_Response
{
  double theta1_des;
  double theta2_des;
  double theta3_des;
} tutorial_interfaces__srv__PositionControl_Response;

// Struct for a sequence of tutorial_interfaces__srv__PositionControl_Response.
typedef struct tutorial_interfaces__srv__PositionControl_Response__Sequence
{
  tutorial_interfaces__srv__PositionControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__PositionControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__POSITION_CONTROL__STRUCT_H_
