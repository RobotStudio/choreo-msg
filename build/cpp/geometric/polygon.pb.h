// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: geometric/polygon.proto

#ifndef PROTOBUF_geometric_2fpolygon_2eproto__INCLUDED
#define PROTOBUF_geometric_2fpolygon_2eproto__INCLUDED

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
#include "geometric/point.pb.h"
// @@protoc_insertion_point(includes)
namespace choreo {
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
class Polygon;
class PolygonDefaultTypeInternal;
extern PolygonDefaultTypeInternal _Polygon_default_instance_;
class Polygon32;
class Polygon32DefaultTypeInternal;
extern Polygon32DefaultTypeInternal _Polygon32_default_instance_;
class Polygon32Stamped;
class Polygon32StampedDefaultTypeInternal;
extern Polygon32StampedDefaultTypeInternal _Polygon32Stamped_default_instance_;
class PolygonStamped;
class PolygonStampedDefaultTypeInternal;
extern PolygonStampedDefaultTypeInternal _PolygonStamped_default_instance_;
}  // namespace choreo

namespace choreo {

namespace protobuf_geometric_2fpolygon_2eproto {
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
}  // namespace protobuf_geometric_2fpolygon_2eproto

// ===================================================================

class PolygonStamped : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:choreo.PolygonStamped) */ {
 public:
  PolygonStamped();
  virtual ~PolygonStamped();

  PolygonStamped(const PolygonStamped& from);

  inline PolygonStamped& operator=(const PolygonStamped& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PolygonStamped& default_instance();

  static inline const PolygonStamped* internal_default_instance() {
    return reinterpret_cast<const PolygonStamped*>(
               &_PolygonStamped_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(PolygonStamped* other);

  // implements Message ----------------------------------------------

  inline PolygonStamped* New() const PROTOBUF_FINAL { return New(NULL); }

  PolygonStamped* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const PolygonStamped& from);
  void MergeFrom(const PolygonStamped& from);
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
  void InternalSwap(PolygonStamped* other);
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

  // .choreo.Polygon polygon = 2;
  bool has_polygon() const;
  void clear_polygon();
  static const int kPolygonFieldNumber = 2;
  const ::choreo::Polygon& polygon() const;
  ::choreo::Polygon* mutable_polygon();
  ::choreo::Polygon* release_polygon();
  void set_allocated_polygon(::choreo::Polygon* polygon);

  // @@protoc_insertion_point(class_scope:choreo.PolygonStamped)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::choreo::Header* header_;
  ::choreo::Polygon* polygon_;
  mutable int _cached_size_;
  friend struct protobuf_geometric_2fpolygon_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Polygon32Stamped : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:choreo.Polygon32Stamped) */ {
 public:
  Polygon32Stamped();
  virtual ~Polygon32Stamped();

  Polygon32Stamped(const Polygon32Stamped& from);

  inline Polygon32Stamped& operator=(const Polygon32Stamped& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Polygon32Stamped& default_instance();

  static inline const Polygon32Stamped* internal_default_instance() {
    return reinterpret_cast<const Polygon32Stamped*>(
               &_Polygon32Stamped_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Polygon32Stamped* other);

  // implements Message ----------------------------------------------

  inline Polygon32Stamped* New() const PROTOBUF_FINAL { return New(NULL); }

  Polygon32Stamped* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Polygon32Stamped& from);
  void MergeFrom(const Polygon32Stamped& from);
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
  void InternalSwap(Polygon32Stamped* other);
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

  // .choreo.Polygon32 polygon = 2;
  bool has_polygon() const;
  void clear_polygon();
  static const int kPolygonFieldNumber = 2;
  const ::choreo::Polygon32& polygon() const;
  ::choreo::Polygon32* mutable_polygon();
  ::choreo::Polygon32* release_polygon();
  void set_allocated_polygon(::choreo::Polygon32* polygon);

  // @@protoc_insertion_point(class_scope:choreo.Polygon32Stamped)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::choreo::Header* header_;
  ::choreo::Polygon32* polygon_;
  mutable int _cached_size_;
  friend struct protobuf_geometric_2fpolygon_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Polygon : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:choreo.Polygon) */ {
 public:
  Polygon();
  virtual ~Polygon();

  Polygon(const Polygon& from);

  inline Polygon& operator=(const Polygon& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Polygon& default_instance();

  static inline const Polygon* internal_default_instance() {
    return reinterpret_cast<const Polygon*>(
               &_Polygon_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(Polygon* other);

  // implements Message ----------------------------------------------

  inline Polygon* New() const PROTOBUF_FINAL { return New(NULL); }

  Polygon* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Polygon& from);
  void MergeFrom(const Polygon& from);
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
  void InternalSwap(Polygon* other);
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

  // repeated .choreo.Point points = 1;
  int points_size() const;
  void clear_points();
  static const int kPointsFieldNumber = 1;
  const ::choreo::Point& points(int index) const;
  ::choreo::Point* mutable_points(int index);
  ::choreo::Point* add_points();
  ::google::protobuf::RepeatedPtrField< ::choreo::Point >*
      mutable_points();
  const ::google::protobuf::RepeatedPtrField< ::choreo::Point >&
      points() const;

  // @@protoc_insertion_point(class_scope:choreo.Polygon)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::choreo::Point > points_;
  mutable int _cached_size_;
  friend struct protobuf_geometric_2fpolygon_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Polygon32 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:choreo.Polygon32) */ {
 public:
  Polygon32();
  virtual ~Polygon32();

  Polygon32(const Polygon32& from);

  inline Polygon32& operator=(const Polygon32& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Polygon32& default_instance();

  static inline const Polygon32* internal_default_instance() {
    return reinterpret_cast<const Polygon32*>(
               &_Polygon32_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(Polygon32* other);

  // implements Message ----------------------------------------------

  inline Polygon32* New() const PROTOBUF_FINAL { return New(NULL); }

  Polygon32* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Polygon32& from);
  void MergeFrom(const Polygon32& from);
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
  void InternalSwap(Polygon32* other);
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

  // repeated .choreo.Point32 points = 1;
  int points_size() const;
  void clear_points();
  static const int kPointsFieldNumber = 1;
  const ::choreo::Point32& points(int index) const;
  ::choreo::Point32* mutable_points(int index);
  ::choreo::Point32* add_points();
  ::google::protobuf::RepeatedPtrField< ::choreo::Point32 >*
      mutable_points();
  const ::google::protobuf::RepeatedPtrField< ::choreo::Point32 >&
      points() const;

  // @@protoc_insertion_point(class_scope:choreo.Polygon32)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::choreo::Point32 > points_;
  mutable int _cached_size_;
  friend struct protobuf_geometric_2fpolygon_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PolygonStamped

// .choreo.Header header = 1;
inline bool PolygonStamped::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline void PolygonStamped::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) delete header_;
  header_ = NULL;
}
inline const ::choreo::Header& PolygonStamped::header() const {
  // @@protoc_insertion_point(field_get:choreo.PolygonStamped.header)
  return header_ != NULL ? *header_
                         : *::choreo::Header::internal_default_instance();
}
inline ::choreo::Header* PolygonStamped::mutable_header() {
  
  if (header_ == NULL) {
    header_ = new ::choreo::Header;
  }
  // @@protoc_insertion_point(field_mutable:choreo.PolygonStamped.header)
  return header_;
}
inline ::choreo::Header* PolygonStamped::release_header() {
  // @@protoc_insertion_point(field_release:choreo.PolygonStamped.header)
  
  ::choreo::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void PolygonStamped::set_allocated_header(::choreo::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.PolygonStamped.header)
}

// .choreo.Polygon polygon = 2;
inline bool PolygonStamped::has_polygon() const {
  return this != internal_default_instance() && polygon_ != NULL;
}
inline void PolygonStamped::clear_polygon() {
  if (GetArenaNoVirtual() == NULL && polygon_ != NULL) delete polygon_;
  polygon_ = NULL;
}
inline const ::choreo::Polygon& PolygonStamped::polygon() const {
  // @@protoc_insertion_point(field_get:choreo.PolygonStamped.polygon)
  return polygon_ != NULL ? *polygon_
                         : *::choreo::Polygon::internal_default_instance();
}
inline ::choreo::Polygon* PolygonStamped::mutable_polygon() {
  
  if (polygon_ == NULL) {
    polygon_ = new ::choreo::Polygon;
  }
  // @@protoc_insertion_point(field_mutable:choreo.PolygonStamped.polygon)
  return polygon_;
}
inline ::choreo::Polygon* PolygonStamped::release_polygon() {
  // @@protoc_insertion_point(field_release:choreo.PolygonStamped.polygon)
  
  ::choreo::Polygon* temp = polygon_;
  polygon_ = NULL;
  return temp;
}
inline void PolygonStamped::set_allocated_polygon(::choreo::Polygon* polygon) {
  delete polygon_;
  polygon_ = polygon;
  if (polygon) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.PolygonStamped.polygon)
}

// -------------------------------------------------------------------

// Polygon32Stamped

// .choreo.Header header = 1;
inline bool Polygon32Stamped::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline void Polygon32Stamped::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) delete header_;
  header_ = NULL;
}
inline const ::choreo::Header& Polygon32Stamped::header() const {
  // @@protoc_insertion_point(field_get:choreo.Polygon32Stamped.header)
  return header_ != NULL ? *header_
                         : *::choreo::Header::internal_default_instance();
}
inline ::choreo::Header* Polygon32Stamped::mutable_header() {
  
  if (header_ == NULL) {
    header_ = new ::choreo::Header;
  }
  // @@protoc_insertion_point(field_mutable:choreo.Polygon32Stamped.header)
  return header_;
}
inline ::choreo::Header* Polygon32Stamped::release_header() {
  // @@protoc_insertion_point(field_release:choreo.Polygon32Stamped.header)
  
  ::choreo::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void Polygon32Stamped::set_allocated_header(::choreo::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.Polygon32Stamped.header)
}

// .choreo.Polygon32 polygon = 2;
inline bool Polygon32Stamped::has_polygon() const {
  return this != internal_default_instance() && polygon_ != NULL;
}
inline void Polygon32Stamped::clear_polygon() {
  if (GetArenaNoVirtual() == NULL && polygon_ != NULL) delete polygon_;
  polygon_ = NULL;
}
inline const ::choreo::Polygon32& Polygon32Stamped::polygon() const {
  // @@protoc_insertion_point(field_get:choreo.Polygon32Stamped.polygon)
  return polygon_ != NULL ? *polygon_
                         : *::choreo::Polygon32::internal_default_instance();
}
inline ::choreo::Polygon32* Polygon32Stamped::mutable_polygon() {
  
  if (polygon_ == NULL) {
    polygon_ = new ::choreo::Polygon32;
  }
  // @@protoc_insertion_point(field_mutable:choreo.Polygon32Stamped.polygon)
  return polygon_;
}
inline ::choreo::Polygon32* Polygon32Stamped::release_polygon() {
  // @@protoc_insertion_point(field_release:choreo.Polygon32Stamped.polygon)
  
  ::choreo::Polygon32* temp = polygon_;
  polygon_ = NULL;
  return temp;
}
inline void Polygon32Stamped::set_allocated_polygon(::choreo::Polygon32* polygon) {
  delete polygon_;
  polygon_ = polygon;
  if (polygon) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.Polygon32Stamped.polygon)
}

// -------------------------------------------------------------------

// Polygon

// repeated .choreo.Point points = 1;
inline int Polygon::points_size() const {
  return points_.size();
}
inline void Polygon::clear_points() {
  points_.Clear();
}
inline const ::choreo::Point& Polygon::points(int index) const {
  // @@protoc_insertion_point(field_get:choreo.Polygon.points)
  return points_.Get(index);
}
inline ::choreo::Point* Polygon::mutable_points(int index) {
  // @@protoc_insertion_point(field_mutable:choreo.Polygon.points)
  return points_.Mutable(index);
}
inline ::choreo::Point* Polygon::add_points() {
  // @@protoc_insertion_point(field_add:choreo.Polygon.points)
  return points_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::choreo::Point >*
Polygon::mutable_points() {
  // @@protoc_insertion_point(field_mutable_list:choreo.Polygon.points)
  return &points_;
}
inline const ::google::protobuf::RepeatedPtrField< ::choreo::Point >&
Polygon::points() const {
  // @@protoc_insertion_point(field_list:choreo.Polygon.points)
  return points_;
}

// -------------------------------------------------------------------

// Polygon32

// repeated .choreo.Point32 points = 1;
inline int Polygon32::points_size() const {
  return points_.size();
}
inline void Polygon32::clear_points() {
  points_.Clear();
}
inline const ::choreo::Point32& Polygon32::points(int index) const {
  // @@protoc_insertion_point(field_get:choreo.Polygon32.points)
  return points_.Get(index);
}
inline ::choreo::Point32* Polygon32::mutable_points(int index) {
  // @@protoc_insertion_point(field_mutable:choreo.Polygon32.points)
  return points_.Mutable(index);
}
inline ::choreo::Point32* Polygon32::add_points() {
  // @@protoc_insertion_point(field_add:choreo.Polygon32.points)
  return points_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::choreo::Point32 >*
Polygon32::mutable_points() {
  // @@protoc_insertion_point(field_mutable_list:choreo.Polygon32.points)
  return &points_;
}
inline const ::google::protobuf::RepeatedPtrField< ::choreo::Point32 >&
Polygon32::points() const {
  // @@protoc_insertion_point(field_list:choreo.Polygon32.points)
  return points_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace choreo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_geometric_2fpolygon_2eproto__INCLUDED
