// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/ConesDepth.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CONES_DEPTH__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__CONES_DEPTH__TRAITS_HPP_

#include "eufs_msgs/msg/detail/cones_depth__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
// Member 'image_header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'cones_depth'
#include "eufs_msgs/msg/detail/cone_depth__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const eufs_msgs::msg::ConesDepth & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: image_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_header:\n";
    to_yaml(msg.image_header, out, indentation + 2);
  }

  // member: cones_depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cones_depth.size() == 0) {
      out << "cones_depth: []\n";
    } else {
      out << "cones_depth:\n";
      for (auto item : msg.cones_depth) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const eufs_msgs::msg::ConesDepth & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<eufs_msgs::msg::ConesDepth>()
{
  return "eufs_msgs::msg::ConesDepth";
}

template<>
inline const char * name<eufs_msgs::msg::ConesDepth>()
{
  return "eufs_msgs/msg/ConesDepth";
}

template<>
struct has_fixed_size<eufs_msgs::msg::ConesDepth>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eufs_msgs::msg::ConesDepth>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eufs_msgs::msg::ConesDepth>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__CONES_DEPTH__TRAITS_HPP_
