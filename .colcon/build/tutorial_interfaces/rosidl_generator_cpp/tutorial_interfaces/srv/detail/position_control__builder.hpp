// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/PositionControl.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__POSITION_CONTROL__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__POSITION_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/srv/detail/position_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_PositionControl_Request_joint3_ref
{
public:
  explicit Init_PositionControl_Request_joint3_ref(::tutorial_interfaces::srv::PositionControl_Request & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::PositionControl_Request joint3_ref(::tutorial_interfaces::srv::PositionControl_Request::_joint3_ref_type arg)
  {
    msg_.joint3_ref = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::PositionControl_Request msg_;
};

class Init_PositionControl_Request_joint2_ref
{
public:
  explicit Init_PositionControl_Request_joint2_ref(::tutorial_interfaces::srv::PositionControl_Request & msg)
  : msg_(msg)
  {}
  Init_PositionControl_Request_joint3_ref joint2_ref(::tutorial_interfaces::srv::PositionControl_Request::_joint2_ref_type arg)
  {
    msg_.joint2_ref = std::move(arg);
    return Init_PositionControl_Request_joint3_ref(msg_);
  }

private:
  ::tutorial_interfaces::srv::PositionControl_Request msg_;
};

class Init_PositionControl_Request_joint1_ref
{
public:
  Init_PositionControl_Request_joint1_ref()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionControl_Request_joint2_ref joint1_ref(::tutorial_interfaces::srv::PositionControl_Request::_joint1_ref_type arg)
  {
    msg_.joint1_ref = std::move(arg);
    return Init_PositionControl_Request_joint2_ref(msg_);
  }

private:
  ::tutorial_interfaces::srv::PositionControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::PositionControl_Request>()
{
  return tutorial_interfaces::srv::builder::Init_PositionControl_Request_joint1_ref();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_PositionControl_Response_theta3_des
{
public:
  explicit Init_PositionControl_Response_theta3_des(::tutorial_interfaces::srv::PositionControl_Response & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::PositionControl_Response theta3_des(::tutorial_interfaces::srv::PositionControl_Response::_theta3_des_type arg)
  {
    msg_.theta3_des = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::PositionControl_Response msg_;
};

class Init_PositionControl_Response_theta2_des
{
public:
  explicit Init_PositionControl_Response_theta2_des(::tutorial_interfaces::srv::PositionControl_Response & msg)
  : msg_(msg)
  {}
  Init_PositionControl_Response_theta3_des theta2_des(::tutorial_interfaces::srv::PositionControl_Response::_theta2_des_type arg)
  {
    msg_.theta2_des = std::move(arg);
    return Init_PositionControl_Response_theta3_des(msg_);
  }

private:
  ::tutorial_interfaces::srv::PositionControl_Response msg_;
};

class Init_PositionControl_Response_theta1_des
{
public:
  Init_PositionControl_Response_theta1_des()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionControl_Response_theta2_des theta1_des(::tutorial_interfaces::srv::PositionControl_Response::_theta1_des_type arg)
  {
    msg_.theta1_des = std::move(arg);
    return Init_PositionControl_Response_theta2_des(msg_);
  }

private:
  ::tutorial_interfaces::srv::PositionControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::PositionControl_Response>()
{
  return tutorial_interfaces::srv::builder::Init_PositionControl_Response_theta1_des();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__POSITION_CONTROL__BUILDER_HPP_
