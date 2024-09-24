# generated from rosidl_generator_py/resource/_idl.py.em
# with input from imu_ros2:msg/ImuDiagData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ImuDiagData(type):
    """Metaclass of message 'ImuDiagData'."""

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
            module = import_type_support('imu_ros2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'imu_ros2.msg.ImuDiagData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__imu_diag_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__imu_diag_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__imu_diag_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__imu_diag_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__imu_diag_data

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ImuDiagData(metaclass=Metaclass_ImuDiagData):
    """Message class 'ImuDiagData'."""

    __slots__ = [
        '_header',
        '_diag_data_path_overrun',
        '_diag_flash_memory_update_error',
        '_diag_spi_communication_error',
        '_diag_standby_mode',
        '_diag_sensor_self_test_error',
        '_diag_flash_memory_test_error',
        '_diag_clock_error',
        '_diag_acceleration_self_test_error',
        '_diag_gyroscope1_self_test_error',
        '_diag_gyroscope2_self_test_error',
        '_diag_flash_memory_write_count_exceeded_error',
        '_flash_counter',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'diag_data_path_overrun': 'boolean',
        'diag_flash_memory_update_error': 'boolean',
        'diag_spi_communication_error': 'boolean',
        'diag_standby_mode': 'boolean',
        'diag_sensor_self_test_error': 'boolean',
        'diag_flash_memory_test_error': 'boolean',
        'diag_clock_error': 'boolean',
        'diag_acceleration_self_test_error': 'boolean',
        'diag_gyroscope1_self_test_error': 'boolean',
        'diag_gyroscope2_self_test_error': 'boolean',
        'diag_flash_memory_write_count_exceeded_error': 'boolean',
        'flash_counter': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.diag_data_path_overrun = kwargs.get('diag_data_path_overrun', bool())
        self.diag_flash_memory_update_error = kwargs.get('diag_flash_memory_update_error', bool())
        self.diag_spi_communication_error = kwargs.get('diag_spi_communication_error', bool())
        self.diag_standby_mode = kwargs.get('diag_standby_mode', bool())
        self.diag_sensor_self_test_error = kwargs.get('diag_sensor_self_test_error', bool())
        self.diag_flash_memory_test_error = kwargs.get('diag_flash_memory_test_error', bool())
        self.diag_clock_error = kwargs.get('diag_clock_error', bool())
        self.diag_acceleration_self_test_error = kwargs.get('diag_acceleration_self_test_error', bool())
        self.diag_gyroscope1_self_test_error = kwargs.get('diag_gyroscope1_self_test_error', bool())
        self.diag_gyroscope2_self_test_error = kwargs.get('diag_gyroscope2_self_test_error', bool())
        self.diag_flash_memory_write_count_exceeded_error = kwargs.get('diag_flash_memory_write_count_exceeded_error', bool())
        self.flash_counter = kwargs.get('flash_counter', int())

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
        if self.header != other.header:
            return False
        if self.diag_data_path_overrun != other.diag_data_path_overrun:
            return False
        if self.diag_flash_memory_update_error != other.diag_flash_memory_update_error:
            return False
        if self.diag_spi_communication_error != other.diag_spi_communication_error:
            return False
        if self.diag_standby_mode != other.diag_standby_mode:
            return False
        if self.diag_sensor_self_test_error != other.diag_sensor_self_test_error:
            return False
        if self.diag_flash_memory_test_error != other.diag_flash_memory_test_error:
            return False
        if self.diag_clock_error != other.diag_clock_error:
            return False
        if self.diag_acceleration_self_test_error != other.diag_acceleration_self_test_error:
            return False
        if self.diag_gyroscope1_self_test_error != other.diag_gyroscope1_self_test_error:
            return False
        if self.diag_gyroscope2_self_test_error != other.diag_gyroscope2_self_test_error:
            return False
        if self.diag_flash_memory_write_count_exceeded_error != other.diag_flash_memory_write_count_exceeded_error:
            return False
        if self.flash_counter != other.flash_counter:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def diag_data_path_overrun(self):
        """Message field 'diag_data_path_overrun'."""
        return self._diag_data_path_overrun

    @diag_data_path_overrun.setter
    def diag_data_path_overrun(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'diag_data_path_overrun' field must be of type 'bool'"
        self._diag_data_path_overrun = value

    @builtins.property
    def diag_flash_memory_update_error(self):
        """Message field 'diag_flash_memory_update_error'."""
        return self._diag_flash_memory_update_error

    @diag_flash_memory_update_error.setter
    def diag_flash_memory_update_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'diag_flash_memory_update_error' field must be of type 'bool'"
        self._diag_flash_memory_update_error = value

    @builtins.property
    def diag_spi_communication_error(self):
        """Message field 'diag_spi_communication_error'."""
        return self._diag_spi_communication_error

    @diag_spi_communication_error.setter
    def diag_spi_communication_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'diag_spi_communication_error' field must be of type 'bool'"
        self._diag_spi_communication_error = value

    @builtins.property
    def diag_standby_mode(self):
        """Message field 'diag_standby_mode'."""
        return self._diag_standby_mode

    @diag_standby_mode.setter
    def diag_standby_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'diag_standby_mode' field must be of type 'bool'"
        self._diag_standby_mode = value

    @builtins.property
    def diag_sensor_self_test_error(self):
        """Message field 'diag_sensor_self_test_error'."""
        return self._diag_sensor_self_test_error

    @diag_sensor_self_test_error.setter
    def diag_sensor_self_test_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'diag_sensor_self_test_error' field must be of type 'bool'"
        self._diag_sensor_self_test_error = value

    @builtins.property
    def diag_flash_memory_test_error(self):
        """Message field 'diag_flash_memory_test_error'."""
        return self._diag_flash_memory_test_error

    @diag_flash_memory_test_error.setter
    def diag_flash_memory_test_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'diag_flash_memory_test_error' field must be of type 'bool'"
        self._diag_flash_memory_test_error = value

    @builtins.property
    def diag_clock_error(self):
        """Message field 'diag_clock_error'."""
        return self._diag_clock_error

    @diag_clock_error.setter
    def diag_clock_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'diag_clock_error' field must be of type 'bool'"
        self._diag_clock_error = value

    @builtins.property
    def diag_acceleration_self_test_error(self):
        """Message field 'diag_acceleration_self_test_error'."""
        return self._diag_acceleration_self_test_error

    @diag_acceleration_self_test_error.setter
    def diag_acceleration_self_test_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'diag_acceleration_self_test_error' field must be of type 'bool'"
        self._diag_acceleration_self_test_error = value

    @builtins.property
    def diag_gyroscope1_self_test_error(self):
        """Message field 'diag_gyroscope1_self_test_error'."""
        return self._diag_gyroscope1_self_test_error

    @diag_gyroscope1_self_test_error.setter
    def diag_gyroscope1_self_test_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'diag_gyroscope1_self_test_error' field must be of type 'bool'"
        self._diag_gyroscope1_self_test_error = value

    @builtins.property
    def diag_gyroscope2_self_test_error(self):
        """Message field 'diag_gyroscope2_self_test_error'."""
        return self._diag_gyroscope2_self_test_error

    @diag_gyroscope2_self_test_error.setter
    def diag_gyroscope2_self_test_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'diag_gyroscope2_self_test_error' field must be of type 'bool'"
        self._diag_gyroscope2_self_test_error = value

    @builtins.property
    def diag_flash_memory_write_count_exceeded_error(self):
        """Message field 'diag_flash_memory_write_count_exceeded_error'."""
        return self._diag_flash_memory_write_count_exceeded_error

    @diag_flash_memory_write_count_exceeded_error.setter
    def diag_flash_memory_write_count_exceeded_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'diag_flash_memory_write_count_exceeded_error' field must be of type 'bool'"
        self._diag_flash_memory_write_count_exceeded_error = value

    @builtins.property
    def flash_counter(self):
        """Message field 'flash_counter'."""
        return self._flash_counter

    @flash_counter.setter
    def flash_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flash_counter' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'flash_counter' field must be an unsigned integer in [0, 4294967295]"
        self._flash_counter = value
