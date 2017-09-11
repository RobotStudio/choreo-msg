# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: geometric/pose.proto

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
from geometric import point_pb2 as geometric_dot_point__pb2
from geometric import quaternion_pb2 as geometric_dot_quaternion__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='geometric/pose.proto',
  package='choreo',
  syntax='proto3',
  serialized_pb=_b('\n\x14geometric/pose.proto\x12\x06\x63horeo\x1a\x16primitive/header.proto\x1a\x15primitive/float.proto\x1a\x15geometric/point.proto\x1a\x1ageometric/quaternion.proto\"I\n\x0bPoseStamped\x12\x1e\n\x06header\x18\x01 \x01(\x0b\x32\x0e.choreo.Header\x12\x1a\n\x04pose\x18\x02 \x01(\x0b\x32\x0c.choreo.Pose\"e\n\x19PoseWithCovarianceStamped\x12\x1e\n\x06header\x18\x01 \x01(\x0b\x32\x0e.choreo.Header\x12(\n\x04pose\x18\x02 \x01(\x0b\x32\x1a.choreo.PoseWithCovariance\"M\n\rPose2DStamped\x12\x1e\n\x06header\x18\x01 \x01(\x0b\x32\x0e.choreo.Header\x12\x1c\n\x04pose\x18\x02 \x01(\x0b\x32\x0e.choreo.Pose2D\"P\n\x04Pose\x12\x1f\n\x08position\x18\x01 \x01(\x0b\x32\r.choreo.Point\x12\'\n\x0borientation\x18\x02 \x01(\x0b\x32\x12.choreo.Quaternion\"H\n\tPoseArray\x12\x1e\n\x06header\x18\x01 \x01(\x0b\x32\x0e.choreo.Header\x12\x1b\n\x05poses\x18\x02 \x03(\x0b\x32\x0c.choreo.Pose\"`\n\x06Pose2D\x12\x1a\n\x01x\x18\x01 \x01(\x0b\x32\x0f.choreo.Float64\x12\x1a\n\x01y\x18\x02 \x01(\x0b\x32\x0f.choreo.Float64\x12\x1e\n\x05theta\x18\x03 \x01(\x0b\x32\x0f.choreo.Float64\"U\n\x12PoseWithCovariance\x12\x1a\n\x04pose\x18\x01 \x01(\x0b\x32\x0c.choreo.Pose\x12#\n\ncovariance\x18\x02 \x03(\x0b\x32\x0f.choreo.Float64BIZGgithub.com/RobotStudio/choreo-msg/msg/geometric;rs.choreo.msg.geometricb\x06proto3')
  ,
  dependencies=[primitive_dot_header__pb2.DESCRIPTOR,primitive_dot_float__pb2.DESCRIPTOR,geometric_dot_point__pb2.DESCRIPTOR,geometric_dot_quaternion__pb2.DESCRIPTOR,])




_POSESTAMPED = _descriptor.Descriptor(
  name='PoseStamped',
  full_name='choreo.PoseStamped',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='header', full_name='choreo.PoseStamped.header', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pose', full_name='choreo.PoseStamped.pose', index=1,
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
  serialized_start=130,
  serialized_end=203,
)


_POSEWITHCOVARIANCESTAMPED = _descriptor.Descriptor(
  name='PoseWithCovarianceStamped',
  full_name='choreo.PoseWithCovarianceStamped',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='header', full_name='choreo.PoseWithCovarianceStamped.header', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pose', full_name='choreo.PoseWithCovarianceStamped.pose', index=1,
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
  serialized_start=205,
  serialized_end=306,
)


_POSE2DSTAMPED = _descriptor.Descriptor(
  name='Pose2DStamped',
  full_name='choreo.Pose2DStamped',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='header', full_name='choreo.Pose2DStamped.header', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pose', full_name='choreo.Pose2DStamped.pose', index=1,
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
  serialized_start=308,
  serialized_end=385,
)


_POSE = _descriptor.Descriptor(
  name='Pose',
  full_name='choreo.Pose',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='position', full_name='choreo.Pose.position', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='orientation', full_name='choreo.Pose.orientation', index=1,
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
  serialized_start=387,
  serialized_end=467,
)


_POSEARRAY = _descriptor.Descriptor(
  name='PoseArray',
  full_name='choreo.PoseArray',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='header', full_name='choreo.PoseArray.header', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='poses', full_name='choreo.PoseArray.poses', index=1,
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
  serialized_start=469,
  serialized_end=541,
)


_POSE2D = _descriptor.Descriptor(
  name='Pose2D',
  full_name='choreo.Pose2D',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='x', full_name='choreo.Pose2D.x', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='y', full_name='choreo.Pose2D.y', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='theta', full_name='choreo.Pose2D.theta', index=2,
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
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=543,
  serialized_end=639,
)


_POSEWITHCOVARIANCE = _descriptor.Descriptor(
  name='PoseWithCovariance',
  full_name='choreo.PoseWithCovariance',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='pose', full_name='choreo.PoseWithCovariance.pose', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='covariance', full_name='choreo.PoseWithCovariance.covariance', index=1,
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
  serialized_start=641,
  serialized_end=726,
)

_POSESTAMPED.fields_by_name['header'].message_type = primitive_dot_header__pb2._HEADER
_POSESTAMPED.fields_by_name['pose'].message_type = _POSE
_POSEWITHCOVARIANCESTAMPED.fields_by_name['header'].message_type = primitive_dot_header__pb2._HEADER
_POSEWITHCOVARIANCESTAMPED.fields_by_name['pose'].message_type = _POSEWITHCOVARIANCE
_POSE2DSTAMPED.fields_by_name['header'].message_type = primitive_dot_header__pb2._HEADER
_POSE2DSTAMPED.fields_by_name['pose'].message_type = _POSE2D
_POSE.fields_by_name['position'].message_type = geometric_dot_point__pb2._POINT
_POSE.fields_by_name['orientation'].message_type = geometric_dot_quaternion__pb2._QUATERNION
_POSEARRAY.fields_by_name['header'].message_type = primitive_dot_header__pb2._HEADER
_POSEARRAY.fields_by_name['poses'].message_type = _POSE
_POSE2D.fields_by_name['x'].message_type = primitive_dot_float__pb2._FLOAT64
_POSE2D.fields_by_name['y'].message_type = primitive_dot_float__pb2._FLOAT64
_POSE2D.fields_by_name['theta'].message_type = primitive_dot_float__pb2._FLOAT64
_POSEWITHCOVARIANCE.fields_by_name['pose'].message_type = _POSE
_POSEWITHCOVARIANCE.fields_by_name['covariance'].message_type = primitive_dot_float__pb2._FLOAT64
DESCRIPTOR.message_types_by_name['PoseStamped'] = _POSESTAMPED
DESCRIPTOR.message_types_by_name['PoseWithCovarianceStamped'] = _POSEWITHCOVARIANCESTAMPED
DESCRIPTOR.message_types_by_name['Pose2DStamped'] = _POSE2DSTAMPED
DESCRIPTOR.message_types_by_name['Pose'] = _POSE
DESCRIPTOR.message_types_by_name['PoseArray'] = _POSEARRAY
DESCRIPTOR.message_types_by_name['Pose2D'] = _POSE2D
DESCRIPTOR.message_types_by_name['PoseWithCovariance'] = _POSEWITHCOVARIANCE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

PoseStamped = _reflection.GeneratedProtocolMessageType('PoseStamped', (_message.Message,), dict(
  DESCRIPTOR = _POSESTAMPED,
  __module__ = 'geometric.pose_pb2'
  # @@protoc_insertion_point(class_scope:choreo.PoseStamped)
  ))
_sym_db.RegisterMessage(PoseStamped)

PoseWithCovarianceStamped = _reflection.GeneratedProtocolMessageType('PoseWithCovarianceStamped', (_message.Message,), dict(
  DESCRIPTOR = _POSEWITHCOVARIANCESTAMPED,
  __module__ = 'geometric.pose_pb2'
  # @@protoc_insertion_point(class_scope:choreo.PoseWithCovarianceStamped)
  ))
_sym_db.RegisterMessage(PoseWithCovarianceStamped)

Pose2DStamped = _reflection.GeneratedProtocolMessageType('Pose2DStamped', (_message.Message,), dict(
  DESCRIPTOR = _POSE2DSTAMPED,
  __module__ = 'geometric.pose_pb2'
  # @@protoc_insertion_point(class_scope:choreo.Pose2DStamped)
  ))
_sym_db.RegisterMessage(Pose2DStamped)

Pose = _reflection.GeneratedProtocolMessageType('Pose', (_message.Message,), dict(
  DESCRIPTOR = _POSE,
  __module__ = 'geometric.pose_pb2'
  # @@protoc_insertion_point(class_scope:choreo.Pose)
  ))
_sym_db.RegisterMessage(Pose)

PoseArray = _reflection.GeneratedProtocolMessageType('PoseArray', (_message.Message,), dict(
  DESCRIPTOR = _POSEARRAY,
  __module__ = 'geometric.pose_pb2'
  # @@protoc_insertion_point(class_scope:choreo.PoseArray)
  ))
_sym_db.RegisterMessage(PoseArray)

Pose2D = _reflection.GeneratedProtocolMessageType('Pose2D', (_message.Message,), dict(
  DESCRIPTOR = _POSE2D,
  __module__ = 'geometric.pose_pb2'
  # @@protoc_insertion_point(class_scope:choreo.Pose2D)
  ))
_sym_db.RegisterMessage(Pose2D)

PoseWithCovariance = _reflection.GeneratedProtocolMessageType('PoseWithCovariance', (_message.Message,), dict(
  DESCRIPTOR = _POSEWITHCOVARIANCE,
  __module__ = 'geometric.pose_pb2'
  # @@protoc_insertion_point(class_scope:choreo.PoseWithCovariance)
  ))
_sym_db.RegisterMessage(PoseWithCovariance)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('ZGgithub.com/RobotStudio/choreo-msg/msg/geometric;rs.choreo.msg.geometric'))
# @@protoc_insertion_point(module_scope)
