// Code generated by protoc-gen-go. DO NOT EDIT.
// source: primitive/bool.proto

/*
Package primitive is a generated protocol buffer package.

It is generated from these files:
	primitive/bool.proto

It has these top-level messages:
	BoolArray
	Bool
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

type BoolArray struct {
	Data []*Bool `protobuf:"bytes,1,rep,name=data" json:"data,omitempty"`
}

func (m *BoolArray) Reset()                    { *m = BoolArray{} }
func (m *BoolArray) String() string            { return proto.CompactTextString(m) }
func (*BoolArray) ProtoMessage()               {}
func (*BoolArray) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{0} }

func (m *BoolArray) GetData() []*Bool {
	if m != nil {
		return m.Data
	}
	return nil
}

type Bool struct {
	Data bool `protobuf:"varint,1,opt,name=data" json:"data,omitempty"`
}

func (m *Bool) Reset()                    { *m = Bool{} }
func (m *Bool) String() string            { return proto.CompactTextString(m) }
func (*Bool) ProtoMessage()               {}
func (*Bool) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{1} }

func (m *Bool) GetData() bool {
	if m != nil {
		return m.Data
	}
	return false
}

func init() {
	proto.RegisterType((*BoolArray)(nil), "choreo.BoolArray")
	proto.RegisterType((*Bool)(nil), "choreo.Bool")
}

func init() { proto.RegisterFile("primitive/bool.proto", fileDescriptor0) }

var fileDescriptor0 = []byte{
	// 150 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0x12, 0x29, 0x28, 0xca, 0xcc,
	0xcd, 0x2c, 0xc9, 0x2c, 0x4b, 0xd5, 0x4f, 0xca, 0xcf, 0xcf, 0xd1, 0x2b, 0x28, 0xca, 0x2f, 0xc9,
	0x17, 0x62, 0x4b, 0xce, 0xc8, 0x2f, 0x4a, 0xcd, 0x57, 0xd2, 0xe5, 0xe2, 0x74, 0xca, 0xcf, 0xcf,
	0x71, 0x2c, 0x2a, 0x4a, 0xac, 0x14, 0x52, 0xe0, 0x62, 0x49, 0x49, 0x2c, 0x49, 0x94, 0x60, 0x54,
	0x60, 0xd6, 0xe0, 0x36, 0xe2, 0xd1, 0x83, 0xa8, 0xd1, 0x03, 0x29, 0x08, 0x02, 0xcb, 0x28, 0x49,
	0x71, 0xb1, 0x80, 0x78, 0x42, 0x42, 0x70, 0x95, 0x8c, 0x1a, 0x1c, 0x10, 0x39, 0x27, 0xc3, 0x28,
	0xfd, 0xf4, 0xcc, 0x92, 0x8c, 0xd2, 0x24, 0xbd, 0xe4, 0xfc, 0x5c, 0xfd, 0xa0, 0xfc, 0xa4, 0xfc,
	0x92, 0xe0, 0x92, 0xd2, 0x94, 0xcc, 0x7c, 0x7d, 0x88, 0x39, 0xba, 0xb9, 0xc5, 0xe9, 0xfa, 0x20,
	0x0c, 0x77, 0x50, 0x12, 0x1b, 0xd8, 0x31, 0xc6, 0x80, 0x00, 0x00, 0x00, 0xff, 0xff, 0x62, 0x95,
	0xc6, 0xb5, 0xa4, 0x00, 0x00, 0x00,
}
