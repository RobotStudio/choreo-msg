# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: geometric/transform.proto

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
from geometric import vector_pb2 as geometric_dot_vector__pb2
from geometric import quaternion_pb2 as geometric_dot_quaternion__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='geometric/transform.proto',
  package='choreo',
  syntax='proto3',
  serialized_pb=_b('\n\x19geometric/transform.proto\x12\x06\x63horeo\x1a\x16primitive/header.proto\x1a\x16geometric/vector.proto\x1a\x1ageometric/quaternion.proto\"X\n\x10TransformStamped\x12\x1e\n\x06header\x18\x01 \x01(\x0b\x32\x0e.choreo.Header\x12$\n\ttransform\x18\x02 \x01(\x0b\x32\x11.choreo.Transform\"W\n\tTransform\x12$\n\x0btranslation\x18\x01 \x01(\x0b\x32\x0f.choreo.Vector3\x12$\n\x08rotation\x18\x02 \x01(\x0b\x32\x12.choreo.Quaternionb\x06proto3')
  ,
  dependencies=[primitive_dot_header__pb2.DESCRIPTOR,geometric_dot_vector__pb2.DESCRIPTOR,geometric_dot_quaternion__pb2.DESCRIPTOR,])




_TRANSFORMSTAMPED = _descriptor.Descriptor(
  name='TransformStamped',
  full_name='choreo.TransformStamped',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='header', full_name='choreo.TransformStamped.header', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='transform', full_name='choreo.TransformStamped.transform', index=1,
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
  serialized_start=113,
  serialized_end=201,
)


_TRANSFORM = _descriptor.Descriptor(
  name='Transform',
  full_name='choreo.Transform',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='translation', full_name='choreo.Transform.translation', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='rotation', full_name='choreo.Transform.rotation', index=1,
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
  serialized_start=203,
  serialized_end=290,
)

_TRANSFORMSTAMPED.fields_by_name['header'].message_type = primitive_dot_header__pb2._HEADER
_TRANSFORMSTAMPED.fields_by_name['transform'].message_type = _TRANSFORM
_TRANSFORM.fields_by_name['translation'].message_type = geometric_dot_vector__pb2._VECTOR3
_TRANSFORM.fields_by_name['rotation'].message_type = geometric_dot_quaternion__pb2._QUATERNION
DESCRIPTOR.message_types_by_name['TransformStamped'] = _TRANSFORMSTAMPED
DESCRIPTOR.message_types_by_name['Transform'] = _TRANSFORM
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

TransformStamped = _reflection.GeneratedProtocolMessageType('TransformStamped', (_message.Message,), dict(
  DESCRIPTOR = _TRANSFORMSTAMPED,
  __module__ = 'geometric.transform_pb2'
  # @@protoc_insertion_point(class_scope:choreo.TransformStamped)
  ))
_sym_db.RegisterMessage(TransformStamped)

Transform = _reflection.GeneratedProtocolMessageType('Transform', (_message.Message,), dict(
  DESCRIPTOR = _TRANSFORM,
  __module__ = 'geometric.transform_pb2'
  # @@protoc_insertion_point(class_scope:choreo.Transform)
  ))
_sym_db.RegisterMessage(Transform)


# @@protoc_insertion_point(module_scope)
