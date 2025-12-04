# generated from rosidl_generator_py/resource/_idl.py.em
# with input from axbot_interfaces:msg/DeviceInfo.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DeviceInfo(type):
    """Metaclass of message 'DeviceInfo'."""

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
            module = import_type_support('axbot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'axbot_interfaces.msg.DeviceInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__device_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__device_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__device_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__device_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__device_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DeviceInfo(metaclass=Metaclass_DeviceInfo):
    """Message class 'DeviceInfo'."""

    __slots__ = [
        '_rosversion',
        '_rosdistro',
        '_axbot_version',
        '_model',
        '_serial_number',
        '_device_name',
        '_nickname',
        '_inscribed_radius',
        '_height',
        '_thickness',
        '_wheel_distance',
        '_width',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'rosversion': 'string',
        'rosdistro': 'string',
        'axbot_version': 'string',
        'model': 'string',
        'serial_number': 'string',
        'device_name': 'string',
        'nickname': 'string',
        'inscribed_radius': 'float',
        'height': 'float',
        'thickness': 'float',
        'wheel_distance': 'float',
        'width': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rosversion = kwargs.get('rosversion', str())
        self.rosdistro = kwargs.get('rosdistro', str())
        self.axbot_version = kwargs.get('axbot_version', str())
        self.model = kwargs.get('model', str())
        self.serial_number = kwargs.get('serial_number', str())
        self.device_name = kwargs.get('device_name', str())
        self.nickname = kwargs.get('nickname', str())
        self.inscribed_radius = kwargs.get('inscribed_radius', float())
        self.height = kwargs.get('height', float())
        self.thickness = kwargs.get('thickness', float())
        self.wheel_distance = kwargs.get('wheel_distance', float())
        self.width = kwargs.get('width', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.rosversion != other.rosversion:
            return False
        if self.rosdistro != other.rosdistro:
            return False
        if self.axbot_version != other.axbot_version:
            return False
        if self.model != other.model:
            return False
        if self.serial_number != other.serial_number:
            return False
        if self.device_name != other.device_name:
            return False
        if self.nickname != other.nickname:
            return False
        if self.inscribed_radius != other.inscribed_radius:
            return False
        if self.height != other.height:
            return False
        if self.thickness != other.thickness:
            return False
        if self.wheel_distance != other.wheel_distance:
            return False
        if self.width != other.width:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def rosversion(self):
        """Message field 'rosversion'."""
        return self._rosversion

    @rosversion.setter
    def rosversion(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'rosversion' field must be of type 'str'"
        self._rosversion = value

    @builtins.property
    def rosdistro(self):
        """Message field 'rosdistro'."""
        return self._rosdistro

    @rosdistro.setter
    def rosdistro(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'rosdistro' field must be of type 'str'"
        self._rosdistro = value

    @builtins.property
    def axbot_version(self):
        """Message field 'axbot_version'."""
        return self._axbot_version

    @axbot_version.setter
    def axbot_version(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'axbot_version' field must be of type 'str'"
        self._axbot_version = value

    @builtins.property
    def model(self):
        """Message field 'model'."""
        return self._model

    @model.setter
    def model(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'model' field must be of type 'str'"
        self._model = value

    @builtins.property
    def serial_number(self):
        """Message field 'serial_number'."""
        return self._serial_number

    @serial_number.setter
    def serial_number(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'serial_number' field must be of type 'str'"
        self._serial_number = value

    @builtins.property
    def device_name(self):
        """Message field 'device_name'."""
        return self._device_name

    @device_name.setter
    def device_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'device_name' field must be of type 'str'"
        self._device_name = value

    @builtins.property
    def nickname(self):
        """Message field 'nickname'."""
        return self._nickname

    @nickname.setter
    def nickname(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'nickname' field must be of type 'str'"
        self._nickname = value

    @builtins.property
    def inscribed_radius(self):
        """Message field 'inscribed_radius'."""
        return self._inscribed_radius

    @inscribed_radius.setter
    def inscribed_radius(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'inscribed_radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'inscribed_radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._inscribed_radius = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'height' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'height' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._height = value

    @builtins.property
    def thickness(self):
        """Message field 'thickness'."""
        return self._thickness

    @thickness.setter
    def thickness(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'thickness' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'thickness' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._thickness = value

    @builtins.property
    def wheel_distance(self):
        """Message field 'wheel_distance'."""
        return self._wheel_distance

    @wheel_distance.setter
    def wheel_distance(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'wheel_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel_distance = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'width' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'width' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._width = value
