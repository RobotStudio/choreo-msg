// Code generated by protoc-gen-go. DO NOT EDIT.
// source: sensor/camera.proto

/*
Package sensor is a generated protocol buffer package.

It is generated from these files:
	sensor/camera.proto

It has these top-level messages:
	RegionOfInterest
	CameraInfo
	ChannelFloat32
	CompressedImage
	Image
	ColorRGBA
*/
package sensor

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"
import choreo "github.com/RobotStudio/choreo-msg/msg/primitive"
import choreo1 "github.com/RobotStudio/choreo-msg/msg/primitive"
import choreo2 "github.com/RobotStudio/choreo-msg/msg/primitive"
import choreo3 "github.com/RobotStudio/choreo-msg/msg/primitive"
import choreo4 "github.com/RobotStudio/choreo-msg/msg/primitive"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion2 // please upgrade the proto package

type RegionOfInterest struct {
	XOffset   *choreo3.UInt32 `protobuf:"bytes,1,opt,name=x_offset,json=xOffset" json:"x_offset,omitempty"`
	YOffset   *choreo3.UInt32 `protobuf:"bytes,2,opt,name=y_offset,json=yOffset" json:"y_offset,omitempty"`
	Height    *choreo3.UInt32 `protobuf:"bytes,3,opt,name=height" json:"height,omitempty"`
	Width     *choreo3.UInt32 `protobuf:"bytes,4,opt,name=width" json:"width,omitempty"`
	DoRectify *choreo.Bool    `protobuf:"bytes,5,opt,name=do_rectify,json=doRectify" json:"do_rectify,omitempty"`
}

func (m *RegionOfInterest) Reset()                    { *m = RegionOfInterest{} }
func (m *RegionOfInterest) String() string            { return proto.CompactTextString(m) }
func (*RegionOfInterest) ProtoMessage()               {}
func (*RegionOfInterest) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{0} }

func (m *RegionOfInterest) GetXOffset() *choreo3.UInt32 {
	if m != nil {
		return m.XOffset
	}
	return nil
}

func (m *RegionOfInterest) GetYOffset() *choreo3.UInt32 {
	if m != nil {
		return m.YOffset
	}
	return nil
}

func (m *RegionOfInterest) GetHeight() *choreo3.UInt32 {
	if m != nil {
		return m.Height
	}
	return nil
}

func (m *RegionOfInterest) GetWidth() *choreo3.UInt32 {
	if m != nil {
		return m.Width
	}
	return nil
}

func (m *RegionOfInterest) GetDoRectify() *choreo.Bool {
	if m != nil {
		return m.DoRectify
	}
	return nil
}

type CameraInfo struct {
	Header          *choreo2.Header    `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	Height          *choreo3.UInt32    `protobuf:"bytes,2,opt,name=height" json:"height,omitempty"`
	Width           *choreo3.UInt32    `protobuf:"bytes,3,opt,name=width" json:"width,omitempty"`
	DistortionModel *choreo4.String    `protobuf:"bytes,4,opt,name=distortion_model,json=distortionModel" json:"distortion_model,omitempty"`
	D               []*choreo1.Float64 `protobuf:"bytes,5,rep,name=D" json:"D,omitempty"`
	K               []*choreo1.Float64 `protobuf:"bytes,6,rep,name=K" json:"K,omitempty"`
	P               []*choreo1.Float64 `protobuf:"bytes,7,rep,name=P" json:"P,omitempty"`
	BinningX        *choreo3.UInt32    `protobuf:"bytes,8,opt,name=binning_x,json=binningX" json:"binning_x,omitempty"`
	BinningY        *choreo3.UInt32    `protobuf:"bytes,9,opt,name=binning_y,json=binningY" json:"binning_y,omitempty"`
	Roi             *RegionOfInterest  `protobuf:"bytes,10,opt,name=roi" json:"roi,omitempty"`
}

func (m *CameraInfo) Reset()                    { *m = CameraInfo{} }
func (m *CameraInfo) String() string            { return proto.CompactTextString(m) }
func (*CameraInfo) ProtoMessage()               {}
func (*CameraInfo) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{1} }

func (m *CameraInfo) GetHeader() *choreo2.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *CameraInfo) GetHeight() *choreo3.UInt32 {
	if m != nil {
		return m.Height
	}
	return nil
}

func (m *CameraInfo) GetWidth() *choreo3.UInt32 {
	if m != nil {
		return m.Width
	}
	return nil
}

func (m *CameraInfo) GetDistortionModel() *choreo4.String {
	if m != nil {
		return m.DistortionModel
	}
	return nil
}

func (m *CameraInfo) GetD() []*choreo1.Float64 {
	if m != nil {
		return m.D
	}
	return nil
}

func (m *CameraInfo) GetK() []*choreo1.Float64 {
	if m != nil {
		return m.K
	}
	return nil
}

func (m *CameraInfo) GetP() []*choreo1.Float64 {
	if m != nil {
		return m.P
	}
	return nil
}

func (m *CameraInfo) GetBinningX() *choreo3.UInt32 {
	if m != nil {
		return m.BinningX
	}
	return nil
}

func (m *CameraInfo) GetBinningY() *choreo3.UInt32 {
	if m != nil {
		return m.BinningY
	}
	return nil
}

func (m *CameraInfo) GetRoi() *RegionOfInterest {
	if m != nil {
		return m.Roi
	}
	return nil
}

type ChannelFloat32 struct {
	Name   *choreo4.String    `protobuf:"bytes,1,opt,name=name" json:"name,omitempty"`
	Values []*choreo1.Float32 `protobuf:"bytes,2,rep,name=values" json:"values,omitempty"`
}

func (m *ChannelFloat32) Reset()                    { *m = ChannelFloat32{} }
func (m *ChannelFloat32) String() string            { return proto.CompactTextString(m) }
func (*ChannelFloat32) ProtoMessage()               {}
func (*ChannelFloat32) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{2} }

func (m *ChannelFloat32) GetName() *choreo4.String {
	if m != nil {
		return m.Name
	}
	return nil
}

func (m *ChannelFloat32) GetValues() []*choreo1.Float32 {
	if m != nil {
		return m.Values
	}
	return nil
}

type CompressedImage struct {
	Header *choreo2.Header   `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	Format *choreo4.String   `protobuf:"bytes,2,opt,name=format" json:"format,omitempty"`
	Data   []*choreo3.UInt32 `protobuf:"bytes,3,rep,name=data" json:"data,omitempty"`
}

func (m *CompressedImage) Reset()                    { *m = CompressedImage{} }
func (m *CompressedImage) String() string            { return proto.CompactTextString(m) }
func (*CompressedImage) ProtoMessage()               {}
func (*CompressedImage) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{3} }

func (m *CompressedImage) GetHeader() *choreo2.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *CompressedImage) GetFormat() *choreo4.String {
	if m != nil {
		return m.Format
	}
	return nil
}

func (m *CompressedImage) GetData() []*choreo3.UInt32 {
	if m != nil {
		return m.Data
	}
	return nil
}

type Image struct {
	Header      *choreo2.Header   `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	Height      *choreo3.UInt32   `protobuf:"bytes,2,opt,name=height" json:"height,omitempty"`
	Width       *choreo3.UInt32   `protobuf:"bytes,3,opt,name=width" json:"width,omitempty"`
	Encoding    *choreo4.String   `protobuf:"bytes,4,opt,name=encoding" json:"encoding,omitempty"`
	IsBigendian *choreo.Bool      `protobuf:"bytes,5,opt,name=is_bigendian,json=isBigendian" json:"is_bigendian,omitempty"`
	Step        *choreo3.UInt32   `protobuf:"bytes,6,opt,name=step" json:"step,omitempty"`
	Data        []*choreo3.UInt32 `protobuf:"bytes,7,rep,name=data" json:"data,omitempty"`
}

func (m *Image) Reset()                    { *m = Image{} }
func (m *Image) String() string            { return proto.CompactTextString(m) }
func (*Image) ProtoMessage()               {}
func (*Image) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{4} }

func (m *Image) GetHeader() *choreo2.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *Image) GetHeight() *choreo3.UInt32 {
	if m != nil {
		return m.Height
	}
	return nil
}

func (m *Image) GetWidth() *choreo3.UInt32 {
	if m != nil {
		return m.Width
	}
	return nil
}

func (m *Image) GetEncoding() *choreo4.String {
	if m != nil {
		return m.Encoding
	}
	return nil
}

func (m *Image) GetIsBigendian() *choreo.Bool {
	if m != nil {
		return m.IsBigendian
	}
	return nil
}

func (m *Image) GetStep() *choreo3.UInt32 {
	if m != nil {
		return m.Step
	}
	return nil
}

func (m *Image) GetData() []*choreo3.UInt32 {
	if m != nil {
		return m.Data
	}
	return nil
}

type ColorRGBA struct {
	R *choreo1.Float32 `protobuf:"bytes,1,opt,name=r" json:"r,omitempty"`
	G *choreo1.Float32 `protobuf:"bytes,2,opt,name=g" json:"g,omitempty"`
	B *choreo1.Float32 `protobuf:"bytes,3,opt,name=b" json:"b,omitempty"`
	A *choreo1.Float32 `protobuf:"bytes,4,opt,name=a" json:"a,omitempty"`
}

func (m *ColorRGBA) Reset()                    { *m = ColorRGBA{} }
func (m *ColorRGBA) String() string            { return proto.CompactTextString(m) }
func (*ColorRGBA) ProtoMessage()               {}
func (*ColorRGBA) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{5} }

func (m *ColorRGBA) GetR() *choreo1.Float32 {
	if m != nil {
		return m.R
	}
	return nil
}

func (m *ColorRGBA) GetG() *choreo1.Float32 {
	if m != nil {
		return m.G
	}
	return nil
}

func (m *ColorRGBA) GetB() *choreo1.Float32 {
	if m != nil {
		return m.B
	}
	return nil
}

func (m *ColorRGBA) GetA() *choreo1.Float32 {
	if m != nil {
		return m.A
	}
	return nil
}

func init() {
	proto.RegisterType((*RegionOfInterest)(nil), "choreo.RegionOfInterest")
	proto.RegisterType((*CameraInfo)(nil), "choreo.CameraInfo")
	proto.RegisterType((*ChannelFloat32)(nil), "choreo.ChannelFloat32")
	proto.RegisterType((*CompressedImage)(nil), "choreo.CompressedImage")
	proto.RegisterType((*Image)(nil), "choreo.Image")
	proto.RegisterType((*ColorRGBA)(nil), "choreo.ColorRGBA")
}

func init() { proto.RegisterFile("sensor/camera.proto", fileDescriptor0) }

var fileDescriptor0 = []byte{
	// 588 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xac, 0x94, 0x61, 0x6b, 0xd3, 0x40,
	0x18, 0xc7, 0x49, 0xb3, 0x66, 0xed, 0x6d, 0x6c, 0x23, 0x53, 0x39, 0x06, 0xc2, 0x08, 0xa2, 0x73,
	0xd3, 0x06, 0x3a, 0x11, 0x7c, 0x69, 0x3b, 0xd4, 0x32, 0x64, 0x23, 0x43, 0x50, 0x41, 0xca, 0xa5,
	0xb9, 0x24, 0x07, 0xc9, 0x3d, 0xe5, 0xee, 0x36, 0xd7, 0x0f, 0x20, 0x7e, 0x0d, 0xf1, 0xab, 0xf9,
	0x45, 0xe4, 0x2e, 0x97, 0x75, 0xb4, 0x59, 0x71, 0xe0, 0x8b, 0xbe, 0x79, 0x7e, 0x3f, 0xe8, 0xff,
	0xfe, 0xf7, 0xe4, 0xd0, 0xae, 0xa4, 0x5c, 0x82, 0x08, 0x27, 0xa4, 0xa4, 0x82, 0xf4, 0xa6, 0x02,
	0x14, 0xf8, 0xde, 0x24, 0x07, 0x41, 0x61, 0xef, 0xc1, 0x54, 0xb0, 0x92, 0x29, 0x76, 0x45, 0xc3,
	0x18, 0xa0, 0xa8, 0xe8, 0xde, 0xc3, 0xf9, 0x34, 0x2d, 0x80, 0x28, 0x3b, 0x7e, 0x34, 0x1f, 0xe7,
	0x94, 0x24, 0x54, 0xd8, 0xf9, 0xee, 0x7c, 0xce, 0x78, 0x83, 0x2c, 0x95, 0x60, 0x3c, 0xab, 0xe6,
	0xc1, 0x1f, 0x07, 0xed, 0x44, 0x34, 0x63, 0xc0, 0xcf, 0xd2, 0x11, 0x57, 0x54, 0x50, 0xa9, 0xfc,
	0xe7, 0xa8, 0x73, 0x3d, 0x86, 0x34, 0x95, 0x54, 0x61, 0x67, 0xdf, 0x39, 0xd8, 0xe8, 0x6f, 0xf5,
	0xaa, 0x84, 0xbd, 0x4f, 0x23, 0xae, 0x8e, 0xfb, 0xd1, 0xfa, 0xf5, 0x99, 0xc1, 0x5a, 0x9d, 0xd5,
	0x6a, 0xab, 0x59, 0x9d, 0x59, 0xf5, 0x29, 0xf2, 0x72, 0xca, 0xb2, 0x5c, 0x61, 0xb7, 0x51, 0xb4,
	0xd4, 0x7f, 0x82, 0xda, 0xdf, 0x59, 0xa2, 0x72, 0xbc, 0xd6, 0xa8, 0x55, 0xd0, 0x3f, 0x42, 0x28,
	0x81, 0xb1, 0xa0, 0x13, 0xc5, 0xd2, 0x19, 0x6e, 0x1b, 0x75, 0xb3, 0x56, 0x07, 0x00, 0x45, 0xd4,
	0x4d, 0x20, 0xaa, 0x70, 0xf0, 0xcb, 0x45, 0x68, 0x68, 0x0a, 0x1f, 0xf1, 0x14, 0xaa, 0x24, 0xba,
	0xb1, 0xc5, 0xd3, 0x7d, 0x30, 0xd3, 0xc8, 0xd2, 0x5b, 0x89, 0x5b, 0xff, 0x96, 0xd8, 0x5d, 0x95,
	0xf8, 0x0d, 0xda, 0x49, 0x98, 0x54, 0x20, 0x14, 0x03, 0x3e, 0x2e, 0x21, 0xa1, 0xc5, 0xe2, 0x11,
	0x2f, 0xcc, 0xd5, 0x44, 0xdb, 0x73, 0xef, 0xa3, 0xd6, 0xfc, 0xc7, 0xc8, 0x39, 0xc1, 0xed, 0x7d,
	0xf7, 0x60, 0xa3, 0xbf, 0x5d, 0xbb, 0xef, 0xf4, 0x2a, 0xbc, 0x7e, 0x15, 0x39, 0x27, 0x1a, 0x9f,
	0x62, 0xef, 0x0e, 0x7c, 0xaa, 0xf1, 0x39, 0x5e, 0xbf, 0x03, 0x9f, 0xfb, 0x47, 0xa8, 0x1b, 0x33,
	0xce, 0x19, 0xcf, 0xc6, 0xd7, 0xb8, 0xd3, 0x78, 0x82, 0x8e, 0x15, 0x3e, 0xdf, 0x96, 0x67, 0xb8,
	0xbb, 0x52, 0xfe, 0xe2, 0x1f, 0x22, 0x57, 0x00, 0xc3, 0xc8, 0x68, 0xb8, 0xd6, 0x16, 0xd7, 0x2d,
	0xd2, 0x52, 0xf0, 0x0d, 0x6d, 0x0d, 0x73, 0xc2, 0x39, 0x2d, 0x4c, 0xb4, 0xe3, 0xbe, 0x1f, 0xa0,
	0x35, 0x4e, 0x4a, 0xba, 0x78, 0x47, 0xb6, 0x23, 0xc3, 0xfc, 0x67, 0xc8, 0xbb, 0x22, 0xc5, 0x25,
	0x95, 0xb8, 0xd5, 0x70, 0x3e, 0x7d, 0x45, 0x15, 0x0e, 0x7e, 0x38, 0x68, 0x7b, 0x08, 0xe5, 0x54,
	0x50, 0x29, 0x69, 0x32, 0x2a, 0x49, 0x46, 0xef, 0xb3, 0x06, 0x29, 0x88, 0x92, 0x2c, 0xad, 0x81,
	0x8d, 0x62, 0xa9, 0x0e, 0x9c, 0x10, 0x45, 0xb0, 0x6b, 0xa2, 0x2c, 0xd6, 0x62, 0x58, 0xf0, 0xbb,
	0x85, 0xda, 0xf7, 0xfe, 0xf7, 0xff, 0xb8, 0x84, 0x87, 0xa8, 0x43, 0xf9, 0x04, 0x12, 0xc6, 0xb3,
	0x3b, 0x96, 0xef, 0x86, 0xfb, 0x21, 0xda, 0x64, 0x72, 0x1c, 0xb3, 0x8c, 0xf2, 0x84, 0x11, 0xde,
	0xf8, 0x91, 0x6d, 0x30, 0x39, 0xa8, 0x05, 0x5d, 0x80, 0x54, 0x74, 0x8a, 0xbd, 0xc6, 0x04, 0x86,
	0xdd, 0x94, 0xb4, 0xbe, 0xa2, 0xa4, 0x9f, 0x0e, 0xea, 0x0e, 0xa1, 0x00, 0x11, 0xbd, 0x1f, 0xbc,
	0xd5, 0xeb, 0x5b, 0x77, 0xb4, 0x74, 0xbd, 0x8e, 0xd0, 0x38, 0xb3, 0xd5, 0x2c, 0xe3, 0x4c, 0xe3,
	0xd8, 0x56, 0xb2, 0x8c, 0x63, 0x8d, 0x89, 0x2d, 0x62, 0x19, 0x93, 0x41, 0xef, 0xeb, 0x8b, 0x8c,
	0xa9, 0xfc, 0x32, 0xee, 0x4d, 0xa0, 0x0c, 0x23, 0x88, 0x41, 0x5d, 0xa8, 0xcb, 0x84, 0x41, 0x58,
	0xb9, 0x2f, 0x4b, 0x99, 0x85, 0xfa, 0x57, 0xbd, 0xea, 0xb1, 0x67, 0x5e, 0xd5, 0xe3, 0xbf, 0x01,
	0x00, 0x00, 0xff, 0xff, 0x1d, 0x32, 0xca, 0xa1, 0xe6, 0x05, 0x00, 0x00,
}
