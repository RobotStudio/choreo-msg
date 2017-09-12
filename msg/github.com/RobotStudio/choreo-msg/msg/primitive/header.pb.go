// Code generated by protoc-gen-go. DO NOT EDIT.
// source: primitive/header.proto

/*
Package primitive is a generated protocol buffer package.

It is generated from these files:
	primitive/header.proto

It has these top-level messages:
	Header
*/
package primitive

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"
import google_protobuf "github.com/golang/protobuf/ptypes/timestamp"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion2 // please upgrade the proto package

type Header struct {
	Seq     uint32                     `protobuf:"varint,1,opt,name=seq" json:"seq,omitempty"`
	Stamp   *google_protobuf.Timestamp `protobuf:"bytes,2,opt,name=stamp" json:"stamp,omitempty"`
	FrameId string                     `protobuf:"bytes,3,opt,name=frame_id,json=frameId" json:"frame_id,omitempty"`
}

func (m *Header) Reset()                    { *m = Header{} }
func (m *Header) String() string            { return proto.CompactTextString(m) }
func (*Header) ProtoMessage()               {}
func (*Header) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{0} }

func (m *Header) GetSeq() uint32 {
	if m != nil {
		return m.Seq
	}
	return 0
}

func (m *Header) GetStamp() *google_protobuf.Timestamp {
	if m != nil {
		return m.Stamp
	}
	return nil
}

func (m *Header) GetFrameId() string {
	if m != nil {
		return m.FrameId
	}
	return ""
}

func init() {
	proto.RegisterType((*Header)(nil), "choreo.Header")
}

func init() { proto.RegisterFile("primitive/header.proto", fileDescriptor0) }

var fileDescriptor0 = []byte{
	// 198 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x3c, 0x8f, 0xc1, 0x6a, 0xc3, 0x30,
	0x0c, 0x40, 0xf1, 0xc2, 0xb2, 0xcd, 0x63, 0x30, 0x7c, 0x18, 0x59, 0x2e, 0x0b, 0x3b, 0xe5, 0x32,
	0x7b, 0x6d, 0xff, 0xa0, 0xa7, 0xf6, 0xea, 0xf6, 0xd4, 0x4b, 0x89, 0x63, 0xc5, 0x31, 0xd4, 0x28,
	0x75, 0x9c, 0x7e, 0x7f, 0x89, 0x4d, 0x7a, 0x10, 0x48, 0xe2, 0xe9, 0x49, 0xa2, 0x5f, 0x83, 0xb7,
	0xce, 0x06, 0x7b, 0x03, 0xd1, 0x43, 0xa3, 0xc1, 0xf3, 0xc1, 0x63, 0x40, 0x96, 0xb7, 0x3d, 0x7a,
	0xc0, 0xf2, 0xc7, 0x20, 0x9a, 0x0b, 0x88, 0xd8, 0x55, 0x53, 0x27, 0x82, 0x75, 0x30, 0x86, 0xc6,
	0x0d, 0x09, 0xfc, 0x35, 0x34, 0xdf, 0xc5, 0x41, 0xf6, 0x49, 0xb3, 0x11, 0xae, 0x05, 0xa9, 0x48,
	0xfd, 0x21, 0xe7, 0x94, 0xfd, 0xd3, 0xe7, 0x88, 0x16, 0x4f, 0x15, 0xa9, 0xdf, 0xd7, 0x25, 0x4f,
	0x32, 0xbe, 0xc8, 0xf8, 0x71, 0x91, 0xc9, 0x04, 0xb2, 0x6f, 0xfa, 0xda, 0xf9, 0xc6, 0xc1, 0xd9,
	0xea, 0x22, 0xab, 0x48, 0xfd, 0x26, 0x5f, 0x62, 0xbd, 0xd7, 0xdb, 0xd5, 0x49, 0x18, 0x1b, 0xfa,
	0x49, 0xf1, 0x16, 0x9d, 0x90, 0xa8, 0x30, 0x1c, 0xc2, 0xa4, 0x2d, 0x8a, 0x74, 0xea, 0x9f, 0x1b,
	0x8d, 0x98, 0xe3, 0xf1, 0x91, 0xca, 0xe3, 0xa2, 0xcd, 0x3d, 0x00, 0x00, 0xff, 0xff, 0x23, 0x5f,
	0x8e, 0x8d, 0xe5, 0x00, 0x00, 0x00,
}
