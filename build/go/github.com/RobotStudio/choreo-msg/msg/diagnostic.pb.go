// Code generated by protoc-gen-go. DO NOT EDIT.
// source: diagnostic.proto

/*
Package msg is a generated protocol buffer package.

It is generated from these files:
	diagnostic.proto

It has these top-level messages:
	KeyValue
	DiagnosticStatus
	DiagnosticArray
	ServiceResponse
	ServiceSelfTest
*/
package msg

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"
import choreo "github.com/RobotStudio/choreo-msg/msg"
import choreo1 "github.com/RobotStudio/choreo-msg/msg"
import choreo2 "github.com/RobotStudio/choreo-msg/msg"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion2 // please upgrade the proto package

type DiagnosticStatus_Level int32

const (
	DiagnosticStatus_OK    DiagnosticStatus_Level = 0
	DiagnosticStatus_WARN  DiagnosticStatus_Level = 1
	DiagnosticStatus_ERROR DiagnosticStatus_Level = 2
	DiagnosticStatus_STALE DiagnosticStatus_Level = 3
)

var DiagnosticStatus_Level_name = map[int32]string{
	0: "OK",
	1: "WARN",
	2: "ERROR",
	3: "STALE",
}
var DiagnosticStatus_Level_value = map[string]int32{
	"OK":    0,
	"WARN":  1,
	"ERROR": 2,
	"STALE": 3,
}

func (x DiagnosticStatus_Level) String() string {
	return proto.EnumName(DiagnosticStatus_Level_name, int32(x))
}
func (DiagnosticStatus_Level) EnumDescriptor() ([]byte, []int) { return fileDescriptor0, []int{1, 0} }

type KeyValue struct {
	Key   *choreo2.String `protobuf:"bytes,1,opt,name=key" json:"key,omitempty"`
	Value *choreo2.String `protobuf:"bytes,2,opt,name=value" json:"value,omitempty"`
}

func (m *KeyValue) Reset()                    { *m = KeyValue{} }
func (m *KeyValue) String() string            { return proto.CompactTextString(m) }
func (*KeyValue) ProtoMessage()               {}
func (*KeyValue) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{0} }

func (m *KeyValue) GetKey() *choreo2.String {
	if m != nil {
		return m.Key
	}
	return nil
}

func (m *KeyValue) GetValue() *choreo2.String {
	if m != nil {
		return m.Value
	}
	return nil
}

type DiagnosticStatus struct {
	Level      DiagnosticStatus_Level `protobuf:"varint,1,opt,name=level,enum=choreo.DiagnosticStatus_Level" json:"level,omitempty"`
	Name       *choreo2.String        `protobuf:"bytes,2,opt,name=name" json:"name,omitempty"`
	Message    *choreo2.String        `protobuf:"bytes,3,opt,name=message" json:"message,omitempty"`
	HardwareId *choreo2.String        `protobuf:"bytes,4,opt,name=hardware_id,json=hardwareId" json:"hardware_id,omitempty"`
	Values     []*KeyValue            `protobuf:"bytes,5,rep,name=values" json:"values,omitempty"`
}

func (m *DiagnosticStatus) Reset()                    { *m = DiagnosticStatus{} }
func (m *DiagnosticStatus) String() string            { return proto.CompactTextString(m) }
func (*DiagnosticStatus) ProtoMessage()               {}
func (*DiagnosticStatus) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{1} }

func (m *DiagnosticStatus) GetLevel() DiagnosticStatus_Level {
	if m != nil {
		return m.Level
	}
	return DiagnosticStatus_OK
}

func (m *DiagnosticStatus) GetName() *choreo2.String {
	if m != nil {
		return m.Name
	}
	return nil
}

func (m *DiagnosticStatus) GetMessage() *choreo2.String {
	if m != nil {
		return m.Message
	}
	return nil
}

func (m *DiagnosticStatus) GetHardwareId() *choreo2.String {
	if m != nil {
		return m.HardwareId
	}
	return nil
}

func (m *DiagnosticStatus) GetValues() []*KeyValue {
	if m != nil {
		return m.Values
	}
	return nil
}

type DiagnosticArray struct {
	Header *choreo1.Header     `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	Status []*DiagnosticStatus `protobuf:"bytes,2,rep,name=status" json:"status,omitempty"`
}

func (m *DiagnosticArray) Reset()                    { *m = DiagnosticArray{} }
func (m *DiagnosticArray) String() string            { return proto.CompactTextString(m) }
func (*DiagnosticArray) ProtoMessage()               {}
func (*DiagnosticArray) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{2} }

func (m *DiagnosticArray) GetHeader() *choreo1.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *DiagnosticArray) GetStatus() []*DiagnosticStatus {
	if m != nil {
		return m.Status
	}
	return nil
}

type ServiceResponse struct {
	Header  *choreo1.Header `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	Success *choreo.Bool    `protobuf:"bytes,2,opt,name=success" json:"success,omitempty"`
	Message *choreo2.String `protobuf:"bytes,3,opt,name=message" json:"message,omitempty"`
}

func (m *ServiceResponse) Reset()                    { *m = ServiceResponse{} }
func (m *ServiceResponse) String() string            { return proto.CompactTextString(m) }
func (*ServiceResponse) ProtoMessage()               {}
func (*ServiceResponse) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{3} }

func (m *ServiceResponse) GetHeader() *choreo1.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *ServiceResponse) GetSuccess() *choreo.Bool {
	if m != nil {
		return m.Success
	}
	return nil
}

func (m *ServiceResponse) GetMessage() *choreo2.String {
	if m != nil {
		return m.Message
	}
	return nil
}

type ServiceSelfTest struct {
	Id     *choreo2.String     `protobuf:"bytes,1,opt,name=id" json:"id,omitempty"`
	Passed *choreo.Bool        `protobuf:"bytes,2,opt,name=passed" json:"passed,omitempty"`
	Status []*DiagnosticStatus `protobuf:"bytes,3,rep,name=status" json:"status,omitempty"`
}

func (m *ServiceSelfTest) Reset()                    { *m = ServiceSelfTest{} }
func (m *ServiceSelfTest) String() string            { return proto.CompactTextString(m) }
func (*ServiceSelfTest) ProtoMessage()               {}
func (*ServiceSelfTest) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{4} }

func (m *ServiceSelfTest) GetId() *choreo2.String {
	if m != nil {
		return m.Id
	}
	return nil
}

func (m *ServiceSelfTest) GetPassed() *choreo.Bool {
	if m != nil {
		return m.Passed
	}
	return nil
}

func (m *ServiceSelfTest) GetStatus() []*DiagnosticStatus {
	if m != nil {
		return m.Status
	}
	return nil
}

func init() {
	proto.RegisterType((*KeyValue)(nil), "choreo.KeyValue")
	proto.RegisterType((*DiagnosticStatus)(nil), "choreo.DiagnosticStatus")
	proto.RegisterType((*DiagnosticArray)(nil), "choreo.DiagnosticArray")
	proto.RegisterType((*ServiceResponse)(nil), "choreo.ServiceResponse")
	proto.RegisterType((*ServiceSelfTest)(nil), "choreo.ServiceSelfTest")
	proto.RegisterEnum("choreo.DiagnosticStatus_Level", DiagnosticStatus_Level_name, DiagnosticStatus_Level_value)
}

func init() { proto.RegisterFile("diagnostic.proto", fileDescriptor0) }

var fileDescriptor0 = []byte{
	// 443 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x8c, 0x93, 0x51, 0x8b, 0xd3, 0x40,
	0x10, 0xc7, 0x6d, 0xd2, 0xe4, 0xce, 0xa9, 0xdc, 0x85, 0x45, 0x24, 0xdc, 0xc3, 0x51, 0xc2, 0x71,
	0x54, 0xc4, 0x44, 0xaa, 0x6f, 0x3e, 0xf5, 0xf0, 0x40, 0xb9, 0xc3, 0x83, 0xcd, 0xa1, 0xe0, 0x8b,
	0x6c, 0x93, 0x31, 0x5d, 0x2e, 0xe9, 0x96, 0x9d, 0x4d, 0xa5, 0x1f, 0x41, 0xfc, 0x16, 0x7e, 0x52,
	0xe9, 0x26, 0xb1, 0xd2, 0x6b, 0xa1, 0x6f, 0x61, 0x7e, 0xbf, 0xcd, 0xcc, 0xfe, 0x27, 0x81, 0x20,
	0x97, 0xa2, 0x98, 0x2b, 0x32, 0x32, 0x8b, 0x17, 0x5a, 0x19, 0xc5, 0xfc, 0x6c, 0xa6, 0x34, 0xaa,
	0xb3, 0xe7, 0x0b, 0x2d, 0x2b, 0x69, 0xe4, 0x12, 0x93, 0xa9, 0x52, 0x65, 0x43, 0xcf, 0x5e, 0x6c,
	0xaa, 0x33, 0x14, 0x39, 0xea, 0xc7, 0x75, 0x32, 0x5a, 0xce, 0x8b, 0xa6, 0x1e, 0x71, 0x38, 0xbe,
	0xc1, 0xd5, 0x17, 0x51, 0xd6, 0xc8, 0x86, 0xe0, 0x3e, 0xe0, 0x2a, 0xec, 0x0d, 0x7b, 0xa3, 0xc1,
	0xf8, 0x24, 0x6e, 0xfa, 0xc4, 0xa9, 0xd5, 0xf9, 0x1a, 0xb1, 0x0b, 0xf0, 0x96, 0x6b, 0x35, 0x74,
	0x76, 0x3a, 0x0d, 0x8c, 0xfe, 0x38, 0x10, 0x7c, 0xf8, 0x37, 0x76, 0x6a, 0x84, 0xa9, 0x89, 0xbd,
	0x03, 0xaf, 0xc4, 0x25, 0x96, 0xf6, 0xf5, 0x27, 0xe3, 0xf3, 0xee, 0xe8, 0xb6, 0x18, 0xdf, 0xae,
	0x2d, 0xde, 0xc8, 0x2c, 0x82, 0xfe, 0x5c, 0x54, 0xfb, 0xfa, 0x59, 0xc6, 0x46, 0x70, 0x54, 0x21,
	0x91, 0x28, 0x30, 0x74, 0x77, 0x6a, 0x1d, 0x66, 0x09, 0x0c, 0x66, 0x42, 0xe7, 0x3f, 0x85, 0xc6,
	0xef, 0x32, 0x0f, 0xfb, 0x3b, 0x6d, 0xe8, 0x94, 0x4f, 0x39, 0x1b, 0x81, 0x6f, 0xaf, 0x44, 0xa1,
	0x37, 0x74, 0x47, 0x83, 0x71, 0xd0, 0xb9, 0x5d, 0x66, 0xbc, 0xe5, 0x51, 0x02, 0x9e, 0x1d, 0x9c,
	0xf9, 0xe0, 0xdc, 0xdd, 0x04, 0x4f, 0xd8, 0x31, 0xf4, 0xbf, 0x4e, 0xf8, 0xe7, 0xa0, 0xc7, 0x9e,
	0x82, 0x77, 0xcd, 0xf9, 0x1d, 0x0f, 0x9c, 0xf5, 0x63, 0x7a, 0x3f, 0xb9, 0xbd, 0x0e, 0xdc, 0xe8,
	0x01, 0x4e, 0x37, 0x57, 0x9f, 0x68, 0x2d, 0x56, 0xec, 0x12, 0xfc, 0x66, 0x67, 0xdb, 0x2b, 0xf8,
	0x68, 0xab, 0xbc, 0xa5, 0xec, 0x0d, 0xf8, 0x64, 0xb3, 0x0a, 0x1d, 0x3b, 0x55, 0xb8, 0x2f, 0x4b,
	0xde, 0x7a, 0xd1, 0xef, 0x1e, 0x9c, 0xa6, 0xa8, 0x97, 0x32, 0x43, 0x8e, 0xb4, 0x50, 0x73, 0xc2,
	0x83, 0xbb, 0x5d, 0xc2, 0x11, 0xd5, 0x59, 0x86, 0x44, 0xed, 0x16, 0x9e, 0x75, 0xe2, 0x95, 0x52,
	0x25, 0xef, 0xe0, 0xe1, 0x6b, 0x88, 0x7e, 0x6d, 0xa6, 0x49, 0xb1, 0xfc, 0x71, 0x8f, 0x64, 0xd8,
	0x39, 0x38, 0x32, 0xdf, 0xf3, 0xe9, 0x39, 0x32, 0x67, 0x17, 0xe0, 0x2f, 0x04, 0x11, 0xe6, 0x3b,
	0x87, 0x68, 0xd9, 0x7f, 0xc9, 0xb8, 0x87, 0x25, 0x73, 0xf5, 0xea, 0xdb, 0xcb, 0x42, 0x9a, 0x59,
	0x3d, 0x8d, 0x33, 0x55, 0x25, 0x5c, 0x4d, 0x95, 0x49, 0x4d, 0x9d, 0x4b, 0x95, 0x34, 0x27, 0x5f,
	0x57, 0x54, 0x24, 0x15, 0x15, 0xef, 0x2b, 0x2a, 0xa6, 0xbe, 0xfd, 0x67, 0xde, 0xfe, 0x0d, 0x00,
	0x00, 0xff, 0xff, 0x64, 0xc0, 0xfa, 0x02, 0x95, 0x03, 0x00, 0x00,
}