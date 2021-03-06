// Code generated by protoc-gen-go. DO NOT EDIT.
// source: diagnostic/diagnostic.proto

/*
Package diagnostic is a generated protocol buffer package.

It is generated from these files:
	diagnostic/diagnostic.proto

It has these top-level messages:
	KeyValue
	DiagnosticStatus
	DiagnosticArray
	ServiceResponse
	ServiceSelfTest
*/
package diagnostic

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"
import choreo "github.com/RobotStudio/choreo-msg/msg/primitive"
import choreo1 "github.com/RobotStudio/choreo-msg/msg/primitive"
import choreo2 "github.com/RobotStudio/choreo-msg/msg/primitive"

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

func init() { proto.RegisterFile("diagnostic/diagnostic.proto", fileDescriptor0) }

var fileDescriptor0 = []byte{
	// 444 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x8c, 0x93, 0xd1, 0x6a, 0xdb, 0x30,
	0x14, 0x86, 0x17, 0x3b, 0x76, 0xbb, 0x93, 0xd1, 0x1a, 0x31, 0x86, 0xe9, 0xa0, 0x04, 0x53, 0x4a,
	0x6e, 0x66, 0x97, 0x6c, 0x2f, 0x90, 0xb2, 0xc2, 0x46, 0xcb, 0x0a, 0x72, 0xd9, 0x60, 0x37, 0x43,
	0xb1, 0xce, 0x1c, 0x51, 0x3b, 0x0a, 0x92, 0x9c, 0x91, 0x47, 0x18, 0x7b, 0x8b, 0x3d, 0xe9, 0xb0,
	0x6c, 0xcf, 0xa3, 0x73, 0x20, 0x17, 0x06, 0x71, 0xfe, 0x4f, 0x3e, 0xbf, 0xfe, 0x23, 0xc1, 0x6b,
	0x2e, 0x58, 0xbe, 0x96, 0xda, 0x88, 0x2c, 0xe9, 0x97, 0xf1, 0x46, 0x49, 0x23, 0x89, 0x9f, 0xad,
	0xa4, 0x42, 0x79, 0xf6, 0x72, 0xa3, 0x44, 0x29, 0x8c, 0xd8, 0x62, 0xb2, 0x94, 0xb2, 0x68, 0xd4,
	0xb3, 0x57, 0x7d, 0x75, 0x85, 0x8c, 0xa3, 0xfa, 0xbf, 0xae, 0x8d, 0x12, 0xeb, 0xbc, 0xa9, 0x47,
	0x14, 0x8e, 0x6f, 0x71, 0xf7, 0x99, 0x15, 0x15, 0x92, 0x29, 0xb8, 0x8f, 0xb8, 0x0b, 0x47, 0xd3,
	0xd1, 0x6c, 0x32, 0x3f, 0x89, 0x9b, 0x3e, 0x71, 0x6a, 0x71, 0x5a, 0x4b, 0xe4, 0x02, 0xbc, 0x6d,
	0x8d, 0x86, 0xce, 0x20, 0xd3, 0x88, 0xd1, 0x6f, 0x07, 0x82, 0xf7, 0x7f, 0x6d, 0xa7, 0x86, 0x99,
	0x4a, 0x93, 0x77, 0xe0, 0x15, 0xb8, 0xc5, 0xc2, 0xfe, 0xfe, 0x64, 0x7e, 0xde, 0x6d, 0x7d, 0x0a,
	0xc6, 0x77, 0x35, 0x45, 0x1b, 0x98, 0x44, 0x30, 0x5e, 0xb3, 0x72, 0x5f, 0x3f, 0xab, 0x91, 0x19,
	0x1c, 0x95, 0xa8, 0x35, 0xcb, 0x31, 0x74, 0x07, 0xb1, 0x4e, 0x26, 0x09, 0x4c, 0x56, 0x4c, 0xf1,
	0x1f, 0x4c, 0xe1, 0x37, 0xc1, 0xc3, 0xf1, 0x20, 0x0d, 0x1d, 0xf2, 0x91, 0x93, 0x19, 0xf8, 0xf6,
	0x48, 0x3a, 0xf4, 0xa6, 0xee, 0x6c, 0x32, 0x0f, 0x3a, 0xb6, 0xcb, 0x8c, 0xb6, 0x7a, 0x94, 0x80,
	0x67, 0x8d, 0x13, 0x1f, 0x9c, 0xfb, 0xdb, 0xe0, 0x19, 0x39, 0x86, 0xf1, 0x97, 0x05, 0xfd, 0x14,
	0x8c, 0xc8, 0x73, 0xf0, 0x6e, 0x28, 0xbd, 0xa7, 0x81, 0x53, 0x2f, 0xd3, 0x87, 0xc5, 0xdd, 0x4d,
	0xe0, 0x46, 0x8f, 0x70, 0xda, 0x1f, 0x7d, 0xa1, 0x14, 0xdb, 0x91, 0x4b, 0xf0, 0x9b, 0x99, 0x3d,
	0x1d, 0xc1, 0x07, 0x5b, 0xa5, 0xad, 0x4a, 0xae, 0xc0, 0xd7, 0x36, 0xab, 0xd0, 0xb1, 0xae, 0xc2,
	0x7d, 0x59, 0xd2, 0x96, 0x8b, 0x7e, 0x8d, 0xe0, 0x34, 0x45, 0xb5, 0x15, 0x19, 0x52, 0xd4, 0x1b,
	0xb9, 0xd6, 0x78, 0x70, 0xb7, 0x4b, 0x38, 0xd2, 0x55, 0x96, 0xa1, 0xd6, 0xed, 0x14, 0x5e, 0x74,
	0xe0, 0xb5, 0x94, 0x05, 0xed, 0xc4, 0xc3, 0xc7, 0x10, 0xfd, 0xec, 0xdd, 0xa4, 0x58, 0x7c, 0x7f,
	0x40, 0x6d, 0xc8, 0x39, 0x38, 0x82, 0xef, 0xb9, 0x7a, 0x8e, 0xe0, 0xe4, 0x02, 0xfc, 0x0d, 0xd3,
	0x1a, 0xf9, 0xa0, 0x89, 0x56, 0xfb, 0x27, 0x19, 0xf7, 0xb0, 0x64, 0xae, 0xe7, 0x5f, 0xaf, 0x72,
	0x61, 0x56, 0xd5, 0x32, 0xce, 0x64, 0x99, 0x50, 0xb9, 0x94, 0x26, 0x35, 0x15, 0x17, 0x32, 0x69,
	0x76, 0xbe, 0x29, 0x75, 0x9e, 0xd4, 0x5f, 0xff, 0x0e, 0x97, 0xbe, 0x7d, 0x3a, 0x6f, 0xff, 0x04,
	0x00, 0x00, 0xff, 0xff, 0xb9, 0x23, 0x86, 0x4a, 0xa7, 0x03, 0x00, 0x00,
}
