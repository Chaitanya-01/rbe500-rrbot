# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tutorial_interfaces:srv/PositionControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PositionControl_Request(type):
    """Metaclass of message 'PositionControl_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.srv.PositionControl_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__position_control__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__position_control__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__position_control__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__position_control__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__position_control__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PositionControl_Request(metaclass=Metaclass_PositionControl_Request):
    """Message class 'PositionControl_Request'."""

    __slots__ = [
        '_joint1_ref',
        '_joint2_ref',
        '_joint3_ref',
    ]

    _fields_and_field_types = {
        'joint1_ref': 'double',
        'joint2_ref': 'double',
        'joint3_ref': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint1_ref = kwargs.get('joint1_ref', float())
        self.joint2_ref = kwargs.get('joint2_ref', float())
        self.joint3_ref = kwargs.get('joint3_ref', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.joint1_ref != other.joint1_ref:
            return False
        if self.joint2_ref != other.joint2_ref:
            return False
        if self.joint3_ref != other.joint3_ref:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint1_ref(self):
        """Message field 'joint1_ref'."""
        return self._joint1_ref

    @joint1_ref.setter
    def joint1_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint1_ref' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'joint1_ref' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._joint1_ref = value

    @builtins.property
    def joint2_ref(self):
        """Message field 'joint2_ref'."""
        return self._joint2_ref

    @joint2_ref.setter
    def joint2_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint2_ref' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'joint2_ref' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._joint2_ref = value

    @builtins.property
    def joint3_ref(self):
        """Message field 'joint3_ref'."""
        return self._joint3_ref

    @joint3_ref.setter
    def joint3_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint3_ref' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'joint3_ref' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._joint3_ref = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_PositionControl_Response(type):
    """Metaclass of message 'PositionControl_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.srv.PositionControl_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__position_control__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__position_control__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__position_control__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__position_control__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__position_control__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PositionControl_Response(metaclass=Metaclass_PositionControl_Response):
    """Message class 'PositionControl_Response'."""

    __slots__ = [
        '_theta1_des',
        '_theta2_des',
        '_theta3_des',
    ]

    _fields_and_field_types = {
        'theta1_des': 'double',
        'theta2_des': 'double',
        'theta3_des': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.theta1_des = kwargs.get('theta1_des', float())
        self.theta2_des = kwargs.get('theta2_des', float())
        self.theta3_des = kwargs.get('theta3_des', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.theta1_des != other.theta1_des:
            return False
        if self.theta2_des != other.theta2_des:
            return False
        if self.theta3_des != other.theta3_des:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def theta1_des(self):
        """Message field 'theta1_des'."""
        return self._theta1_des

    @theta1_des.setter
    def theta1_des(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta1_des' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta1_des' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta1_des = value

    @builtins.property
    def theta2_des(self):
        """Message field 'theta2_des'."""
        return self._theta2_des

    @theta2_des.setter
    def theta2_des(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta2_des' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta2_des' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta2_des = value

    @builtins.property
    def theta3_des(self):
        """Message field 'theta3_des'."""
        return self._theta3_des

    @theta3_des.setter
    def theta3_des(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta3_des' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta3_des' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta3_des = value


class Metaclass_PositionControl(type):
    """Metaclass of service 'PositionControl'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.srv.PositionControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__position_control

            from tutorial_interfaces.srv import _position_control
            if _position_control.Metaclass_PositionControl_Request._TYPE_SUPPORT is None:
                _position_control.Metaclass_PositionControl_Request.__import_type_support__()
            if _position_control.Metaclass_PositionControl_Response._TYPE_SUPPORT is None:
                _position_control.Metaclass_PositionControl_Response.__import_type_support__()


class PositionControl(metaclass=Metaclass_PositionControl):
    from tutorial_interfaces.srv._position_control import PositionControl_Request as Request
    from tutorial_interfaces.srv._position_control import PositionControl_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
