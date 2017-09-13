// Code generated by protoc-gen-go. DO NOT EDIT.
// source: sensor/basic.proto

/*
Package sensor is a generated protocol buffer package.

It is generated from these files:
	sensor/basic.proto

It has these top-level messages:
	FluidPressure
	Illuminance
	Humidity
	Temperature
	TimeReference
*/
package sensor

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"
import google_protobuf "github.com/golang/protobuf/ptypes/timestamp"
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

type FluidPressure struct {
	Header        *choreo1.Header `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	FluidPressure *choreo.Float64 `protobuf:"bytes,2,opt,name=fluid_pressure,json=fluidPressure" json:"fluid_pressure,omitempty"`
	Variance      *choreo.Float64 `protobuf:"bytes,3,opt,name=variance" json:"variance,omitempty"`
}

func (m *FluidPressure) Reset()                    { *m = FluidPressure{} }
func (m *FluidPressure) String() string            { return proto.CompactTextString(m) }
func (*FluidPressure) ProtoMessage()               {}
func (*FluidPressure) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{0} }

func (m *FluidPressure) GetHeader() *choreo1.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *FluidPressure) GetFluidPressure() *choreo.Float64 {
	if m != nil {
		return m.FluidPressure
	}
	return nil
}

func (m *FluidPressure) GetVariance() *choreo.Float64 {
	if m != nil {
		return m.Variance
	}
	return nil
}

type Illuminance struct {
	Header      *choreo1.Header `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	Illuminance *choreo.Float64 `protobuf:"bytes,2,opt,name=illuminance" json:"illuminance,omitempty"`
	Variance    *choreo.Float64 `protobuf:"bytes,3,opt,name=variance" json:"variance,omitempty"`
}

func (m *Illuminance) Reset()                    { *m = Illuminance{} }
func (m *Illuminance) String() string            { return proto.CompactTextString(m) }
func (*Illuminance) ProtoMessage()               {}
func (*Illuminance) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{1} }

func (m *Illuminance) GetHeader() *choreo1.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *Illuminance) GetIlluminance() *choreo.Float64 {
	if m != nil {
		return m.Illuminance
	}
	return nil
}

func (m *Illuminance) GetVariance() *choreo.Float64 {
	if m != nil {
		return m.Variance
	}
	return nil
}

type Humidity struct {
	Header           *choreo1.Header `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	RelativeHumidity *choreo.Float64 `protobuf:"bytes,2,opt,name=relative_humidity,json=relativeHumidity" json:"relative_humidity,omitempty"`
	Variance         *choreo.Float64 `protobuf:"bytes,3,opt,name=variance" json:"variance,omitempty"`
}

func (m *Humidity) Reset()                    { *m = Humidity{} }
func (m *Humidity) String() string            { return proto.CompactTextString(m) }
func (*Humidity) ProtoMessage()               {}
func (*Humidity) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{2} }

func (m *Humidity) GetHeader() *choreo1.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *Humidity) GetRelativeHumidity() *choreo.Float64 {
	if m != nil {
		return m.RelativeHumidity
	}
	return nil
}

func (m *Humidity) GetVariance() *choreo.Float64 {
	if m != nil {
		return m.Variance
	}
	return nil
}

type Temperature struct {
	Header      *choreo1.Header `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	Temperature *choreo.Float64 `protobuf:"bytes,2,opt,name=temperature" json:"temperature,omitempty"`
	Variance    *choreo.Float64 `protobuf:"bytes,3,opt,name=variance" json:"variance,omitempty"`
}

func (m *Temperature) Reset()                    { *m = Temperature{} }
func (m *Temperature) String() string            { return proto.CompactTextString(m) }
func (*Temperature) ProtoMessage()               {}
func (*Temperature) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{3} }

func (m *Temperature) GetHeader() *choreo1.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *Temperature) GetTemperature() *choreo.Float64 {
	if m != nil {
		return m.Temperature
	}
	return nil
}

func (m *Temperature) GetVariance() *choreo.Float64 {
	if m != nil {
		return m.Variance
	}
	return nil
}

type TimeReference struct {
	Header  *choreo1.Header            `protobuf:"bytes,1,opt,name=header" json:"header,omitempty"`
	TimeRef *google_protobuf.Timestamp `protobuf:"bytes,2,opt,name=time_ref,json=timeRef" json:"time_ref,omitempty"`
	Source  *choreo2.String            `protobuf:"bytes,3,opt,name=source" json:"source,omitempty"`
}

func (m *TimeReference) Reset()                    { *m = TimeReference{} }
func (m *TimeReference) String() string            { return proto.CompactTextString(m) }
func (*TimeReference) ProtoMessage()               {}
func (*TimeReference) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{4} }

func (m *TimeReference) GetHeader() *choreo1.Header {
	if m != nil {
		return m.Header
	}
	return nil
}

func (m *TimeReference) GetTimeRef() *google_protobuf.Timestamp {
	if m != nil {
		return m.TimeRef
	}
	return nil
}

func (m *TimeReference) GetSource() *choreo2.String {
	if m != nil {
		return m.Source
	}
	return nil
}

func init() {
	proto.RegisterType((*FluidPressure)(nil), "choreo.FluidPressure")
	proto.RegisterType((*Illuminance)(nil), "choreo.Illuminance")
	proto.RegisterType((*Humidity)(nil), "choreo.Humidity")
	proto.RegisterType((*Temperature)(nil), "choreo.Temperature")
	proto.RegisterType((*TimeReference)(nil), "choreo.TimeReference")
}

func init() { proto.RegisterFile("sensor/basic.proto", fileDescriptor0) }

var fileDescriptor0 = []byte{
	// 380 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x94, 0x93, 0xcd, 0x6a, 0xdb, 0x40,
	0x14, 0x85, 0x51, 0x0b, 0xae, 0x19, 0x61, 0xb7, 0x15, 0xb4, 0x18, 0x6f, 0x5a, 0xbc, 0x28, 0x85,
	0x36, 0x23, 0x9c, 0x1f, 0xaf, 0xb2, 0xca, 0xc2, 0x38, 0xbb, 0x20, 0x7b, 0x95, 0x8d, 0x19, 0x49,
	0x57, 0xd2, 0x05, 0x8d, 0x46, 0xcc, 0x8f, 0x21, 0x0f, 0x92, 0xac, 0x92, 0x77, 0x0d, 0xd2, 0x48,
	0xb2, 0x43, 0x62, 0xb0, 0x16, 0x5a, 0xe8, 0xcc, 0x39, 0x73, 0x3f, 0xe6, 0x72, 0x88, 0xa7, 0xa0,
	0x50, 0x42, 0xfa, 0x21, 0x53, 0x18, 0xd1, 0x52, 0x0a, 0x2d, 0xbc, 0x41, 0x94, 0x09, 0x09, 0x62,
	0xfa, 0x2b, 0x15, 0x22, 0xcd, 0xc1, 0xaf, 0xd5, 0xd0, 0x24, 0xbe, 0x46, 0x0e, 0x4a, 0x33, 0x5e,
	0x5a, 0xe3, 0xf4, 0x47, 0x29, 0x91, 0xa3, 0xc6, 0x1d, 0xf8, 0x49, 0x2e, 0x98, 0x6e, 0xe4, 0x9f,
	0x7b, 0x39, 0x03, 0x16, 0x83, 0x7c, 0xaf, 0x2b, 0x2d, 0xb1, 0x48, 0xad, 0x3e, 0x7b, 0x76, 0xc8,
	0x68, 0x99, 0x1b, 0x8c, 0xef, 0x24, 0x28, 0x65, 0x24, 0x78, 0x7f, 0xc8, 0xc0, 0x26, 0x27, 0xce,
	0x6f, 0xe7, 0xaf, 0x7b, 0x3e, 0xa6, 0x16, 0x89, 0xae, 0x6a, 0x35, 0x68, 0x4e, 0xbd, 0x05, 0x19,
	0x27, 0x55, 0x70, 0x5b, 0x36, 0xc9, 0xc9, 0xa7, 0xda, 0xff, 0xb5, 0xf5, 0x2f, 0x2b, 0xac, 0xc5,
	0x65, 0x30, 0x4a, 0xde, 0xdc, 0xff, 0x8f, 0x0c, 0x77, 0x4c, 0x22, 0x2b, 0x22, 0x98, 0x7c, 0xfe,
	0x38, 0xd1, 0x19, 0x66, 0x8f, 0x0e, 0x71, 0x6f, 0xf3, 0xdc, 0x70, 0x2c, 0xaa, 0xff, 0x93, 0xe1,
	0xe6, 0xc4, 0xc5, 0x7d, 0xec, 0x18, 0xd9, 0xa1, 0xa7, 0x1f, 0xd7, 0x8b, 0x43, 0x86, 0x2b, 0xc3,
	0x31, 0x46, 0xfd, 0x70, 0x32, 0xd4, 0x35, 0xf9, 0x2e, 0x21, 0x67, 0xd5, 0x12, 0xb6, 0x59, 0x13,
	0x3e, 0x86, 0xf6, 0xad, 0x75, 0x76, 0x53, 0x7a, 0xbf, 0xdb, 0x06, 0x78, 0x09, 0x92, 0xe9, 0x3e,
	0x4b, 0x9d, 0x13, 0x57, 0xef, 0x63, 0x47, 0xdf, 0xed, 0xc0, 0xd3, 0x8f, 0xeb, 0xc9, 0x21, 0xa3,
	0x0d, 0x72, 0x08, 0x20, 0x01, 0x09, 0x7d, 0x36, 0x7a, 0x45, 0x86, 0x55, 0x05, 0xb6, 0x12, 0x92,
	0x06, 0x6b, 0x4a, 0x6d, 0x47, 0x68, 0xdb, 0x11, 0xba, 0x69, 0x3b, 0x12, 0x7c, 0xd1, 0x76, 0x48,
	0x75, 0xbd, 0x12, 0x46, 0x76, 0x6c, 0xdd, 0xf5, 0xeb, 0xba, 0x05, 0x41, 0x73, 0x7a, 0x43, 0xef,
	0xff, 0xa7, 0xa8, 0x33, 0x13, 0xd2, 0x48, 0x70, 0x3f, 0x10, 0xa1, 0xd0, 0x6b, 0x6d, 0x62, 0x14,
	0xbe, 0xf5, 0x9f, 0x71, 0x95, 0xfa, 0xd5, 0x67, 0x3b, 0x1b, 0x0e, 0xea, 0xa1, 0x17, 0xaf, 0x01,
	0x00, 0x00, 0xff, 0xff, 0xe1, 0xec, 0xa0, 0x41, 0xc4, 0x03, 0x00, 0x00,
}