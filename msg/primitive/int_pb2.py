# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: primitive/int.proto

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
  name='primitive/int.proto',
  package='choreo',
  syntax='proto3',
  serialized_pb=_b('\n\x13primitive/int.proto\x12\x06\x63horeo\")\n\nInt32Array\x12\x1b\n\x04\x64\x61ta\x18\x01 \x03(\x0b\x32\r.choreo.Int32\"\x15\n\x05Int32\x12\x0c\n\x04\x64\x61ta\x18\x01 \x01(\x05\")\n\nInt64Array\x12\x1b\n\x04\x64\x61ta\x18\x01 \x03(\x0b\x32\r.choreo.Int64\"\x15\n\x05Int64\x12\x0c\n\x04\x64\x61ta\x18\x01 \x01(\x03\"+\n\x0bSInt32Array\x12\x1c\n\x04\x64\x61ta\x18\x01 \x03(\x0b\x32\x0e.choreo.SInt32\"\x16\n\x06SInt32\x12\x0c\n\x04\x64\x61ta\x18\x01 \x01(\x05\"+\n\x0bSInt64Array\x12\x1c\n\x04\x64\x61ta\x18\x01 \x03(\x0b\x32\x0e.choreo.SInt64\"\x16\n\x06SInt64\x12\x0c\n\x04\x64\x61ta\x18\x01 \x01(\x03\"+\n\x0bUInt32Array\x12\x1c\n\x04\x64\x61ta\x18\x01 \x03(\x0b\x32\x0e.choreo.UInt32\"\x16\n\x06UInt32\x12\x0c\n\x04\x64\x61ta\x18\x01 \x01(\r\"+\n\x0bUInt64Array\x12\x1c\n\x04\x64\x61ta\x18\x01 \x03(\x0b\x32\x0e.choreo.UInt64\"\x16\n\x06UInt64\x12\x0c\n\x04\x64\x61ta\x18\x01 \x01(\x04\x42IZGgithub.com/RobotStudio/choreo-msg/msg/primitive;rs.choreo.msg.primitiveb\x06proto3')
)




_INT32ARRAY = _descriptor.Descriptor(
  name='Int32Array',
  full_name='choreo.Int32Array',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='data', full_name='choreo.Int32Array.data', index=0,
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
  serialized_start=31,
  serialized_end=72,
)


_INT32 = _descriptor.Descriptor(
  name='Int32',
  full_name='choreo.Int32',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='data', full_name='choreo.Int32.data', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=74,
  serialized_end=95,
)


_INT64ARRAY = _descriptor.Descriptor(
  name='Int64Array',
  full_name='choreo.Int64Array',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='data', full_name='choreo.Int64Array.data', index=0,
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
  serialized_start=97,
  serialized_end=138,
)


_INT64 = _descriptor.Descriptor(
  name='Int64',
  full_name='choreo.Int64',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='data', full_name='choreo.Int64.data', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=140,
  serialized_end=161,
)


_SINT32ARRAY = _descriptor.Descriptor(
  name='SInt32Array',
  full_name='choreo.SInt32Array',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='data', full_name='choreo.SInt32Array.data', index=0,
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
  serialized_start=163,
  serialized_end=206,
)


_SINT32 = _descriptor.Descriptor(
  name='SInt32',
  full_name='choreo.SInt32',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='data', full_name='choreo.SInt32.data', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=208,
  serialized_end=230,
)


_SINT64ARRAY = _descriptor.Descriptor(
  name='SInt64Array',
  full_name='choreo.SInt64Array',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='data', full_name='choreo.SInt64Array.data', index=0,
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
  serialized_start=232,
  serialized_end=275,
)


_SINT64 = _descriptor.Descriptor(
  name='SInt64',
  full_name='choreo.SInt64',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='data', full_name='choreo.SInt64.data', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=277,
  serialized_end=299,
)


_UINT32ARRAY = _descriptor.Descriptor(
  name='UInt32Array',
  full_name='choreo.UInt32Array',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='data', full_name='choreo.UInt32Array.data', index=0,
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
  serialized_start=301,
  serialized_end=344,
)


_UINT32 = _descriptor.Descriptor(
  name='UInt32',
  full_name='choreo.UInt32',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='data', full_name='choreo.UInt32.data', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=346,
  serialized_end=368,
)


_UINT64ARRAY = _descriptor.Descriptor(
  name='UInt64Array',
  full_name='choreo.UInt64Array',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='data', full_name='choreo.UInt64Array.data', index=0,
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
  serialized_start=370,
  serialized_end=413,
)


_UINT64 = _descriptor.Descriptor(
  name='UInt64',
  full_name='choreo.UInt64',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='data', full_name='choreo.UInt64.data', index=0,
      number=1, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=415,
  serialized_end=437,
)

_INT32ARRAY.fields_by_name['data'].message_type = _INT32
_INT64ARRAY.fields_by_name['data'].message_type = _INT64
_SINT32ARRAY.fields_by_name['data'].message_type = _SINT32
_SINT64ARRAY.fields_by_name['data'].message_type = _SINT64
_UINT32ARRAY.fields_by_name['data'].message_type = _UINT32
_UINT64ARRAY.fields_by_name['data'].message_type = _UINT64
DESCRIPTOR.message_types_by_name['Int32Array'] = _INT32ARRAY
DESCRIPTOR.message_types_by_name['Int32'] = _INT32
DESCRIPTOR.message_types_by_name['Int64Array'] = _INT64ARRAY
DESCRIPTOR.message_types_by_name['Int64'] = _INT64
DESCRIPTOR.message_types_by_name['SInt32Array'] = _SINT32ARRAY
DESCRIPTOR.message_types_by_name['SInt32'] = _SINT32
DESCRIPTOR.message_types_by_name['SInt64Array'] = _SINT64ARRAY
DESCRIPTOR.message_types_by_name['SInt64'] = _SINT64
DESCRIPTOR.message_types_by_name['UInt32Array'] = _UINT32ARRAY
DESCRIPTOR.message_types_by_name['UInt32'] = _UINT32
DESCRIPTOR.message_types_by_name['UInt64Array'] = _UINT64ARRAY
DESCRIPTOR.message_types_by_name['UInt64'] = _UINT64
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Int32Array = _reflection.GeneratedProtocolMessageType('Int32Array', (_message.Message,), dict(
  DESCRIPTOR = _INT32ARRAY,
  __module__ = 'primitive.int_pb2'
  # @@protoc_insertion_point(class_scope:choreo.Int32Array)
  ))
_sym_db.RegisterMessage(Int32Array)

Int32 = _reflection.GeneratedProtocolMessageType('Int32', (_message.Message,), dict(
  DESCRIPTOR = _INT32,
  __module__ = 'primitive.int_pb2'
  # @@protoc_insertion_point(class_scope:choreo.Int32)
  ))
_sym_db.RegisterMessage(Int32)

Int64Array = _reflection.GeneratedProtocolMessageType('Int64Array', (_message.Message,), dict(
  DESCRIPTOR = _INT64ARRAY,
  __module__ = 'primitive.int_pb2'
  # @@protoc_insertion_point(class_scope:choreo.Int64Array)
  ))
_sym_db.RegisterMessage(Int64Array)

Int64 = _reflection.GeneratedProtocolMessageType('Int64', (_message.Message,), dict(
  DESCRIPTOR = _INT64,
  __module__ = 'primitive.int_pb2'
  # @@protoc_insertion_point(class_scope:choreo.Int64)
  ))
_sym_db.RegisterMessage(Int64)

SInt32Array = _reflection.GeneratedProtocolMessageType('SInt32Array', (_message.Message,), dict(
  DESCRIPTOR = _SINT32ARRAY,
  __module__ = 'primitive.int_pb2'
  # @@protoc_insertion_point(class_scope:choreo.SInt32Array)
  ))
_sym_db.RegisterMessage(SInt32Array)

SInt32 = _reflection.GeneratedProtocolMessageType('SInt32', (_message.Message,), dict(
  DESCRIPTOR = _SINT32,
  __module__ = 'primitive.int_pb2'
  # @@protoc_insertion_point(class_scope:choreo.SInt32)
  ))
_sym_db.RegisterMessage(SInt32)

SInt64Array = _reflection.GeneratedProtocolMessageType('SInt64Array', (_message.Message,), dict(
  DESCRIPTOR = _SINT64ARRAY,
  __module__ = 'primitive.int_pb2'
  # @@protoc_insertion_point(class_scope:choreo.SInt64Array)
  ))
_sym_db.RegisterMessage(SInt64Array)

SInt64 = _reflection.GeneratedProtocolMessageType('SInt64', (_message.Message,), dict(
  DESCRIPTOR = _SINT64,
  __module__ = 'primitive.int_pb2'
  # @@protoc_insertion_point(class_scope:choreo.SInt64)
  ))
_sym_db.RegisterMessage(SInt64)

UInt32Array = _reflection.GeneratedProtocolMessageType('UInt32Array', (_message.Message,), dict(
  DESCRIPTOR = _UINT32ARRAY,
  __module__ = 'primitive.int_pb2'
  # @@protoc_insertion_point(class_scope:choreo.UInt32Array)
  ))
_sym_db.RegisterMessage(UInt32Array)

UInt32 = _reflection.GeneratedProtocolMessageType('UInt32', (_message.Message,), dict(
  DESCRIPTOR = _UINT32,
  __module__ = 'primitive.int_pb2'
  # @@protoc_insertion_point(class_scope:choreo.UInt32)
  ))
_sym_db.RegisterMessage(UInt32)

UInt64Array = _reflection.GeneratedProtocolMessageType('UInt64Array', (_message.Message,), dict(
  DESCRIPTOR = _UINT64ARRAY,
  __module__ = 'primitive.int_pb2'
  # @@protoc_insertion_point(class_scope:choreo.UInt64Array)
  ))
_sym_db.RegisterMessage(UInt64Array)

UInt64 = _reflection.GeneratedProtocolMessageType('UInt64', (_message.Message,), dict(
  DESCRIPTOR = _UINT64,
  __module__ = 'primitive.int_pb2'
  # @@protoc_insertion_point(class_scope:choreo.UInt64)
  ))
_sym_db.RegisterMessage(UInt64)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('ZGgithub.com/RobotStudio/choreo-msg/msg/primitive;rs.choreo.msg.primitive'))
# @@protoc_insertion_point(module_scope)
