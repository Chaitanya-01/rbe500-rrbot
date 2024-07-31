// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:srv/PositionControl.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__POSITION_CONTROL__TRAITS_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__POSITION_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tutorial_interfaces/srv/detail/position_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tutorial_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PositionControl_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint1_ref
  {
    out << "joint1_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.joint1_ref, out);
    out << ", ";
  }

  // member: joint2_ref
  {
    out << "joint2_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.joint2_ref, out);
    out << ", ";
  }

  // member: joint3_ref
  {
    out << "joint3_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.joint3_ref, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PositionControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint1_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint1_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.joint1_ref, out);
    out << "\n";
  }

  // member: joint2_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint2_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.joint2_ref, out);
    out << "\n";
  }

  // member: joint3_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint3_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.joint3_ref, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PositionControl_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::srv::PositionControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::srv::PositionControl_Request & msg)
{
  return tutorial_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::srv::PositionControl_Request>()
{
  return "tutorial_interfaces::srv::PositionControl_Request";
}

template<>
inline const char * name<tutorial_interfaces::srv::PositionControl_Request>()
{
  return "tutorial_interfaces/srv/PositionControl_Request";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::PositionControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::PositionControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tutorial_interfaces::srv::PositionControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tutorial_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PositionControl_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: theta1_des
  {
    out << "theta1_des: ";
    rosidl_generator_traits::value_to_yaml(msg.theta1_des, out);
    out << ", ";
  }

  // member: theta2_des
  {
    out << "theta2_des: ";
    rosidl_generator_traits::value_to_yaml(msg.theta2_des, out);
    out << ", ";
  }

  // member: theta3_des
  {
    out << "theta3_des: ";
    rosidl_generator_traits::value_to_yaml(msg.theta3_des, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PositionControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: theta1_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta1_des: ";
    rosidl_generator_traits::value_to_yaml(msg.theta1_des, out);
    out << "\n";
  }

  // member: theta2_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta2_des: ";
    rosidl_generator_traits::value_to_yaml(msg.theta2_des, out);
    out << "\n";
  }

  // member: theta3_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta3_des: ";
    rosidl_generator_traits::value_to_yaml(msg.theta3_des, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PositionControl_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::srv::PositionControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::srv::PositionControl_Response & msg)
{
  return tutorial_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::srv::PositionControl_Response>()
{
  return "tutorial_interfaces::srv::PositionControl_Response";
}

template<>
inline const char * name<tutorial_interfaces::srv::PositionControl_Response>()
{
  return "tutorial_interfaces/srv/PositionControl_Response";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::PositionControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::PositionControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tutorial_interfaces::srv::PositionControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::srv::PositionControl>()
{
  return "tutorial_interfaces::srv::PositionControl";
}

template<>
inline const char * name<tutorial_interfaces::srv::PositionControl>()
{
  return "tutorial_interfaces/srv/PositionControl";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::PositionControl>
  : std::integral_constant<
    bool,
    has_fixed_size<tutorial_interfaces::srv::PositionControl_Request>::value &&
    has_fixed_size<tutorial_interfaces::srv::PositionControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<tutorial_interfaces::srv::PositionControl>
  : std::integral_constant<
    bool,
    has_bounded_size<tutorial_interfaces::srv::PositionControl_Request>::value &&
    has_bounded_size<tutorial_interfaces::srv::PositionControl_Response>::value
  >
{
};

template<>
struct is_service<tutorial_interfaces::srv::PositionControl>
  : std::true_type
{
};

template<>
struct is_service_request<tutorial_interfaces::srv::PositionControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tutorial_interfaces::srv::PositionControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__POSITION_CONTROL__TRAITS_HPP_
