# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: action.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2
from primitive import header_pb2 as primitive_dot_header__pb2
from primitive import string_pb2 as primitive_dot_string__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='action.proto',
  package='choreo',
  syntax='proto3',
  serialized_pb=_b('\n\x0c\x61\x63tion.proto\x12\x06\x63horeo\x1a\x1fgoogle/protobuf/timestamp.proto\x1a\x16primitive/header.proto\x1a\x16primitive/string.proto\"O\n\x06GoalID\x12)\n\x05stamp\x18\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x1a\n\x02id\x18\x02 \x01(\x0b\x32\x0e.choreo.String\"\x9a\x02\n\nGoalStatus\x12\x1f\n\x07goal_id\x18\x01 \x01(\x0b\x32\x0e.choreo.GoalID\x12\x31\n\x06status\x18\x02 \x01(\x0e\x32!.choreo.GoalStatus.GoalStatusType\x12\x1c\n\x04text\x18\x03 \x01(\x0b\x32\x0e.choreo.String\"\x99\x01\n\x0eGoalStatusType\x12\x0b\n\x07PENDING\x10\x00\x12\n\n\x06\x41\x43TIVE\x10\x01\x12\r\n\tPREEMPTED\x10\x02\x12\r\n\tSUCCEEDED\x10\x03\x12\x0b\n\x07\x41\x42ORTED\x10\x04\x12\x0c\n\x08REJECTED\x10\x05\x12\x0e\n\nPREEMPTING\x10\x06\x12\r\n\tRECALLING\x10\x07\x12\x0c\n\x08RECALLED\x10\x08\x12\x08\n\x04LOST\x10\t\"Z\n\x0fGoalStatusArray\x12\x1e\n\x06header\x18\x01 \x01(\x0b\x32\x0e.choreo.Header\x12\'\n\x0bstatus_list\x18\x02 \x03(\x0b\x32\x12.choreo.GoalStatusB<Z:github.com/RobotStudio/choreo-msg/msg;rs.choreo.msg.actionb\x06proto3')
  ,
  dependencies=[google_dot_protobuf_dot_timestamp__pb2.DESCRIPTOR,primitive_dot_header__pb2.DESCRIPTOR,primitive_dot_string__pb2.DESCRIPTOR,])



_GOALSTATUS_GOALSTATUSTYPE = _descriptor.EnumDescriptor(
  name='GoalStatusType',
  full_name='choreo.GoalStatus.GoalStatusType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='PENDING', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ACTIVE', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PREEMPTED', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SUCCEEDED', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ABORTED', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='REJECTED', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PREEMPTING', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='RECALLING', index=7, number=7,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='RECALLED', index=8, number=8,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='LOST', index=9, number=9,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=316,
  serialized_end=469,
)
_sym_db.RegisterEnumDescriptor(_GOALSTATUS_GOALSTATUSTYPE)


_GOALID = _descriptor.Descriptor(
  name='GoalID',
  full_name='choreo.GoalID',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='stamp', full_name='choreo.GoalID.stamp', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='id', full_name='choreo.GoalID.id', index=1,
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
  serialized_start=105,
  serialized_end=184,
)


_GOALSTATUS = _descriptor.Descriptor(
  name='GoalStatus',
  full_name='choreo.GoalStatus',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='goal_id', full_name='choreo.GoalStatus.goal_id', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='status', full_name='choreo.GoalStatus.status', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='text', full_name='choreo.GoalStatus.text', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _GOALSTATUS_GOALSTATUSTYPE,
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=187,
  serialized_end=469,
)


_GOALSTATUSARRAY = _descriptor.Descriptor(
  name='GoalStatusArray',
  full_name='choreo.GoalStatusArray',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='header', full_name='choreo.GoalStatusArray.header', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='status_list', full_name='choreo.GoalStatusArray.status_list', index=1,
      number=2, type=11, cpp_type=10, label=3,
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
  serialized_start=471,
  serialized_end=561,
)

_GOALID.fields_by_name['stamp'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
_GOALID.fields_by_name['id'].message_type = primitive_dot_string__pb2._STRING
_GOALSTATUS.fields_by_name['goal_id'].message_type = _GOALID
_GOALSTATUS.fields_by_name['status'].enum_type = _GOALSTATUS_GOALSTATUSTYPE
_GOALSTATUS.fields_by_name['text'].message_type = primitive_dot_string__pb2._STRING
_GOALSTATUS_GOALSTATUSTYPE.containing_type = _GOALSTATUS
_GOALSTATUSARRAY.fields_by_name['header'].message_type = primitive_dot_header__pb2._HEADER
_GOALSTATUSARRAY.fields_by_name['status_list'].message_type = _GOALSTATUS
DESCRIPTOR.message_types_by_name['GoalID'] = _GOALID
DESCRIPTOR.message_types_by_name['GoalStatus'] = _GOALSTATUS
DESCRIPTOR.message_types_by_name['GoalStatusArray'] = _GOALSTATUSARRAY
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

GoalID = _reflection.GeneratedProtocolMessageType('GoalID', (_message.Message,), dict(
  DESCRIPTOR = _GOALID,
  __module__ = 'action_pb2'
  # @@protoc_insertion_point(class_scope:choreo.GoalID)
  ))
_sym_db.RegisterMessage(GoalID)

GoalStatus = _reflection.GeneratedProtocolMessageType('GoalStatus', (_message.Message,), dict(
  DESCRIPTOR = _GOALSTATUS,
  __module__ = 'action_pb2'
  # @@protoc_insertion_point(class_scope:choreo.GoalStatus)
  ))
_sym_db.RegisterMessage(GoalStatus)

GoalStatusArray = _reflection.GeneratedProtocolMessageType('GoalStatusArray', (_message.Message,), dict(
  DESCRIPTOR = _GOALSTATUSARRAY,
  __module__ = 'action_pb2'
  # @@protoc_insertion_point(class_scope:choreo.GoalStatusArray)
  ))
_sym_db.RegisterMessage(GoalStatusArray)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('Z:github.com/RobotStudio/choreo-msg/msg;rs.choreo.msg.action'))
# @@protoc_insertion_point(module_scope)
