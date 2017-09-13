// Code generated by protoc-gen-go. DO NOT EDIT.
// source: geometric/pose.proto

/*
Package geometric is a generated protocol buffer package.

It is generated from these files:
	geometric/pose.proto

It has these top-level messages:
	PoseStamped
	PoseWithCovarianceStamped
	Pose2DStamped
	Pose
	PoseArray
	Pose2D
	PoseWithCovariance
*/
package geometric

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"
import choreo "github.com/RobotStudio/choreo-msg/msg/primitive"
import choreo1 "github.com/RobotStudio/choreo-msg/msg/primitive"
import choreo2 "github.com/RobotStudio/choreo-msg/msg/geometric"
import choreo3 "github.com/RobotStudio/choreo-msg/msg/geometric"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion2 // please upgrade the proto package

type PoseStamped struct {
	Header *choreo.Header `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	Pose   *Pose          `protobuf:"bytes,2,opt,name=pose" json:"pose,omitempty"`
}

func (m *PoseStamped) Reset()                    { *m = PoseStamped{} }
func (m *PoseStamped) String() string            { return proto.CompactTextString(m) }
func (*PoseStamped) ProtoMessage()               {}
func (*PoseStamped) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{0} }

func (m *PoseStamped) GetHeader() *choreo.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *PoseStamped) GetPose() *Pose {
	if m != nil {
		return m.Pose
	}
	return nil
}

type PoseWithCovarianceStamped struct {
	Header *choreo.Header      `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	Pose   *PoseWithCovariance `protobuf:"bytes,2,opt,name=pose" json:"pose,omitempty"`
}

func (m *PoseWithCovarianceStamped) Reset()                    { *m = PoseWithCovarianceStamped{} }
func (m *PoseWithCovarianceStamped) String() string            { return proto.CompactTextString(m) }
func (*PoseWithCovarianceStamped) ProtoMessage()               {}
func (*PoseWithCovarianceStamped) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{1} }

func (m *PoseWithCovarianceStamped) GetHeader() *choreo.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *PoseWithCovarianceStamped) GetPose() *PoseWithCovariance {
	if m != nil {
		return m.Pose
	}
	return nil
}

type Pose2DStamped struct {
	Header *choreo.Header `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	Pose   *Pose2D        `protobuf:"bytes,2,opt,name=pose" json:"pose,omitempty"`
}

func (m *Pose2DStamped) Reset()                    { *m = Pose2DStamped{} }
func (m *Pose2DStamped) String() string            { return proto.CompactTextString(m) }
func (*Pose2DStamped) ProtoMessage()               {}
func (*Pose2DStamped) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{2} }

func (m *Pose2DStamped) GetHeader() *choreo.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *Pose2DStamped) GetPose() *Pose2D {
	if m != nil {
		return m.Pose
	}
	return nil
}

type Pose struct {
	Position    *choreo2.Point      `protobuf:"bytes,1,opt,name=position" json:"position,omitempty"`
	Orientation *choreo3.Quaternion `protobuf:"bytes,2,opt,name=orientation" json:"orientation,omitempty"`
}

func (m *Pose) Reset()                    { *m = Pose{} }
func (m *Pose) String() string            { return proto.CompactTextString(m) }
func (*Pose) ProtoMessage()               {}
func (*Pose) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{3} }

func (m *Pose) GetPosition() *choreo2.Point {
	if m != nil {
		return m.Position
	}
	return nil
}

func (m *Pose) GetOrientation() *choreo3.Quaternion {
	if m != nil {
		return m.Orientation
	}
	return nil
}

type PoseArray struct {
	Header *choreo.Header `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	Poses  []*Pose        `protobuf:"bytes,2,rep,name=poses" json:"poses,omitempty"`
}

func (m *PoseArray) Reset()                    { *m = PoseArray{} }
func (m *PoseArray) String() string            { return proto.CompactTextString(m) }
func (*PoseArray) ProtoMessage()               {}
func (*PoseArray) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{4} }

func (m *PoseArray) GetHeader() *choreo.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *PoseArray) GetPoses() []*Pose {
	if m != nil {
		return m.Poses
	}
	return nil
}

type Pose2D struct {
	X     *choreo1.Float64 `protobuf:"bytes,1,opt,name=x" json:"x,omitempty"`
	Y     *choreo1.Float64 `protobuf:"bytes,2,opt,name=y" json:"y,omitempty"`
	Theta *choreo1.Float64 `protobuf:"bytes,3,opt,name=theta" json:"theta,omitempty"`
}

func (m *Pose2D) Reset()                    { *m = Pose2D{} }
func (m *Pose2D) String() string            { return proto.CompactTextString(m) }
func (*Pose2D) ProtoMessage()               {}
func (*Pose2D) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{5} }

func (m *Pose2D) GetX() *choreo1.Float64 {
	if m != nil {
		return m.X
	}
	return nil
}

func (m *Pose2D) GetY() *choreo1.Float64 {
	if m != nil {
		return m.Y
	}
	return nil
}

func (m *Pose2D) GetTheta() *choreo1.Float64 {
	if m != nil {
		return m.Theta
	}
	return nil
}

type PoseWithCovariance struct {
	Pose       *Pose              `protobuf:"bytes,1,opt,name=pose" json:"pose,omitempty"`
	Covariance []*choreo1.Float64 `protobuf:"bytes,2,rep,name=covariance" json:"covariance,omitempty"`
}

func (m *PoseWithCovariance) Reset()                    { *m = PoseWithCovariance{} }
func (m *PoseWithCovariance) String() string            { return proto.CompactTextString(m) }
func (*PoseWithCovariance) ProtoMessage()               {}
func (*PoseWithCovariance) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{6} }

func (m *PoseWithCovariance) GetPose() *Pose {
	if m != nil {
		return m.Pose
	}
	return nil
}

func (m *PoseWithCovariance) GetCovariance() []*choreo1.Float64 {
	if m != nil {
		return m.Covariance
	}
	return nil
}

func init() {
	proto.RegisterType((*PoseStamped)(nil), "choreo.PoseStamped")
	proto.RegisterType((*PoseWithCovarianceStamped)(nil), "choreo.PoseWithCovarianceStamped")
	proto.RegisterType((*Pose2DStamped)(nil), "choreo.Pose2DStamped")
	proto.RegisterType((*Pose)(nil), "choreo.Pose")
	proto.RegisterType((*PoseArray)(nil), "choreo.PoseArray")
	proto.RegisterType((*Pose2D)(nil), "choreo.Pose2D")
	proto.RegisterType((*PoseWithCovariance)(nil), "choreo.PoseWithCovariance")
}

func init() { proto.RegisterFile("geometric/pose.proto", fileDescriptor0) }

var fileDescriptor0 = []byte{
	// 382 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x94, 0x93, 0x4f, 0x4b, 0xc3, 0x40,
	0x10, 0xc5, 0x49, 0xff, 0x04, 0x9d, 0xda, 0x0a, 0x8b, 0x4a, 0x0c, 0x08, 0x25, 0xa0, 0xe8, 0xc1,
	0x04, 0x6b, 0xf1, 0xae, 0x16, 0xf1, 0xa8, 0xe9, 0xa1, 0xa0, 0xa7, 0x6d, 0xba, 0x26, 0x0b, 0x26,
	0x13, 0x37, 0xdb, 0xd2, 0x7e, 0x7b, 0xd9, 0x6c, 0x92, 0xa6, 0x44, 0x0f, 0x3d, 0xf4, 0xb0, 0xf3,
	0x5e, 0xdf, 0x6f, 0x86, 0x99, 0xc0, 0x49, 0xc8, 0x30, 0x66, 0x52, 0xf0, 0xc0, 0x4b, 0x31, 0x63,
	0x6e, 0x2a, 0x50, 0x22, 0x31, 0x83, 0x08, 0x05, 0x43, 0xfb, 0x2c, 0x15, 0x3c, 0xe6, 0x92, 0xaf,
	0x98, 0x17, 0x31, 0xba, 0x60, 0x42, 0xeb, 0xf6, 0xe9, 0xb6, 0xfe, 0xf5, 0x8d, 0x54, 0x96, 0xe5,
	0x7a, 0x18, 0x4f, 0xca, 0xb2, 0xbd, 0x2d, 0xff, 0x2c, 0xa9, 0x64, 0x22, 0xe1, 0x98, 0x68, 0xcd,
	0x99, 0x41, 0xef, 0x0d, 0x33, 0x36, 0x95, 0x34, 0x4e, 0xd9, 0x82, 0x5c, 0x81, 0xa9, 0x41, 0x96,
	0x31, 0x34, 0xae, 0x7b, 0xa3, 0x81, 0xab, 0x3b, 0x71, 0x5f, 0xf3, 0xaa, 0x5f, 0xa8, 0x64, 0x08,
	0x1d, 0xd5, 0xae, 0xd5, 0xca, 0x5d, 0x47, 0xa5, 0x4b, 0x45, 0xf9, 0xb9, 0xe2, 0x64, 0x70, 0xae,
	0x5e, 0x33, 0x2e, 0xa3, 0x67, 0x5c, 0x51, 0xc1, 0x69, 0x12, 0xec, 0x8d, 0x71, 0x77, 0x30, 0x76,
	0x1d, 0xb3, 0x1b, 0x5c, 0x40, 0x3f, 0xa1, 0xaf, 0xb4, 0xd1, 0x64, 0x5f, 0x90, 0xb3, 0x03, 0x1a,
	0xd4, 0x41, 0xa3, 0x49, 0x11, 0x1e, 0x42, 0x47, 0xbd, 0xc9, 0x0d, 0x1c, 0xa4, 0x98, 0x71, 0xc9,
	0x31, 0x29, 0x52, 0xfb, 0x5b, 0x3f, 0x4f, 0xa4, 0x5f, 0xc9, 0x64, 0x0c, 0x3d, 0x14, 0x9c, 0x25,
	0x92, 0xe6, 0x6e, 0x9d, 0x4e, 0x4a, 0xf7, 0x7b, 0xb5, 0x0c, 0xbf, 0x6e, 0x73, 0x66, 0x70, 0xa8,
	0x40, 0x8f, 0x42, 0xd0, 0xcd, 0x1e, 0x13, 0x74, 0x55, 0x97, 0x99, 0xd5, 0x1a, 0xb6, 0x1b, 0x2b,
	0xd1, 0x92, 0x13, 0x83, 0xa9, 0x27, 0x22, 0x17, 0x60, 0xac, 0x8b, 0xc0, 0xe3, 0xd2, 0xf9, 0xa2,
	0x2e, 0xe9, 0x61, 0xec, 0x1b, 0x6b, 0x25, 0x6f, 0x8a, 0x6e, 0x9b, 0xf2, 0x86, 0x5c, 0x42, 0x57,
	0x46, 0x4c, 0x52, 0xab, 0xfd, 0xb7, 0x45, 0xab, 0x4e, 0x08, 0xa4, 0xb9, 0xa9, 0xea, 0x74, 0x8c,
	0xff, 0x4e, 0x87, 0x78, 0x00, 0x41, 0xe5, 0x2f, 0xe6, 0x69, 0x30, 0x6a, 0x96, 0xa7, 0xbb, 0x0f,
	0x2f, 0xe4, 0x32, 0x5a, 0xce, 0xdd, 0x00, 0x63, 0xcf, 0xc7, 0x39, 0xca, 0xa9, 0x5c, 0x2e, 0x38,
	0x7a, 0xfa, 0x4f, 0xb7, 0x71, 0x16, 0x7a, 0xea, 0x57, 0x7d, 0x08, 0x73, 0x33, 0x3f, 0xff, 0xfb,
	0xdf, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x14, 0xbb, 0x71, 0x80, 0x03, 0x00, 0x00,
}