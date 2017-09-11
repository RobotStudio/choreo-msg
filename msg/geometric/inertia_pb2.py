# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: geometric/inertia.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from primitive import header_pb2 as primitive_dot_header__pb2
from primitive import float_pb2 as primitive_dot_float__pb2
from geometric import vector_pb2 as geometric_dot_vector__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='geometric/inertia.proto',
  package='choreo',
  syntax='proto3',
  serialized_pb=_b('\n\x17geometric/inertia.proto\x12\x06\x63horeo\x1a\x16primitive/header.proto\x1a\x15primitive/float.proto\x1a\x16geometric/vector.proto\"R\n\x0eInertiaStamped\x12\x1e\n\x06header\x18\x01 \x01(\x0b\x32\x0e.choreo.Header\x12 \n\x07inertia\x18\x02 \x01(\x0b\x32\x0f.choreo.Inertia\"\xf7\x01\n\x07Inertia\x12\x1a\n\x01m\x18\x01 \x01(\x0b\x32\x0f.choreo.Float64\x12\x1c\n\x03\x63om\x18\x02 \x01(\x0b\x32\x0f.choreo.Vector3\x12\x1c\n\x03ixx\x18\x03 \x01(\x0b\x32\x0f.choreo.Float64\x12\x1c\n\x03ixy\x18\x04 \x01(\x0b\x32\x0f.choreo.Float64\x12\x1c\n\x03ixz\x18\x05 \x01(\x0b\x32\x0f.choreo.Float64\x12\x1c\n\x03iyy\x18\x07 \x01(\x0b\x32\x0f.choreo.Float64\x12\x1c\n\x03iyz\x18\x08 \x01(\x0b\x32\x0f.choreo.Float64\x12\x1c\n\x03izz\x18\x06 \x01(\x0b\x32\x0f.choreo.Float64BIZGgithub.com/RobotStudio/choreo-msg/msg/geometric;rs.choreo.msg.geometricb\x06proto3')
  ,
  dependencies=[primitive_dot_header__pb2.DESCRIPTOR,primitive_dot_float__pb2.DESCRIPTOR,geometric_dot_vector__pb2.DESCRIPTOR,])




_INERTIASTAMPED = _descriptor.Descriptor(
  name='InertiaStamped',
  full_name='choreo.InertiaStamped',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='header', full_name='choreo.InertiaStamped.header', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='inertia', full_name='choreo.InertiaStamped.inertia', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=106,
  serialized_end=188,
)


_INERTIA = _descriptor.Descriptor(
  name='Inertia',
  full_name='choreo.Inertia',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='m', full_name='choreo.Inertia.m', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='com', full_name='choreo.Inertia.com', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ixx', full_name='choreo.Inertia.ixx', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ixy', full_name='choreo.Inertia.ixy', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ixz', full_name='choreo.Inertia.ixz', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='iyy', full_name='choreo.Inertia.iyy', index=5,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='iyz', full_name='choreo.Inertia.iyz', index=6,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='izz', full_name='choreo.Inertia.izz', index=7,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=191,
  serialized_end=438,
)

_INERTIASTAMPED.fields_by_name['header'].message_type = primitive_dot_header__pb2._HEADER
_INERTIASTAMPED.fields_by_name['inertia'].message_type = _INERTIA
_INERTIA.fields_by_name['m'].message_type = primitive_dot_float__pb2._FLOAT64
_INERTIA.fields_by_name['com'].message_type = geometric_dot_vector__pb2._VECTOR3
_INERTIA.fields_by_name['ixx'].message_type = primitive_dot_float__pb2._FLOAT64
_INERTIA.fields_by_name['ixy'].message_type = primitive_dot_float__pb2._FLOAT64
_INERTIA.fields_by_name['ixz'].message_type = primitive_dot_float__pb2._FLOAT64
_INERTIA.fields_by_name['iyy'].message_type = primitive_dot_float__pb2._FLOAT64
_INERTIA.fields_by_name['iyz'].message_type = primitive_dot_float__pb2._FLOAT64
_INERTIA.fields_by_name['izz'].message_type = primitive_dot_float__pb2._FLOAT64
DESCRIPTOR.message_types_by_name['InertiaStamped'] = _INERTIASTAMPED
DESCRIPTOR.message_types_by_name['Inertia'] = _INERTIA
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

InertiaStamped = _reflection.GeneratedProtocolMessageType('InertiaStamped', (_message.Message,), dict(
  DESCRIPTOR = _INERTIASTAMPED,
  __module__ = 'geometric.inertia_pb2'
  # @@protoc_insertion_point(class_scope:choreo.InertiaStamped)
  ))
_sym_db.RegisterMessage(InertiaStamped)

Inertia = _reflection.GeneratedProtocolMessageType('Inertia', (_message.Message,), dict(
  DESCRIPTOR = _INERTIA,
  __module__ = 'geometric.inertia_pb2'
  # @@protoc_insertion_point(class_scope:choreo.Inertia)
  ))
_sym_db.RegisterMessage(Inertia)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('ZGgithub.com/RobotStudio/choreo-msg/msg/geometric;rs.choreo.msg.geometric'))
# @@protoc_insertion_point(module_scope)
