// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eufs_msgs:msg/ConeDepth.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CONE_DEPTH__STRUCT_H_
#define EUFS_MSGS__MSG__DETAIL__CONE_DEPTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'color'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ConeDepth in the package eufs_msgs.
typedef struct eufs_msgs__msg__ConeDepth
{
  rosidl_runtime_c__String color;
  double depth;
} eufs_msgs__msg__ConeDepth;

// Struct for a sequence of eufs_msgs__msg__ConeDepth.
typedef struct eufs_msgs__msg__ConeDepth__Sequence
{
  eufs_msgs__msg__ConeDepth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eufs_msgs__msg__ConeDepth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EUFS_MSGS__MSG__DETAIL__CONE_DEPTH__STRUCT_H_
