# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: primitive/bool.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='primitive/bool.proto',
  package='choreo',
  syntax='proto3',
  serialized_pb=_b('\n\x14primitive/bool.proto\x12\x06\x63horeo\"\'\n\tBoolArray\x12\x1a\n\x04\x64\x61ta\x18\x01 \x03(\x0b\x32\x0c.choreo.Bool\"\x14\n\x04\x42ool\x12\x0c\n\x04\x64\x61ta\x18\x01 \x01(\x08\x42\x31Z/github.com/RobotStudio/choreo-msg/msg/primitiveb\x06proto3')
)




_BOOLARRAY = _descriptor.Descriptor(
  name='BoolArray',
  full_name='choreo.BoolArray',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='data', full_name='choreo.BoolArray.data', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
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
  serialized_start=32,
  serialized_end=71,
)


_BOOL = _descriptor.Descriptor(
  name='Bool',
  full_name='choreo.Bool',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='data', full_name='choreo.Bool.data', index=0,
      number=1, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
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
  serialized_start=73,
  serialized_end=93,
)

_BOOLARRAY.fields_by_name['data'].message_type = _BOOL
DESCRIPTOR.message_types_by_name['BoolArray'] = _BOOLARRAY
DESCRIPTOR.message_types_by_name['Bool'] = _BOOL
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

BoolArray = _reflection.GeneratedProtocolMessageType('BoolArray', (_message.Message,), dict(
  DESCRIPTOR = _BOOLARRAY,
  __module__ = 'primitive.bool_pb2'
  # @@protoc_insertion_point(class_scope:choreo.BoolArray)
  ))
_sym_db.RegisterMessage(BoolArray)

Bool = _reflection.GeneratedProtocolMessageType('Bool', (_message.Message,), dict(
  DESCRIPTOR = _BOOL,
  __module__ = 'primitive.bool_pb2'
  # @@protoc_insertion_point(class_scope:choreo.Bool)
  ))
_sym_db.RegisterMessage(Bool)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('Z/github.com/RobotStudio/choreo-msg/msg/primitive'))
# @@protoc_insertion_point(module_scope)