// Code generated by protoc-gen-go. DO NOT EDIT.
// source: action/action.proto

/*
Package msg is a generated protocol buffer package.

It is generated from these files:
	action/action.proto

It has these top-level messages:
	GoalID
	GoalStatus
	GoalStatusArray
*/
package msg

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"
import google_protobuf "github.com/golang/protobuf/ptypes/timestamp"
import choreo "github.com/RobotStudio/choreo-msg/msg/primitive"
import choreo1 "github.com/RobotStudio/choreo-msg/msg/primitive"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion2 // please upgrade the proto package

type GoalStatus_GoalStatusType int32

const (
	GoalStatus_PENDING    GoalStatus_GoalStatusType = 0
	GoalStatus_ACTIVE     GoalStatus_GoalStatusType = 1
	GoalStatus_PREEMPTED  GoalStatus_GoalStatusType = 2
	GoalStatus_SUCCEEDED  GoalStatus_GoalStatusType = 3
	GoalStatus_ABORTED    GoalStatus_GoalStatusType = 4
	GoalStatus_REJECTED   GoalStatus_GoalStatusType = 5
	GoalStatus_PREEMPTING GoalStatus_GoalStatusType = 6
	GoalStatus_RECALLING  GoalStatus_GoalStatusType = 7
	GoalStatus_RECALLED   GoalStatus_GoalStatusType = 8
	GoalStatus_LOST       GoalStatus_GoalStatusType = 9
)

var GoalStatus_GoalStatusType_name = map[int32]string{
	0: "PENDING",
	1: "ACTIVE",
	2: "PREEMPTED",
	3: "SUCCEEDED",
	4: "ABORTED",
	5: "REJECTED",
	6: "PREEMPTING",
	7: "RECALLING",
	8: "RECALLED",
	9: "LOST",
}
var GoalStatus_GoalStatusType_value = map[string]int32{
	"PENDING":    0,
	"ACTIVE":     1,
	"PREEMPTED":  2,
	"SUCCEEDED":  3,
	"ABORTED":    4,
	"REJECTED":   5,
	"PREEMPTING": 6,
	"RECALLING":  7,
	"RECALLED":   8,
	"LOST":       9,
}

func (x GoalStatus_GoalStatusType) String() string {
	return proto.EnumName(GoalStatus_GoalStatusType_name, int32(x))
}
func (GoalStatus_GoalStatusType) EnumDescriptor() ([]byte, []int) { return fileDescriptor0, []int{1, 0} }

type GoalID struct {
	Stamp *google_protobuf.Timestamp `protobuf:"bytes,1,opt,name=stamp" json:"stamp,omitempty"`
	Id    *choreo1.String            `protobuf:"bytes,2,opt,name=id" json:"id,omitempty"`
}

func (m *GoalID) Reset()                    { *m = GoalID{} }
func (m *GoalID) String() string            { return proto.CompactTextString(m) }
func (*GoalID) ProtoMessage()               {}
func (*GoalID) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{0} }

func (m *GoalID) GetStamp() *google_protobuf.Timestamp {
	if m != nil {
		return m.Stamp
	}
	return nil
}

func (m *GoalID) GetId() *choreo1.String {
	if m != nil {
		return m.Id
	}
	return nil
}

type GoalStatus struct {
	GoalId *GoalID                   `protobuf:"bytes,1,opt,name=goal_id,json=goalId" json:"goal_id,omitempty"`
	Status GoalStatus_GoalStatusType `protobuf:"varint,2,opt,name=status,enum=choreo.GoalStatus_GoalStatusType" json:"status,omitempty"`
	Text   *choreo1.String           `protobuf:"bytes,3,opt,name=text" json:"text,omitempty"`
}

func (m *GoalStatus) Reset()                    { *m = GoalStatus{} }
func (m *GoalStatus) String() string            { return proto.CompactTextString(m) }
func (*GoalStatus) ProtoMessage()               {}
func (*GoalStatus) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{1} }

func (m *GoalStatus) GetGoalId() *GoalID {
	if m != nil {
		return m.GoalId
	}
	return nil
}

func (m *GoalStatus) GetStatus() GoalStatus_GoalStatusType {
	if m != nil {
		return m.Status
	}
	return GoalStatus_PENDING
}

func (m *GoalStatus) GetText() *choreo1.String {
	if m != nil {
		return m.Text
	}
	return nil
}

type GoalStatusArray struct {
	Header     *choreo.Header `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	StatusList []*GoalStatus  `protobuf:"bytes,2,rep,name=status_list,json=statusList" json:"status_list,omitempty"`
}

func (m *GoalStatusArray) Reset()                    { *m = GoalStatusArray{} }
func (m *GoalStatusArray) String() string            { return proto.CompactTextString(m) }
func (*GoalStatusArray) ProtoMessage()               {}
func (*GoalStatusArray) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{2} }

func (m *GoalStatusArray) GetHeader() *choreo.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *GoalStatusArray) GetStatusList() []*GoalStatus {
	if m != nil {
		return m.StatusList
	}
	return nil
}

func init() {
	proto.RegisterType((*GoalID)(nil), "choreo.GoalID")
	proto.RegisterType((*GoalStatus)(nil), "choreo.GoalStatus")
	proto.RegisterType((*GoalStatusArray)(nil), "choreo.GoalStatusArray")
	proto.RegisterEnum("choreo.GoalStatus_GoalStatusType", GoalStatus_GoalStatusType_name, GoalStatus_GoalStatusType_value)
}

func init() { proto.RegisterFile("action/action.proto", fileDescriptor0) }

var fileDescriptor0 = []byte{
	// 425 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x6c, 0x92, 0xc1, 0x6e, 0xd3, 0x40,
	0x10, 0x86, 0x89, 0x93, 0x6e, 0xd2, 0x09, 0x04, 0x6b, 0x91, 0x50, 0x94, 0x03, 0x14, 0x4b, 0xd0,
	0x5e, 0xb0, 0x51, 0x7a, 0xe2, 0x98, 0xda, 0xab, 0x12, 0x64, 0xda, 0x68, 0x6d, 0x38, 0xf4, 0x52,
	0xd9, 0xf1, 0xe2, 0xac, 0x64, 0x67, 0x2d, 0xef, 0x1a, 0xd1, 0x47, 0xe1, 0x2d, 0x78, 0x44, 0xb4,
	0xbb, 0x2e, 0x14, 0xc2, 0xc9, 0x9e, 0x99, 0xff, 0xfb, 0xe7, 0xd7, 0xd8, 0xf0, 0x2c, 0xdb, 0x2a,
	0x2e, 0xf6, 0x81, 0x7d, 0xf8, 0x4d, 0x2b, 0x94, 0xc0, 0x68, 0xbb, 0x13, 0x2d, 0x13, 0x8b, 0x97,
	0xa5, 0x10, 0x65, 0xc5, 0x02, 0xd3, 0xcd, 0xbb, 0xaf, 0x81, 0xe2, 0x35, 0x93, 0x2a, 0xab, 0x1b,
	0x2b, 0x5c, 0x3c, 0x6f, 0x5a, 0x5e, 0x73, 0xc5, 0xbf, 0xb1, 0x60, 0xc7, 0xb2, 0x82, 0xb5, 0x87,
	0x7d, 0xa9, 0x5a, 0xbe, 0x2f, 0x6d, 0xdf, 0xbb, 0x01, 0x74, 0x29, 0xb2, 0x6a, 0x1d, 0xe1, 0x77,
	0x70, 0x64, 0x8c, 0xe6, 0x83, 0x93, 0xc1, 0xd9, 0x74, 0xb9, 0xf0, 0xed, 0x2a, 0xff, 0x7e, 0x95,
	0x9f, 0xde, 0xaf, 0xa2, 0x56, 0x88, 0x5f, 0x80, 0xc3, 0x8b, 0xb9, 0x63, 0xe4, 0x33, 0xdf, 0x26,
	0xf4, 0x13, 0xe3, 0x4e, 0x1d, 0x5e, 0x78, 0x3f, 0x1d, 0x00, 0x6d, 0x9e, 0xa8, 0x4c, 0x75, 0x12,
	0x9f, 0xc2, 0xb8, 0x14, 0x59, 0x75, 0xcb, 0x8b, 0x7e, 0xc5, 0x6f, 0xc6, 0x26, 0xa0, 0x48, 0x8f,
	0xd7, 0x05, 0x7e, 0x0f, 0x48, 0x1a, 0xc4, 0x78, 0xcf, 0x96, 0xaf, 0x1e, 0xea, 0xac, 0xd9, 0x83,
	0xd7, 0xf4, 0xae, 0x61, 0xb4, 0x07, 0xb0, 0x07, 0x23, 0xc5, 0xbe, 0xab, 0xf9, 0xf0, 0xbf, 0xa1,
	0xcc, 0xcc, 0xfb, 0x31, 0x80, 0xd9, 0xdf, 0x38, 0x9e, 0xc2, 0x78, 0x43, 0xae, 0xa2, 0xf5, 0xd5,
	0xa5, 0xfb, 0x08, 0x03, 0xa0, 0x55, 0x98, 0xae, 0xbf, 0x10, 0x77, 0x80, 0x9f, 0xc0, 0xf1, 0x86,
	0x12, 0xf2, 0x69, 0x93, 0x92, 0xc8, 0x75, 0x74, 0x99, 0x7c, 0x0e, 0x43, 0x42, 0x22, 0x12, 0xb9,
	0x43, 0x8d, 0xad, 0x2e, 0xae, 0xa9, 0x9e, 0x8d, 0xf0, 0x63, 0x98, 0x50, 0xf2, 0x91, 0x84, 0xba,
	0x3a, 0xc2, 0x33, 0x80, 0x1e, 0xd4, 0xa6, 0x48, 0x93, 0x94, 0x84, 0xab, 0x38, 0xd6, 0xe5, 0xd8,
	0x8a, 0x75, 0x49, 0x22, 0x77, 0x82, 0x27, 0x30, 0x8a, 0xaf, 0x93, 0xd4, 0x3d, 0xf6, 0xf6, 0xf0,
	0xf4, 0x4f, 0xb4, 0x55, 0xdb, 0x66, 0x77, 0xf8, 0x0d, 0x20, 0xfb, 0x25, 0xff, 0xbd, 0xda, 0x07,
	0xd3, 0xa5, 0xfd, 0x14, 0x9f, 0xc3, 0xd4, 0x1e, 0xe1, 0xb6, 0xe2, 0x52, 0xcd, 0x9d, 0x93, 0xe1,
	0xd9, 0x74, 0x89, 0x0f, 0x4f, 0x47, 0xc1, 0xca, 0x62, 0x2e, 0xd5, 0xc5, 0xe9, 0xcd, 0xeb, 0x92,
	0xab, 0x5d, 0x97, 0xfb, 0x5b, 0x51, 0x07, 0x54, 0xe4, 0x42, 0x25, 0xaa, 0x2b, 0xb8, 0x08, 0x2c,
	0xf7, 0xb6, 0x96, 0x65, 0x50, 0xcb, 0x32, 0x47, 0xe6, 0x37, 0x38, 0xff, 0x15, 0x00, 0x00, 0xff,
	0xff, 0x40, 0xf4, 0xfc, 0x84, 0x9e, 0x02, 0x00, 0x00,
}
