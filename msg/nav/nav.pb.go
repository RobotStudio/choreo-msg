// Code generated by protoc-gen-go. DO NOT EDIT.
// source: nav/nav.proto

/*
Package choreo is a generated protocol buffer package.

It is generated from these files:
	nav/nav.proto

It has these top-level messages:
	GridCells
	MapMetaData
	OccupancyGrid
	Odometry
	Path
	GetPlanRequest
	SetMapRequest
*/
package choreo

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"
import google_protobuf "github.com/golang/protobuf/ptypes/timestamp"
import choreo1 "primitive"
import choreo2 "primitive"
import choreo3 "primitive"
import choreo4 "primitive"
import choreo5 "primitive"
import choreo6 "geometric"
import choreo8 "geometric"
import choreo10 "geometric"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion2 // please upgrade the proto package

type GridCells struct {
	Header     *choreo3.Header  `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	CellWidth  *choreo2.Float64 `protobuf:"bytes,2,opt,name=cell_width,json=cellWidth" json:"cell_width,omitempty"`
	CellHeight *choreo2.Float64 `protobuf:"bytes,3,opt,name=cell_height,json=cellHeight" json:"cell_height,omitempty"`
	Cells      []*choreo6.Point `protobuf:"bytes,4,rep,name=cells" json:"cells,omitempty"`
}

func (m *GridCells) Reset()                    { *m = GridCells{} }
func (m *GridCells) String() string            { return proto.CompactTextString(m) }
func (*GridCells) ProtoMessage()               {}
func (*GridCells) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{0} }

func (m *GridCells) GetHeader() *choreo3.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *GridCells) GetCellWidth() *choreo2.Float64 {
	if m != nil {
		return m.CellWidth
	}
	return nil
}

func (m *GridCells) GetCellHeight() *choreo2.Float64 {
	if m != nil {
		return m.CellHeight
	}
	return nil
}

func (m *GridCells) GetCells() []*choreo6.Point {
	if m != nil {
		return m.Cells
	}
	return nil
}

type MapMetaData struct {
	MapLoadTime *google_protobuf.Timestamp `protobuf:"bytes,1,opt,name=map_load_time,json=mapLoadTime" json:"map_load_time,omitempty"`
	Resolution  *choreo2.Float32           `protobuf:"bytes,2,opt,name=resolution" json:"resolution,omitempty"`
	Width       *choreo4.UInt32            `protobuf:"bytes,3,opt,name=width" json:"width,omitempty"`
	Height      *choreo4.UInt32            `protobuf:"bytes,4,opt,name=height" json:"height,omitempty"`
	Origin      *choreo8.Pose              `protobuf:"bytes,5,opt,name=origin" json:"origin,omitempty"`
}

func (m *MapMetaData) Reset()                    { *m = MapMetaData{} }
func (m *MapMetaData) String() string            { return proto.CompactTextString(m) }
func (*MapMetaData) ProtoMessage()               {}
func (*MapMetaData) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{1} }

func (m *MapMetaData) GetMapLoadTime() *google_protobuf.Timestamp {
	if m != nil {
		return m.MapLoadTime
	}
	return nil
}

func (m *MapMetaData) GetResolution() *choreo2.Float32 {
	if m != nil {
		return m.Resolution
	}
	return nil
}

func (m *MapMetaData) GetWidth() *choreo4.UInt32 {
	if m != nil {
		return m.Width
	}
	return nil
}

func (m *MapMetaData) GetHeight() *choreo4.UInt32 {
	if m != nil {
		return m.Height
	}
	return nil
}

func (m *MapMetaData) GetOrigin() *choreo8.Pose {
	if m != nil {
		return m.Origin
	}
	return nil
}

type OccupancyGrid struct {
	Header *choreo3.Header `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	Info   *MapMetaData    `protobuf:"bytes,2,opt,name=info" json:"info,omitempty"`
	Data   *choreo1.Bytes  `protobuf:"bytes,3,opt,name=data" json:"data,omitempty"`
}

func (m *OccupancyGrid) Reset()                    { *m = OccupancyGrid{} }
func (m *OccupancyGrid) String() string            { return proto.CompactTextString(m) }
func (*OccupancyGrid) ProtoMessage()               {}
func (*OccupancyGrid) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{2} }

func (m *OccupancyGrid) GetHeader() *choreo3.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *OccupancyGrid) GetInfo() *MapMetaData {
	if m != nil {
		return m.Info
	}
	return nil
}

func (m *OccupancyGrid) GetData() *choreo1.Bytes {
	if m != nil {
		return m.Data
	}
	return nil
}

type Odometry struct {
	Header       *choreo3.Header               `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	ChildFrameId *choreo5.String               `protobuf:"bytes,2,opt,name=child_frame_id,json=childFrameId" json:"child_frame_id,omitempty"`
	Pose         *choreo8.PoseWithCovariance   `protobuf:"bytes,3,opt,name=pose" json:"pose,omitempty"`
	Twist        *choreo10.TwistWithCovariance `protobuf:"bytes,4,opt,name=twist" json:"twist,omitempty"`
}

func (m *Odometry) Reset()                    { *m = Odometry{} }
func (m *Odometry) String() string            { return proto.CompactTextString(m) }
func (*Odometry) ProtoMessage()               {}
func (*Odometry) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{3} }

func (m *Odometry) GetHeader() *choreo3.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *Odometry) GetChildFrameId() *choreo5.String {
	if m != nil {
		return m.ChildFrameId
	}
	return nil
}

func (m *Odometry) GetPose() *choreo8.PoseWithCovariance {
	if m != nil {
		return m.Pose
	}
	return nil
}

func (m *Odometry) GetTwist() *choreo10.TwistWithCovariance {
	if m != nil {
		return m.Twist
	}
	return nil
}

type Path struct {
	Header *choreo3.Header `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	Poses  []*choreo8.Pose `protobuf:"bytes,2,rep,name=poses" json:"poses,omitempty"`
}

func (m *Path) Reset()                    { *m = Path{} }
func (m *Path) String() string            { return proto.CompactTextString(m) }
func (*Path) ProtoMessage()               {}
func (*Path) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{4} }

func (m *Path) GetHeader() *choreo3.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *Path) GetPoses() []*choreo8.Pose {
	if m != nil {
		return m.Poses
	}
	return nil
}

type GetPlanRequest struct {
	Start     *choreo8.PoseStamped `protobuf:"bytes,1,opt,name=start" json:"start,omitempty"`
	Goal      *choreo8.PoseStamped `protobuf:"bytes,2,opt,name=goal" json:"goal,omitempty"`
	Tolerance *choreo2.Float32     `protobuf:"bytes,3,opt,name=tolerance" json:"tolerance,omitempty"`
}

func (m *GetPlanRequest) Reset()                    { *m = GetPlanRequest{} }
func (m *GetPlanRequest) String() string            { return proto.CompactTextString(m) }
func (*GetPlanRequest) ProtoMessage()               {}
func (*GetPlanRequest) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{5} }

func (m *GetPlanRequest) GetStart() *choreo8.PoseStamped {
	if m != nil {
		return m.Start
	}
	return nil
}

func (m *GetPlanRequest) GetGoal() *choreo8.PoseStamped {
	if m != nil {
		return m.Goal
	}
	return nil
}

func (m *GetPlanRequest) GetTolerance() *choreo2.Float32 {
	if m != nil {
		return m.Tolerance
	}
	return nil
}

type SetMapRequest struct {
	Map         *OccupancyGrid                     `protobuf:"bytes,1,opt,name=map" json:"map,omitempty"`
	InitialPose *choreo8.PoseWithCovarianceStamped `protobuf:"bytes,2,opt,name=initial_pose,json=initialPose" json:"initial_pose,omitempty"`
}

func (m *SetMapRequest) Reset()                    { *m = SetMapRequest{} }
func (m *SetMapRequest) String() string            { return proto.CompactTextString(m) }
func (*SetMapRequest) ProtoMessage()               {}
func (*SetMapRequest) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{6} }

func (m *SetMapRequest) GetMap() *OccupancyGrid {
	if m != nil {
		return m.Map
	}
	return nil
}

func (m *SetMapRequest) GetInitialPose() *choreo8.PoseWithCovarianceStamped {
	if m != nil {
		return m.InitialPose
	}
	return nil
}

func init() {
	proto.RegisterType((*GridCells)(nil), "choreo.GridCells")
	proto.RegisterType((*MapMetaData)(nil), "choreo.MapMetaData")
	proto.RegisterType((*OccupancyGrid)(nil), "choreo.OccupancyGrid")
	proto.RegisterType((*Odometry)(nil), "choreo.Odometry")
	proto.RegisterType((*Path)(nil), "choreo.Path")
	proto.RegisterType((*GetPlanRequest)(nil), "choreo.GetPlanRequest")
	proto.RegisterType((*SetMapRequest)(nil), "choreo.SetMapRequest")
}

func init() { proto.RegisterFile("nav/nav.proto", fileDescriptor0) }

var fileDescriptor0 = []byte{
	// 631 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x8c, 0x93, 0xcd, 0x4e, 0xdb, 0x40,
	0x10, 0xc7, 0x65, 0xf2, 0xa1, 0x32, 0x21, 0x54, 0x5a, 0x4a, 0x15, 0xa5, 0x87, 0x82, 0x8b, 0x0a,
	0x3d, 0xd4, 0x69, 0x03, 0xea, 0xb1, 0x87, 0x82, 0xf8, 0x90, 0x8a, 0x40, 0x0b, 0x15, 0xc7, 0x68,
	0xb0, 0x37, 0xf6, 0x4a, 0x6b, 0xaf, 0xbb, 0xde, 0x04, 0x71, 0xe9, 0xa5, 0x8f, 0xd0, 0xb7, 0xe9,
	0x2b, 0xf4, 0x6d, 0xfa, 0x04, 0xd5, 0x7e, 0x98, 0x04, 0x48, 0x25, 0x8e, 0xf9, 0xcf, 0x6f, 0x36,
	0xf3, 0x9f, 0xff, 0x18, 0xba, 0x05, 0x4e, 0x07, 0x05, 0x4e, 0xa3, 0x52, 0x49, 0x2d, 0x49, 0x3b,
	0xce, 0xa4, 0x62, 0xb2, 0xff, 0x3a, 0x95, 0x32, 0x15, 0x6c, 0x60, 0xd5, 0xeb, 0xc9, 0x78, 0xa0,
	0x79, 0xce, 0x2a, 0x8d, 0x79, 0xe9, 0xc0, 0xfe, 0x7a, 0xa9, 0x78, 0xce, 0x35, 0x9f, 0xb2, 0xc1,
	0xf5, 0xad, 0x66, 0xd5, 0x63, 0x79, 0x2c, 0x24, 0x6a, 0x2f, 0xbf, 0x9c, 0xc9, 0x19, 0xc3, 0x84,
	0x29, 0xaf, 0xaf, 0xcd, 0x74, 0x5e, 0x2c, 0x80, 0x2b, 0xad, 0x78, 0x91, 0xd6, 0x6f, 0xa7, 0x4c,
	0xe6, 0x4c, 0x2b, 0x1e, 0x0f, 0x4a, 0x39, 0xc3, 0x5f, 0xcc, 0xcb, 0x15, 0x7b, 0x0c, 0xeb, 0x1b,
	0x5e, 0x79, 0x38, 0xfc, 0x1d, 0xc0, 0xf2, 0x91, 0xe2, 0xc9, 0x3e, 0x13, 0xa2, 0x22, 0x6f, 0xa1,
	0xed, 0xc6, 0xe9, 0x05, 0x1b, 0xc1, 0x4e, 0x67, 0xb8, 0x1a, 0x39, 0xfb, 0xd1, 0xb1, 0x55, 0xa9,
	0xaf, 0x92, 0x08, 0x20, 0x66, 0x42, 0x8c, 0x6e, 0x78, 0xa2, 0xb3, 0xde, 0x92, 0x65, 0x9f, 0xd7,
	0xec, 0xa1, 0xf1, 0xf9, 0x69, 0x8f, 0x2e, 0x1b, 0xe4, 0xca, 0x10, 0xe4, 0x03, 0x74, 0x2c, 0x9f,
	0x31, 0x9e, 0x66, 0xba, 0xd7, 0x58, 0xdc, 0x60, 0xdf, 0x3c, 0xb6, 0x08, 0x79, 0x03, 0x2d, 0xf3,
	0xab, 0xea, 0x35, 0x37, 0x1a, 0x3b, 0x9d, 0x61, 0xb7, 0x66, 0xcf, 0x8d, 0x51, 0xea, 0x6a, 0xe1,
	0xdf, 0x00, 0x3a, 0xa7, 0x58, 0x9e, 0x32, 0x8d, 0x07, 0xa8, 0x91, 0x7c, 0x86, 0x6e, 0x8e, 0xe5,
	0x48, 0x48, 0x4c, 0x46, 0x26, 0x1f, 0xef, 0xa2, 0x1f, 0xb9, 0xf0, 0xa2, 0x3a, 0xbc, 0xe8, 0xb2,
	0x0e, 0x8f, 0x76, 0x72, 0x2c, 0xbf, 0x4a, 0x4c, 0x8c, 0x42, 0x06, 0x00, 0x8a, 0x55, 0x52, 0x4c,
	0x34, 0x97, 0xc5, 0x42, 0x5b, 0xbb, 0x43, 0x3a, 0x87, 0x90, 0x2d, 0x68, 0xb9, 0x15, 0x34, 0xee,
	0xaf, 0xeb, 0xdb, 0x49, 0x61, 0x50, 0x57, 0x74, 0x5b, 0xb5, 0xc6, 0x9b, 0x0b, 0x31, 0x5f, 0x25,
	0x5b, 0xd0, 0x96, 0x8a, 0xa7, 0xbc, 0xe8, 0xb5, 0x2c, 0xb7, 0x32, 0x33, 0x5d, 0x31, 0xea, 0x6b,
	0xe1, 0xcf, 0x00, 0xba, 0x67, 0x71, 0x3c, 0x29, 0xb1, 0x88, 0x6f, 0x4d, 0x74, 0x4f, 0x4e, 0x6d,
	0x1b, 0x9a, 0xbc, 0x18, 0x4b, 0x6f, 0x6c, 0xad, 0xa6, 0xe6, 0x36, 0x48, 0x2d, 0x40, 0x36, 0xa1,
	0x99, 0xa0, 0x46, 0xef, 0xea, 0x6e, 0xf7, 0x5f, 0xcc, 0x5d, 0x53, 0x5b, 0x0a, 0xff, 0x04, 0xf0,
	0xec, 0x2c, 0xb1, 0x17, 0x75, 0xfb, 0xe4, 0x01, 0xf6, 0x60, 0x35, 0xce, 0xb8, 0x48, 0x46, 0x63,
	0x85, 0x39, 0x1b, 0xf1, 0xc4, 0x8f, 0x72, 0xc7, 0x5f, 0xd8, 0xf3, 0xa6, 0x2b, 0x96, 0x3a, 0x34,
	0xd0, 0x49, 0x42, 0x22, 0x68, 0x9a, 0x3b, 0xf6, 0xd3, 0xf4, 0xe7, 0x97, 0x72, 0xc5, 0x75, 0xb6,
	0x2f, 0xa7, 0xa8, 0x38, 0x16, 0x31, 0xa3, 0x96, 0x23, 0x1f, 0xa1, 0x65, 0x2f, 0xdc, 0x6f, 0xfb,
	0x55, 0xdd, 0x70, 0x69, 0xc4, 0x07, 0x1d, 0x8e, 0x0c, 0x29, 0x34, 0xcf, 0xb1, 0x4e, 0xea, 0x09,
	0x46, 0x42, 0x68, 0x99, 0xbf, 0xaa, 0x7a, 0x4b, 0xf6, 0x3a, 0xef, 0x07, 0xe5, 0x4a, 0xe1, 0xaf,
	0x00, 0x56, 0x8f, 0x98, 0x3e, 0x17, 0x58, 0x50, 0xf6, 0x7d, 0xc2, 0x2a, 0x4d, 0xde, 0x41, 0xab,
	0xd2, 0xa8, 0xb4, 0x7f, 0x7d, 0x6d, 0xbe, 0xed, 0xc2, 0x9c, 0x23, 0x4b, 0xa8, 0x23, 0x4c, 0x56,
	0xa9, 0x44, 0xf1, 0x30, 0xab, 0x79, 0xd2, 0x02, 0xe4, 0x3d, 0x2c, 0x6b, 0x29, 0x98, 0x32, 0x76,
	0x16, 0x7e, 0x58, 0xbb, 0x43, 0x3a, 0x23, 0xc2, 0x1f, 0xd0, 0xbd, 0x60, 0xfa, 0x14, 0xcb, 0x7a,
	0xa6, 0x6d, 0x68, 0xe4, 0x58, 0xfa, 0x89, 0xd6, 0xeb, 0xce, 0x7b, 0x07, 0x46, 0x0d, 0x41, 0x0e,
	0x60, 0x85, 0x17, 0x5c, 0x73, 0x14, 0x23, 0x1b, 0x87, 0x9b, 0x6c, 0xf3, 0xff, 0x71, 0xd4, 0x73,
	0x76, 0x7c, 0x9b, 0x21, 0xae, 0xdb, 0xf6, 0x1b, 0xdc, 0xfd, 0x17, 0x00, 0x00, 0xff, 0xff, 0x35,
	0x37, 0x86, 0xa3, 0x67, 0x05, 0x00, 0x00,
}