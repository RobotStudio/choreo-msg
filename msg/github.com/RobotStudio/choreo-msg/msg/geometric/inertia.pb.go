// Code generated by protoc-gen-go. DO NOT EDIT.
// source: geometric/inertia.proto

/*
Package geometric is a generated protocol buffer package.

It is generated from these files:
	geometric/inertia.proto

It has these top-level messages:
	InertiaStamped
	Inertia
*/
package geometric

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"
import choreo "github.com/RobotStudio/choreo-msg/msg/primitive"
import choreo1 "github.com/RobotStudio/choreo-msg/msg/primitive"
import choreo2 "github.com/RobotStudio/choreo-msg/msg/geometric"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion2 // please upgrade the proto package

type InertiaStamped struct {
	Header  *choreo.Header `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	Inertia *Inertia       `protobuf:"bytes,2,opt,name=inertia" json:"inertia,omitempty"`
}

func (m *InertiaStamped) Reset()                    { *m = InertiaStamped{} }
func (m *InertiaStamped) String() string            { return proto.CompactTextString(m) }
func (*InertiaStamped) ProtoMessage()               {}
func (*InertiaStamped) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{0} }

func (m *InertiaStamped) GetHeader() *choreo.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *InertiaStamped) GetInertia() *Inertia {
	if m != nil {
		return m.Inertia
	}
	return nil
}

type Inertia struct {
	M   *choreo1.Float64 `protobuf:"bytes,1,opt,name=m" json:"m,omitempty"`
	Com *choreo2.Vector3 `protobuf:"bytes,2,opt,name=com" json:"com,omitempty"`
	Ixx *choreo1.Float64 `protobuf:"bytes,3,opt,name=ixx" json:"ixx,omitempty"`
	Ixy *choreo1.Float64 `protobuf:"bytes,4,opt,name=ixy" json:"ixy,omitempty"`
	Ixz *choreo1.Float64 `protobuf:"bytes,5,opt,name=ixz" json:"ixz,omitempty"`
	Iyy *choreo1.Float64 `protobuf:"bytes,7,opt,name=iyy" json:"iyy,omitempty"`
	Iyz *choreo1.Float64 `protobuf:"bytes,8,opt,name=iyz" json:"iyz,omitempty"`
	Izz *choreo1.Float64 `protobuf:"bytes,6,opt,name=izz" json:"izz,omitempty"`
}

func (m *Inertia) Reset()                    { *m = Inertia{} }
func (m *Inertia) String() string            { return proto.CompactTextString(m) }
func (*Inertia) ProtoMessage()               {}
func (*Inertia) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{1} }

func (m *Inertia) GetM() *choreo1.Float64 {
	if m != nil {
		return m.M
	}
	return nil
}

func (m *Inertia) GetCom() *choreo2.Vector3 {
	if m != nil {
		return m.Com
	}
	return nil
}

func (m *Inertia) GetIxx() *choreo1.Float64 {
	if m != nil {
		return m.Ixx
	}
	return nil
}

func (m *Inertia) GetIxy() *choreo1.Float64 {
	if m != nil {
		return m.Ixy
	}
	return nil
}

func (m *Inertia) GetIxz() *choreo1.Float64 {
	if m != nil {
		return m.Ixz
	}
	return nil
}

func (m *Inertia) GetIyy() *choreo1.Float64 {
	if m != nil {
		return m.Iyy
	}
	return nil
}

func (m *Inertia) GetIyz() *choreo1.Float64 {
	if m != nil {
		return m.Iyz
	}
	return nil
}

func (m *Inertia) GetIzz() *choreo1.Float64 {
	if m != nil {
		return m.Izz
	}
	return nil
}

func init() {
	proto.RegisterType((*InertiaStamped)(nil), "choreo.InertiaStamped")
	proto.RegisterType((*Inertia)(nil), "choreo.Inertia")
}

func init() { proto.RegisterFile("geometric/inertia.proto", fileDescriptor0) }

var fileDescriptor0 = []byte{
	// 281 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x74, 0x91, 0x41, 0x4b, 0xc3, 0x30,
	0x18, 0x86, 0xe9, 0xa6, 0xad, 0x44, 0x98, 0x50, 0x70, 0x86, 0x81, 0xa0, 0x3b, 0x88, 0x1e, 0x6c,
	0xd0, 0x89, 0x3f, 0xc0, 0x83, 0xe8, 0xb5, 0x03, 0x0f, 0xde, 0xda, 0x34, 0xb6, 0x01, 0xe3, 0x57,
	0xe2, 0xb7, 0xb1, 0xe4, 0xbf, 0xf8, 0x5f, 0xa5, 0x49, 0xb6, 0x81, 0x98, 0x43, 0x2f, 0xef, 0xfb,
	0xf4, 0xc9, 0x0b, 0x1f, 0x39, 0x6b, 0x05, 0x28, 0x81, 0x5a, 0x72, 0x26, 0xbf, 0x84, 0x46, 0x59,
	0x15, 0xbd, 0x06, 0x84, 0x3c, 0xe5, 0x1d, 0x68, 0x01, 0xb3, 0x69, 0xaf, 0xa5, 0x92, 0x28, 0xd7,
	0x82, 0x75, 0xa2, 0x6a, 0x84, 0xf6, 0xfd, 0xec, 0x74, 0x9f, 0x7f, 0x7c, 0x42, 0x85, 0x21, 0x9e,
	0xee, 0x7d, 0x6b, 0xc1, 0x11, 0x02, 0x3e, 0xe7, 0x64, 0xf2, 0xea, 0xfd, 0x4b, 0xac, 0x54, 0x2f,
	0x9a, 0xfc, 0x8a, 0xa4, 0x5e, 0x48, 0x93, 0x8b, 0xe4, 0xfa, 0xf8, 0x7e, 0x52, 0xf8, 0x17, 0x8b,
	0x17, 0x97, 0x96, 0xa1, 0xcd, 0x6f, 0x48, 0x16, 0x96, 0xd1, 0x91, 0x03, 0x4f, 0xb6, 0x60, 0x10,
	0x96, 0xdb, 0x7e, 0xfe, 0x33, 0x22, 0x59, 0x08, 0xf3, 0x73, 0x92, 0xa8, 0x60, 0xde, 0xfd, 0xf0,
	0x3c, 0x0c, 0x7d, 0x7c, 0x28, 0x13, 0x95, 0x5f, 0x92, 0x31, 0x07, 0xf5, 0xd7, 0xf8, 0xe6, 0x26,
	0x2f, 0xca, 0xa1, 0x1b, 0x10, 0xb9, 0xd9, 0xd0, 0xf1, 0xff, 0x8e, 0xa1, 0xf3, 0x88, 0xa1, 0x07,
	0x51, 0xc4, 0x78, 0xc4, 0xd2, 0xc3, 0x28, 0x62, 0x1d, 0x62, 0x0c, 0xcd, 0x62, 0x88, 0xf1, 0x16,
	0x63, 0xe9, 0x51, 0x14, 0xf1, 0x16, 0x6b, 0x69, 0x1a, 0x43, 0xac, 0x7d, 0xba, 0x7b, 0x67, 0xad,
	0xc4, 0x6e, 0x55, 0x17, 0x1c, 0x14, 0x2b, 0xa1, 0x06, 0x5c, 0xe2, 0xaa, 0x91, 0xc0, 0x3c, 0x7d,
	0xab, 0xbe, 0x5b, 0x36, 0x7c, 0xbb, 0x23, 0xd6, 0xa9, 0x3b, 0xdf, 0xe2, 0x37, 0x00, 0x00, 0xff,
	0xff, 0xc5, 0x5f, 0xb0, 0x65, 0x28, 0x02, 0x00, 0x00,
}
