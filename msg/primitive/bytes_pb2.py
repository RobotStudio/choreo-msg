# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: primitive/bytes.proto

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
  name='primitive/bytes.proto',
  package='choreo',
  syntax='proto3',
  serialized_pb=_b('\n\x15primitive/bytes.proto\x12\x06\x63horeo\"\x15\n\x05\x42ytes\x12\x0c\n\x04\x64\x61ta\x18\x01 \x01(\x0c\x42IZGgithub.com/RobotStudio/choreo-msg/msg/primitive;rs.choreo.msg.primitiveb\x06proto3')
)




_BYTES = _descriptor.Descriptor(
  name='Bytes',
  full_name='choreo.Bytes',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='data', full_name='choreo.Bytes.data', index=0,
      number=1, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
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
  serialized_start=33,
  serialized_end=54,
)

DESCRIPTOR.message_types_by_name['Bytes'] = _BYTES
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Bytes = _reflection.GeneratedProtocolMessageType('Bytes', (_message.Message,), dict(
  DESCRIPTOR = _BYTES,
  __module__ = 'primitive.bytes_pb2'
  # @@protoc_insertion_point(class_scope:choreo.Bytes)
  ))
_sym_db.RegisterMessage(Bytes)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('ZGgithub.com/RobotStudio/choreo-msg/msg/primitive;rs.choreo.msg.primitive'))
# @@protoc_insertion_point(module_scope)
