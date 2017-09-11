# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: sensor/battery.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from primitive import bool_pb2 as primitive_dot_bool__pb2
from primitive import float_pb2 as primitive_dot_float__pb2
from primitive import header_pb2 as primitive_dot_header__pb2
from primitive import int_pb2 as primitive_dot_int__pb2
from primitive import string_pb2 as primitive_dot_string__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='sensor/battery.proto',
  package='choreo',
  syntax='proto3',
  serialized_pb=_b('\n\x14sensor/battery.proto\x12\x06\x63horeo\x1a\x14primitive/bool.proto\x1a\x15primitive/float.proto\x1a\x16primitive/header.proto\x1a\x13primitive/int.proto\x1a\x16primitive/string.proto\"\xa4\t\n\x0c\x42\x61tteryState\x12+\n\x06status\x18\x01 \x01(\x0e\x32\x1b.choreo.BatteryState.Status\x12+\n\x06health\x18\x02 \x01(\x0e\x32\x1b.choreo.BatteryState.Health\x12\x33\n\ntechnology\x18\x03 \x01(\x0e\x32\x1f.choreo.BatteryState.Technology\x12\x1e\n\x06header\x18\x04 \x01(\x0b\x32\x0e.choreo.Header\x12 \n\x07voltage\x18\x05 \x01(\x0b\x32\x0f.choreo.Float32\x12 \n\x07\x63urrent\x18\x06 \x01(\x0b\x32\x0f.choreo.Float32\x12\x1f\n\x06\x63harge\x18\x07 \x01(\x0b\x32\x0f.choreo.Float32\x12!\n\x08\x63\x61pacity\x18\x08 \x01(\x0b\x32\x0f.choreo.Float32\x12(\n\x0f\x64\x65sign_capacity\x18\t \x01(\x0b\x32\x0f.choreo.Float32\x12#\n\npercentage\x18\n \x01(\x0b\x32\x0f.choreo.Float32\x12+\n\x13power_supply_status\x18\x0c \x01(\x0b\x32\x0e.choreo.UInt32\x12+\n\x13power_supply_health\x18\r \x01(\x0b\x32\x0e.choreo.UInt32\x12/\n\x17power_supply_technology\x18\x0e \x01(\x0b\x32\x0e.choreo.UInt32\x12\x1d\n\x07present\x18\x0f \x01(\x0b\x32\x0c.choreo.Bool\x12%\n\x0c\x63\x65ll_voltage\x18\x10 \x01(\x0b\x32\x0f.choreo.Float32\x12 \n\x08location\x18\x11 \x01(\x0b\x32\x0e.choreo.String\x12%\n\rserial_number\x18\x12 \x01(\x0b\x32\x0e.choreo.String\"s\n\x06Status\x12\x12\n\x0eSTATUS_UNKNOWN\x10\x00\x12\x13\n\x0fSTATUS_CHARGING\x10\x01\x12\x16\n\x12STATUS_DISCHARGING\x10\x02\x12\x17\n\x13STATUS_NOT_CHARGING\x10\x03\x12\x0f\n\x0bSTATUS_FULL\x10\x04\"\xd9\x01\n\x06Health\x12\x12\n\x0eHEALTH_UNKNOWN\x10\x00\x12\x0f\n\x0bHEALTH_GOOD\x10\x01\x12\x13\n\x0fHEALTH_OVERHEAT\x10\x02\x12\x0f\n\x0bHEALTH_DEAD\x10\x03\x12\x16\n\x12HEALTH_OVERVOLTAGE\x10\x04\x12\x19\n\x15HEALTH_UNSPEC_FAILURE\x10\x05\x12\x0f\n\x0bHEALTH_COLD\x10\x06\x12 \n\x1cHEALTH_WATCHDOG_TIMER_EXPIRE\x10\x07\x12\x1e\n\x1aHEALTH_SAFETY_TIMER_EXPIRE\x10\x08\"\xa2\x01\n\nTechnology\x12\x16\n\x12TECHNOLOGY_UNKNOWN\x10\x00\x12\x13\n\x0fTECHNOLOGY_NIMH\x10\x01\x12\x13\n\x0fTECHNOLOGY_LION\x10\x02\x12\x13\n\x0fTECHNOLOGY_LIPO\x10\x03\x12\x13\n\x0fTECHNOLOGY_LIFE\x10\x04\x12\x13\n\x0fTECHNOLOGY_NICD\x10\x05\x12\x13\n\x0fTECHNOLOGY_LIMN\x10\x06\x42\x43ZAgithub.com/RobotStudio/choreo-msg/msg/sensor;rs.choreo.msg.sensorb\x06proto3')
  ,
  dependencies=[primitive_dot_bool__pb2.DESCRIPTOR,primitive_dot_float__pb2.DESCRIPTOR,primitive_dot_header__pb2.DESCRIPTOR,primitive_dot_int__pb2.DESCRIPTOR,primitive_dot_string__pb2.DESCRIPTOR,])



_BATTERYSTATE_STATUS = _descriptor.EnumDescriptor(
  name='Status',
  full_name='choreo.BatteryState.Status',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='STATUS_UNKNOWN', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='STATUS_CHARGING', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='STATUS_DISCHARGING', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='STATUS_NOT_CHARGING', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='STATUS_FULL', index=4, number=4,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=835,
  serialized_end=950,
)
_sym_db.RegisterEnumDescriptor(_BATTERYSTATE_STATUS)

_BATTERYSTATE_HEALTH = _descriptor.EnumDescriptor(
  name='Health',
  full_name='choreo.BatteryState.Health',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='HEALTH_UNKNOWN', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='HEALTH_GOOD', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='HEALTH_OVERHEAT', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='HEALTH_DEAD', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='HEALTH_OVERVOLTAGE', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='HEALTH_UNSPEC_FAILURE', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='HEALTH_COLD', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='HEALTH_WATCHDOG_TIMER_EXPIRE', index=7, number=7,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='HEALTH_SAFETY_TIMER_EXPIRE', index=8, number=8,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=953,
  serialized_end=1170,
)
_sym_db.RegisterEnumDescriptor(_BATTERYSTATE_HEALTH)

_BATTERYSTATE_TECHNOLOGY = _descriptor.EnumDescriptor(
  name='Technology',
  full_name='choreo.BatteryState.Technology',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='TECHNOLOGY_UNKNOWN', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TECHNOLOGY_NIMH', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TECHNOLOGY_LION', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TECHNOLOGY_LIPO', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TECHNOLOGY_LIFE', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TECHNOLOGY_NICD', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TECHNOLOGY_LIMN', index=6, number=6,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1173,
  serialized_end=1335,
)
_sym_db.RegisterEnumDescriptor(_BATTERYSTATE_TECHNOLOGY)


_BATTERYSTATE = _descriptor.Descriptor(
  name='BatteryState',
  full_name='choreo.BatteryState',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='status', full_name='choreo.BatteryState.status', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='health', full_name='choreo.BatteryState.health', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='technology', full_name='choreo.BatteryState.technology', index=2,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='header', full_name='choreo.BatteryState.header', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='voltage', full_name='choreo.BatteryState.voltage', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='current', full_name='choreo.BatteryState.current', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='charge', full_name='choreo.BatteryState.charge', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='capacity', full_name='choreo.BatteryState.capacity', index=7,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='design_capacity', full_name='choreo.BatteryState.design_capacity', index=8,
      number=9, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='percentage', full_name='choreo.BatteryState.percentage', index=9,
      number=10, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='power_supply_status', full_name='choreo.BatteryState.power_supply_status', index=10,
      number=12, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='power_supply_health', full_name='choreo.BatteryState.power_supply_health', index=11,
      number=13, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='power_supply_technology', full_name='choreo.BatteryState.power_supply_technology', index=12,
      number=14, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='present', full_name='choreo.BatteryState.present', index=13,
      number=15, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='cell_voltage', full_name='choreo.BatteryState.cell_voltage', index=14,
      number=16, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='location', full_name='choreo.BatteryState.location', index=15,
      number=17, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='serial_number', full_name='choreo.BatteryState.serial_number', index=16,
      number=18, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _BATTERYSTATE_STATUS,
    _BATTERYSTATE_HEALTH,
    _BATTERYSTATE_TECHNOLOGY,
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=147,
  serialized_end=1335,
)

_BATTERYSTATE.fields_by_name['status'].enum_type = _BATTERYSTATE_STATUS
_BATTERYSTATE.fields_by_name['health'].enum_type = _BATTERYSTATE_HEALTH
_BATTERYSTATE.fields_by_name['technology'].enum_type = _BATTERYSTATE_TECHNOLOGY
_BATTERYSTATE.fields_by_name['header'].message_type = primitive_dot_header__pb2._HEADER
_BATTERYSTATE.fields_by_name['voltage'].message_type = primitive_dot_float__pb2._FLOAT32
_BATTERYSTATE.fields_by_name['current'].message_type = primitive_dot_float__pb2._FLOAT32
_BATTERYSTATE.fields_by_name['charge'].message_type = primitive_dot_float__pb2._FLOAT32
_BATTERYSTATE.fields_by_name['capacity'].message_type = primitive_dot_float__pb2._FLOAT32
_BATTERYSTATE.fields_by_name['design_capacity'].message_type = primitive_dot_float__pb2._FLOAT32
_BATTERYSTATE.fields_by_name['percentage'].message_type = primitive_dot_float__pb2._FLOAT32
_BATTERYSTATE.fields_by_name['power_supply_status'].message_type = primitive_dot_int__pb2._UINT32
_BATTERYSTATE.fields_by_name['power_supply_health'].message_type = primitive_dot_int__pb2._UINT32
_BATTERYSTATE.fields_by_name['power_supply_technology'].message_type = primitive_dot_int__pb2._UINT32
_BATTERYSTATE.fields_by_name['present'].message_type = primitive_dot_bool__pb2._BOOL
_BATTERYSTATE.fields_by_name['cell_voltage'].message_type = primitive_dot_float__pb2._FLOAT32
_BATTERYSTATE.fields_by_name['location'].message_type = primitive_dot_string__pb2._STRING
_BATTERYSTATE.fields_by_name['serial_number'].message_type = primitive_dot_string__pb2._STRING
_BATTERYSTATE_STATUS.containing_type = _BATTERYSTATE
_BATTERYSTATE_HEALTH.containing_type = _BATTERYSTATE
_BATTERYSTATE_TECHNOLOGY.containing_type = _BATTERYSTATE
DESCRIPTOR.message_types_by_name['BatteryState'] = _BATTERYSTATE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

BatteryState = _reflection.GeneratedProtocolMessageType('BatteryState', (_message.Message,), dict(
  DESCRIPTOR = _BATTERYSTATE,
  __module__ = 'sensor.battery_pb2'
  # @@protoc_insertion_point(class_scope:choreo.BatteryState)
  ))
_sym_db.RegisterMessage(BatteryState)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('ZAgithub.com/RobotStudio/choreo-msg/msg/sensor;rs.choreo.msg.sensor'))
# @@protoc_insertion_point(module_scope)
