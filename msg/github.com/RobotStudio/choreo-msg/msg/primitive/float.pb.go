// Code generated by protoc-gen-go. DO NOT EDIT.
// source: primitive/float.proto

/*
Package primitive is a generated protocol buffer package.

It is generated from these files:
	primitive/float.proto

It has these top-level messages:
	FloatArray
	Float
	Float32Array
	Float32
	Float64Array
	Float64
*/
package primitive

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion2 // please upgrade the proto package

type FloatArray struct {
	Data []*Float `protobuf:"bytes,1,rep,name=data" json:"data,omitempty"`
}

func (m *FloatArray) Reset()                    { *m = FloatArray{} }
func (m *FloatArray) String() string            { return proto.CompactTextString(m) }
func (*FloatArray) ProtoMessage()               {}
func (*FloatArray) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{0} }

func (m *FloatArray) GetData() []*Float {
	if m != nil {
		return m.Data
	}
	return nil
}

type Float struct {
	Data float32 `protobuf:"fixed32,1,opt,name=data" json:"data,omitempty"`
}

func (m *Float) Reset()                    { *m = Float{} }
func (m *Float) String() string            { return proto.CompactTextString(m) }
func (*Float) ProtoMessage()               {}
func (*Float) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{1} }

func (m *Float) GetData() float32 {
	if m != nil {
		return m.Data
	}
	return 0
}

type Float32Array struct {
	Data []*Float32 `protobuf:"bytes,1,rep,name=data" json:"data,omitempty"`
}

func (m *Float32Array) Reset()                    { *m = Float32Array{} }
func (m *Float32Array) String() string            { return proto.CompactTextString(m) }
func (*Float32Array) ProtoMessage()               {}
func (*Float32Array) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{2} }

func (m *Float32Array) GetData() []*Float32 {
	if m != nil {
		return m.Data
	}
	return nil
}

type Float32 struct {
	Data float32 `protobuf:"fixed32,1,opt,name=data" json:"data,omitempty"`
}

func (m *Float32) Reset()                    { *m = Float32{} }
func (m *Float32) String() string            { return proto.CompactTextString(m) }
func (*Float32) ProtoMessage()               {}
func (*Float32) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{3} }

func (m *Float32) GetData() float32 {
	if m != nil {
		return m.Data
	}
	return 0
}

type Float64Array struct {
	Data []*Float64 `protobuf:"bytes,1,rep,name=data" json:"data,omitempty"`
}

func (m *Float64Array) Reset()                    { *m = Float64Array{} }
func (m *Float64Array) String() string            { return proto.CompactTextString(m) }
func (*Float64Array) ProtoMessage()               {}
func (*Float64Array) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{4} }

func (m *Float64Array) GetData() []*Float64 {
	if m != nil {
		return m.Data
	}
	return nil
}

type Float64 struct {
	Data float32 `protobuf:"fixed32,1,opt,name=data" json:"data,omitempty"`
}

func (m *Float64) Reset()                    { *m = Float64{} }
func (m *Float64) String() string            { return proto.CompactTextString(m) }
func (*Float64) ProtoMessage()               {}
func (*Float64) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{5} }

func (m *Float64) GetData() float32 {
	if m != nil {
		return m.Data
	}
	return 0
}

func init() {
	proto.RegisterType((*FloatArray)(nil), "choreo.FloatArray")
	proto.RegisterType((*Float)(nil), "choreo.Float")
	proto.RegisterType((*Float32Array)(nil), "choreo.Float32Array")
	proto.RegisterType((*Float32)(nil), "choreo.Float32")
	proto.RegisterType((*Float64Array)(nil), "choreo.Float64Array")
	proto.RegisterType((*Float64)(nil), "choreo.Float64")
}

func init() { proto.RegisterFile("primitive/float.proto", fileDescriptor0) }

var fileDescriptor0 = []byte{
	// 190 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0x12, 0x2d, 0x28, 0xca, 0xcc,
	0xcd, 0x2c, 0xc9, 0x2c, 0x4b, 0xd5, 0x4f, 0xcb, 0xc9, 0x4f, 0x2c, 0xd1, 0x2b, 0x28, 0xca, 0x2f,
	0xc9, 0x17, 0x62, 0x4b, 0xce, 0xc8, 0x2f, 0x4a, 0xcd, 0x57, 0xd2, 0xe7, 0xe2, 0x72, 0x03, 0x09,
	0x3b, 0x16, 0x15, 0x25, 0x56, 0x0a, 0x29, 0x72, 0xb1, 0xa4, 0x24, 0x96, 0x24, 0x4a, 0x30, 0x2a,
	0x30, 0x6b, 0x70, 0x1b, 0xf1, 0xea, 0x41, 0x14, 0xe9, 0x81, 0x55, 0x04, 0x81, 0xa5, 0x94, 0xa4,
	0xb9, 0x58, 0xc1, 0x5c, 0x21, 0x21, 0xb8, 0x5a, 0x46, 0x0d, 0x26, 0xa8, 0xa4, 0x31, 0x17, 0x0f,
	0x58, 0xd2, 0xd8, 0x08, 0x62, 0x9e, 0x32, 0x8a, 0x79, 0xfc, 0x28, 0xe6, 0x19, 0x1b, 0x41, 0x35,
	0xc9, 0x72, 0xb1, 0x43, 0x05, 0xf0, 0x9a, 0x69, 0x66, 0x42, 0xd8, 0x4c, 0x33, 0x13, 0x34, 0x33,
	0xcd, 0x4c, 0xb0, 0x99, 0xe9, 0x64, 0x18, 0xa5, 0x9f, 0x9e, 0x59, 0x92, 0x51, 0x9a, 0xa4, 0x97,
	0x9c, 0x9f, 0xab, 0x1f, 0x94, 0x9f, 0x94, 0x5f, 0x12, 0x5c, 0x52, 0x9a, 0x92, 0x99, 0xaf, 0x0f,
	0x31, 0x4d, 0x37, 0xb7, 0x38, 0x5d, 0x1f, 0x84, 0xe1, 0x81, 0x97, 0xc4, 0x06, 0x0e, 0x37, 0x63,
	0x40, 0x00, 0x00, 0x00, 0xff, 0xff, 0x5d, 0x60, 0x55, 0x5e, 0x50, 0x01, 0x00, 0x00,
}
