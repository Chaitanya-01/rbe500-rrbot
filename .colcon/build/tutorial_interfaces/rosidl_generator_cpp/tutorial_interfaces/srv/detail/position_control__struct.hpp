// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tutorial_interfaces:srv/PositionControl.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__POSITION_CONTROL__STRUCT_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__POSITION_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__srv__PositionControl_Request __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__srv__PositionControl_Request __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PositionControl_Request_
{
  using Type = PositionControl_Request_<ContainerAllocator>;

  explicit PositionControl_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint1_ref = 0.0;
      this->joint2_ref = 0.0;
      this->joint3_ref = 0.0;
    }
  }

  explicit PositionControl_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint1_ref = 0.0;
      this->joint2_ref = 0.0;
      this->joint3_ref = 0.0;
    }
  }

  // field types and members
  using _joint1_ref_type =
    double;
  _joint1_ref_type joint1_ref;
  using _joint2_ref_type =
    double;
  _joint2_ref_type joint2_ref;
  using _joint3_ref_type =
    double;
  _joint3_ref_type joint3_ref;

  // setters for named parameter idiom
  Type & set__joint1_ref(
    const double & _arg)
  {
    this->joint1_ref = _arg;
    return *this;
  }
  Type & set__joint2_ref(
    const double & _arg)
  {
    this->joint2_ref = _arg;
    return *this;
  }
  Type & set__joint3_ref(
    const double & _arg)
  {
    this->joint3_ref = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::srv::PositionControl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::srv::PositionControl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::PositionControl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::PositionControl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::PositionControl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::PositionControl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::PositionControl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::PositionControl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::PositionControl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::PositionControl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__srv__PositionControl_Request
    std::shared_ptr<tutorial_interfaces::srv::PositionControl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__srv__PositionControl_Request
    std::shared_ptr<tutorial_interfaces::srv::PositionControl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionControl_Request_ & other) const
  {
    if (this->joint1_ref != other.joint1_ref) {
      return false;
    }
    if (this->joint2_ref != other.joint2_ref) {
      return false;
    }
    if (this->joint3_ref != other.joint3_ref) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionControl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionControl_Request_

// alias to use template instance with default allocator
using PositionControl_Request =
  tutorial_interfaces::srv::PositionControl_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tutorial_interfaces


#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__srv__PositionControl_Response __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__srv__PositionControl_Response __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PositionControl_Response_
{
  using Type = PositionControl_Response_<ContainerAllocator>;

  explicit PositionControl_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta1_des = 0.0;
      this->theta2_des = 0.0;
      this->theta3_des = 0.0;
    }
  }

  explicit PositionControl_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta1_des = 0.0;
      this->theta2_des = 0.0;
      this->theta3_des = 0.0;
    }
  }

  // field types and members
  using _theta1_des_type =
    double;
  _theta1_des_type theta1_des;
  using _theta2_des_type =
    double;
  _theta2_des_type theta2_des;
  using _theta3_des_type =
    double;
  _theta3_des_type theta3_des;

  // setters for named parameter idiom
  Type & set__theta1_des(
    const double & _arg)
  {
    this->theta1_des = _arg;
    return *this;
  }
  Type & set__theta2_des(
    const double & _arg)
  {
    this->theta2_des = _arg;
    return *this;
  }
  Type & set__theta3_des(
    const double & _arg)
  {
    this->theta3_des = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::srv::PositionControl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::srv::PositionControl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::PositionControl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::PositionControl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::PositionControl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::PositionControl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::PositionControl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::PositionControl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::PositionControl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::PositionControl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__srv__PositionControl_Response
    std::shared_ptr<tutorial_interfaces::srv::PositionControl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__srv__PositionControl_Response
    std::shared_ptr<tutorial_interfaces::srv::PositionControl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionControl_Response_ & other) const
  {
    if (this->theta1_des != other.theta1_des) {
      return false;
    }
    if (this->theta2_des != other.theta2_des) {
      return false;
    }
    if (this->theta3_des != other.theta3_des) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionControl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionControl_Response_

// alias to use template instance with default allocator
using PositionControl_Response =
  tutorial_interfaces::srv::PositionControl_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tutorial_interfaces

namespace tutorial_interfaces
{

namespace srv
{

struct PositionControl
{
  using Request = tutorial_interfaces::srv::PositionControl_Request;
  using Response = tutorial_interfaces::srv::PositionControl_Response;
};

}  // namespace srv

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__POSITION_CONTROL__STRUCT_HPP_
