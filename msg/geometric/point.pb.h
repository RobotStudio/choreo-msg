// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: geometric/point.proto

#ifndef PROTOBUF_geometric_2fpoint_2eproto__INCLUDED
#define PROTOBUF_geometric_2fpoint_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "primitive/header.pb.h"
#include "primitive/float.pb.h"
// @@protoc_insertion_point(includes)
namespace choreo {
class Float;
class FloatDefaultTypeInternal;
extern FloatDefaultTypeInternal _Float_default_instance_;
class Float32;
class Float32DefaultTypeInternal;
extern Float32DefaultTypeInternal _Float32_default_instance_;
class Float32Array;
class Float32ArrayDefaultTypeInternal;
extern Float32ArrayDefaultTypeInternal _Float32Array_default_instance_;
class Float64;
class Float64DefaultTypeInternal;
extern Float64DefaultTypeInternal _Float64_default_instance_;
class Float64Array;
class Float64ArrayDefaultTypeInternal;
extern Float64ArrayDefaultTypeInternal _Float64Array_default_instance_;
class FloatArray;
class FloatArrayDefaultTypeInternal;
extern FloatArrayDefaultTypeInternal _FloatArray_default_instance_;
class Header;
class HeaderDefaultTypeInternal;
extern HeaderDefaultTypeInternal _Header_default_instance_;
class Point;
class PointDefaultTypeInternal;
extern PointDefaultTypeInternal _Point_default_instance_;
class Point32;
class Point32DefaultTypeInternal;
extern Point32DefaultTypeInternal _Point32_default_instance_;
class Point32Stamped;
class Point32StampedDefaultTypeInternal;
extern Point32StampedDefaultTypeInternal _Point32Stamped_default_instance_;
class PointStamped;
class PointStampedDefaultTypeInternal;
extern PointStampedDefaultTypeInternal _PointStamped_default_instance_;
}  // namespace choreo

namespace choreo {

namespace protobuf_geometric_2fpoint_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_geometric_2fpoint_2eproto

// ===================================================================

class Point32Stamped : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:choreo.Point32Stamped) */ {
 public:
  Point32Stamped();
  virtual ~Point32Stamped();

  Point32Stamped(const Point32Stamped& from);

  inline Point32Stamped& operator=(const Point32Stamped& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Point32Stamped& default_instance();

  static inline const Point32Stamped* internal_default_instance() {
    return reinterpret_cast<const Point32Stamped*>(
               &_Point32Stamped_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Point32Stamped* other);

  // implements Message ----------------------------------------------

  inline Point32Stamped* New() const PROTOBUF_FINAL { return New(NULL); }

  Point32Stamped* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Point32Stamped& from);
  void MergeFrom(const Point32Stamped& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Point32Stamped* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .choreo.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  const ::choreo::Header& header() const;
  ::choreo::Header* mutable_header();
  ::choreo::Header* release_header();
  void set_allocated_header(::choreo::Header* header);

  // .choreo.Point32 point = 2;
  bool has_point() const;
  void clear_point();
  static const int kPointFieldNumber = 2;
  const ::choreo::Point32& point() const;
  ::choreo::Point32* mutable_point();
  ::choreo::Point32* release_point();
  void set_allocated_point(::choreo::Point32* point);

  // @@protoc_insertion_point(class_scope:choreo.Point32Stamped)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::choreo::Header* header_;
  ::choreo::Point32* point_;
  mutable int _cached_size_;
  friend struct protobuf_geometric_2fpoint_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PointStamped : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:choreo.PointStamped) */ {
 public:
  PointStamped();
  virtual ~PointStamped();

  PointStamped(const PointStamped& from);

  inline PointStamped& operator=(const PointStamped& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PointStamped& default_instance();

  static inline const PointStamped* internal_default_instance() {
    return reinterpret_cast<const PointStamped*>(
               &_PointStamped_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(PointStamped* other);

  // implements Message ----------------------------------------------

  inline PointStamped* New() const PROTOBUF_FINAL { return New(NULL); }

  PointStamped* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const PointStamped& from);
  void MergeFrom(const PointStamped& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(PointStamped* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .choreo.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  const ::choreo::Header& header() const;
  ::choreo::Header* mutable_header();
  ::choreo::Header* release_header();
  void set_allocated_header(::choreo::Header* header);

  // .choreo.Point point = 2;
  bool has_point() const;
  void clear_point();
  static const int kPointFieldNumber = 2;
  const ::choreo::Point& point() const;
  ::choreo::Point* mutable_point();
  ::choreo::Point* release_point();
  void set_allocated_point(::choreo::Point* point);

  // @@protoc_insertion_point(class_scope:choreo.PointStamped)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::choreo::Header* header_;
  ::choreo::Point* point_;
  mutable int _cached_size_;
  friend struct protobuf_geometric_2fpoint_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Point32 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:choreo.Point32) */ {
 public:
  Point32();
  virtual ~Point32();

  Point32(const Point32& from);

  inline Point32& operator=(const Point32& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Point32& default_instance();

  static inline const Point32* internal_default_instance() {
    return reinterpret_cast<const Point32*>(
               &_Point32_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(Point32* other);

  // implements Message ----------------------------------------------

  inline Point32* New() const PROTOBUF_FINAL { return New(NULL); }

  Point32* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Point32& from);
  void MergeFrom(const Point32& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Point32* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .choreo.Float32 x = 1;
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 1;
  const ::choreo::Float32& x() const;
  ::choreo::Float32* mutable_x();
  ::choreo::Float32* release_x();
  void set_allocated_x(::choreo::Float32* x);

  // .choreo.Float32 y = 2;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  const ::choreo::Float32& y() const;
  ::choreo::Float32* mutable_y();
  ::choreo::Float32* release_y();
  void set_allocated_y(::choreo::Float32* y);

  // .choreo.Float32 z = 3;
  bool has_z() const;
  void clear_z();
  static const int kZFieldNumber = 3;
  const ::choreo::Float32& z() const;
  ::choreo::Float32* mutable_z();
  ::choreo::Float32* release_z();
  void set_allocated_z(::choreo::Float32* z);

  // @@protoc_insertion_point(class_scope:choreo.Point32)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::choreo::Float32* x_;
  ::choreo::Float32* y_;
  ::choreo::Float32* z_;
  mutable int _cached_size_;
  friend struct protobuf_geometric_2fpoint_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Point : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:choreo.Point) */ {
 public:
  Point();
  virtual ~Point();

  Point(const Point& from);

  inline Point& operator=(const Point& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Point& default_instance();

  static inline const Point* internal_default_instance() {
    return reinterpret_cast<const Point*>(
               &_Point_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(Point* other);

  // implements Message ----------------------------------------------

  inline Point* New() const PROTOBUF_FINAL { return New(NULL); }

  Point* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Point& from);
  void MergeFrom(const Point& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Point* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .choreo.Float64 x = 1;
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 1;
  const ::choreo::Float64& x() const;
  ::choreo::Float64* mutable_x();
  ::choreo::Float64* release_x();
  void set_allocated_x(::choreo::Float64* x);

  // .choreo.Float64 y = 2;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  const ::choreo::Float64& y() const;
  ::choreo::Float64* mutable_y();
  ::choreo::Float64* release_y();
  void set_allocated_y(::choreo::Float64* y);

  // .choreo.Float64 z = 3;
  bool has_z() const;
  void clear_z();
  static const int kZFieldNumber = 3;
  const ::choreo::Float64& z() const;
  ::choreo::Float64* mutable_z();
  ::choreo::Float64* release_z();
  void set_allocated_z(::choreo::Float64* z);

  // @@protoc_insertion_point(class_scope:choreo.Point)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::choreo::Float64* x_;
  ::choreo::Float64* y_;
  ::choreo::Float64* z_;
  mutable int _cached_size_;
  friend struct protobuf_geometric_2fpoint_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Point32Stamped

// .choreo.Header header = 1;
inline bool Point32Stamped::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline void Point32Stamped::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) delete header_;
  header_ = NULL;
}
inline const ::choreo::Header& Point32Stamped::header() const {
  // @@protoc_insertion_point(field_get:choreo.Point32Stamped.header)
  return header_ != NULL ? *header_
                         : *::choreo::Header::internal_default_instance();
}
inline ::choreo::Header* Point32Stamped::mutable_header() {
  
  if (header_ == NULL) {
    header_ = new ::choreo::Header;
  }
  // @@protoc_insertion_point(field_mutable:choreo.Point32Stamped.header)
  return header_;
}
inline ::choreo::Header* Point32Stamped::release_header() {
  // @@protoc_insertion_point(field_release:choreo.Point32Stamped.header)
  
  ::choreo::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void Point32Stamped::set_allocated_header(::choreo::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.Point32Stamped.header)
}

// .choreo.Point32 point = 2;
inline bool Point32Stamped::has_point() const {
  return this != internal_default_instance() && point_ != NULL;
}
inline void Point32Stamped::clear_point() {
  if (GetArenaNoVirtual() == NULL && point_ != NULL) delete point_;
  point_ = NULL;
}
inline const ::choreo::Point32& Point32Stamped::point() const {
  // @@protoc_insertion_point(field_get:choreo.Point32Stamped.point)
  return point_ != NULL ? *point_
                         : *::choreo::Point32::internal_default_instance();
}
inline ::choreo::Point32* Point32Stamped::mutable_point() {
  
  if (point_ == NULL) {
    point_ = new ::choreo::Point32;
  }
  // @@protoc_insertion_point(field_mutable:choreo.Point32Stamped.point)
  return point_;
}
inline ::choreo::Point32* Point32Stamped::release_point() {
  // @@protoc_insertion_point(field_release:choreo.Point32Stamped.point)
  
  ::choreo::Point32* temp = point_;
  point_ = NULL;
  return temp;
}
inline void Point32Stamped::set_allocated_point(::choreo::Point32* point) {
  delete point_;
  point_ = point;
  if (point) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.Point32Stamped.point)
}

// -------------------------------------------------------------------

// PointStamped

// .choreo.Header header = 1;
inline bool PointStamped::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline void PointStamped::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) delete header_;
  header_ = NULL;
}
inline const ::choreo::Header& PointStamped::header() const {
  // @@protoc_insertion_point(field_get:choreo.PointStamped.header)
  return header_ != NULL ? *header_
                         : *::choreo::Header::internal_default_instance();
}
inline ::choreo::Header* PointStamped::mutable_header() {
  
  if (header_ == NULL) {
    header_ = new ::choreo::Header;
  }
  // @@protoc_insertion_point(field_mutable:choreo.PointStamped.header)
  return header_;
}
inline ::choreo::Header* PointStamped::release_header() {
  // @@protoc_insertion_point(field_release:choreo.PointStamped.header)
  
  ::choreo::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void PointStamped::set_allocated_header(::choreo::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.PointStamped.header)
}

// .choreo.Point point = 2;
inline bool PointStamped::has_point() const {
  return this != internal_default_instance() && point_ != NULL;
}
inline void PointStamped::clear_point() {
  if (GetArenaNoVirtual() == NULL && point_ != NULL) delete point_;
  point_ = NULL;
}
inline const ::choreo::Point& PointStamped::point() const {
  // @@protoc_insertion_point(field_get:choreo.PointStamped.point)
  return point_ != NULL ? *point_
                         : *::choreo::Point::internal_default_instance();
}
inline ::choreo::Point* PointStamped::mutable_point() {
  
  if (point_ == NULL) {
    point_ = new ::choreo::Point;
  }
  // @@protoc_insertion_point(field_mutable:choreo.PointStamped.point)
  return point_;
}
inline ::choreo::Point* PointStamped::release_point() {
  // @@protoc_insertion_point(field_release:choreo.PointStamped.point)
  
  ::choreo::Point* temp = point_;
  point_ = NULL;
  return temp;
}
inline void PointStamped::set_allocated_point(::choreo::Point* point) {
  delete point_;
  point_ = point;
  if (point) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.PointStamped.point)
}

// -------------------------------------------------------------------

// Point32

// .choreo.Float32 x = 1;
inline bool Point32::has_x() const {
  return this != internal_default_instance() && x_ != NULL;
}
inline void Point32::clear_x() {
  if (GetArenaNoVirtual() == NULL && x_ != NULL) delete x_;
  x_ = NULL;
}
inline const ::choreo::Float32& Point32::x() const {
  // @@protoc_insertion_point(field_get:choreo.Point32.x)
  return x_ != NULL ? *x_
                         : *::choreo::Float32::internal_default_instance();
}
inline ::choreo::Float32* Point32::mutable_x() {
  
  if (x_ == NULL) {
    x_ = new ::choreo::Float32;
  }
  // @@protoc_insertion_point(field_mutable:choreo.Point32.x)
  return x_;
}
inline ::choreo::Float32* Point32::release_x() {
  // @@protoc_insertion_point(field_release:choreo.Point32.x)
  
  ::choreo::Float32* temp = x_;
  x_ = NULL;
  return temp;
}
inline void Point32::set_allocated_x(::choreo::Float32* x) {
  delete x_;
  x_ = x;
  if (x) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.Point32.x)
}

// .choreo.Float32 y = 2;
inline bool Point32::has_y() const {
  return this != internal_default_instance() && y_ != NULL;
}
inline void Point32::clear_y() {
  if (GetArenaNoVirtual() == NULL && y_ != NULL) delete y_;
  y_ = NULL;
}
inline const ::choreo::Float32& Point32::y() const {
  // @@protoc_insertion_point(field_get:choreo.Point32.y)
  return y_ != NULL ? *y_
                         : *::choreo::Float32::internal_default_instance();
}
inline ::choreo::Float32* Point32::mutable_y() {
  
  if (y_ == NULL) {
    y_ = new ::choreo::Float32;
  }
  // @@protoc_insertion_point(field_mutable:choreo.Point32.y)
  return y_;
}
inline ::choreo::Float32* Point32::release_y() {
  // @@protoc_insertion_point(field_release:choreo.Point32.y)
  
  ::choreo::Float32* temp = y_;
  y_ = NULL;
  return temp;
}
inline void Point32::set_allocated_y(::choreo::Float32* y) {
  delete y_;
  y_ = y;
  if (y) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.Point32.y)
}

// .choreo.Float32 z = 3;
inline bool Point32::has_z() const {
  return this != internal_default_instance() && z_ != NULL;
}
inline void Point32::clear_z() {
  if (GetArenaNoVirtual() == NULL && z_ != NULL) delete z_;
  z_ = NULL;
}
inline const ::choreo::Float32& Point32::z() const {
  // @@protoc_insertion_point(field_get:choreo.Point32.z)
  return z_ != NULL ? *z_
                         : *::choreo::Float32::internal_default_instance();
}
inline ::choreo::Float32* Point32::mutable_z() {
  
  if (z_ == NULL) {
    z_ = new ::choreo::Float32;
  }
  // @@protoc_insertion_point(field_mutable:choreo.Point32.z)
  return z_;
}
inline ::choreo::Float32* Point32::release_z() {
  // @@protoc_insertion_point(field_release:choreo.Point32.z)
  
  ::choreo::Float32* temp = z_;
  z_ = NULL;
  return temp;
}
inline void Point32::set_allocated_z(::choreo::Float32* z) {
  delete z_;
  z_ = z;
  if (z) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.Point32.z)
}

// -------------------------------------------------------------------

// Point

// .choreo.Float64 x = 1;
inline bool Point::has_x() const {
  return this != internal_default_instance() && x_ != NULL;
}
inline void Point::clear_x() {
  if (GetArenaNoVirtual() == NULL && x_ != NULL) delete x_;
  x_ = NULL;
}
inline const ::choreo::Float64& Point::x() const {
  // @@protoc_insertion_point(field_get:choreo.Point.x)
  return x_ != NULL ? *x_
                         : *::choreo::Float64::internal_default_instance();
}
inline ::choreo::Float64* Point::mutable_x() {
  
  if (x_ == NULL) {
    x_ = new ::choreo::Float64;
  }
  // @@protoc_insertion_point(field_mutable:choreo.Point.x)
  return x_;
}
inline ::choreo::Float64* Point::release_x() {
  // @@protoc_insertion_point(field_release:choreo.Point.x)
  
  ::choreo::Float64* temp = x_;
  x_ = NULL;
  return temp;
}
inline void Point::set_allocated_x(::choreo::Float64* x) {
  delete x_;
  x_ = x;
  if (x) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.Point.x)
}

// .choreo.Float64 y = 2;
inline bool Point::has_y() const {
  return this != internal_default_instance() && y_ != NULL;
}
inline void Point::clear_y() {
  if (GetArenaNoVirtual() == NULL && y_ != NULL) delete y_;
  y_ = NULL;
}
inline const ::choreo::Float64& Point::y() const {
  // @@protoc_insertion_point(field_get:choreo.Point.y)
  return y_ != NULL ? *y_
                         : *::choreo::Float64::internal_default_instance();
}
inline ::choreo::Float64* Point::mutable_y() {
  
  if (y_ == NULL) {
    y_ = new ::choreo::Float64;
  }
  // @@protoc_insertion_point(field_mutable:choreo.Point.y)
  return y_;
}
inline ::choreo::Float64* Point::release_y() {
  // @@protoc_insertion_point(field_release:choreo.Point.y)
  
  ::choreo::Float64* temp = y_;
  y_ = NULL;
  return temp;
}
inline void Point::set_allocated_y(::choreo::Float64* y) {
  delete y_;
  y_ = y;
  if (y) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.Point.y)
}

// .choreo.Float64 z = 3;
inline bool Point::has_z() const {
  return this != internal_default_instance() && z_ != NULL;
}
inline void Point::clear_z() {
  if (GetArenaNoVirtual() == NULL && z_ != NULL) delete z_;
  z_ = NULL;
}
inline const ::choreo::Float64& Point::z() const {
  // @@protoc_insertion_point(field_get:choreo.Point.z)
  return z_ != NULL ? *z_
                         : *::choreo::Float64::internal_default_instance();
}
inline ::choreo::Float64* Point::mutable_z() {
  
  if (z_ == NULL) {
    z_ = new ::choreo::Float64;
  }
  // @@protoc_insertion_point(field_mutable:choreo.Point.z)
  return z_;
}
inline ::choreo::Float64* Point::release_z() {
  // @@protoc_insertion_point(field_release:choreo.Point.z)
  
  ::choreo::Float64* temp = z_;
  z_ = NULL;
  return temp;
}
inline void Point::set_allocated_z(::choreo::Float64* z) {
  delete z_;
  z_ = z;
  if (z) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.Point.z)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace choreo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_geometric_2fpoint_2eproto__INCLUDED
