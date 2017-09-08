// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sensor/joystick.proto

#ifndef PROTOBUF_sensor_2fjoystick_2eproto__INCLUDED
#define PROTOBUF_sensor_2fjoystick_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "primitive/float.pb.h"
#include "primitive/header.pb.h"
#include "primitive/int.pb.h"
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
class Int32;
class Int32DefaultTypeInternal;
extern Int32DefaultTypeInternal _Int32_default_instance_;
class Int32Array;
class Int32ArrayDefaultTypeInternal;
extern Int32ArrayDefaultTypeInternal _Int32Array_default_instance_;
class Int64;
class Int64DefaultTypeInternal;
extern Int64DefaultTypeInternal _Int64_default_instance_;
class Int64Array;
class Int64ArrayDefaultTypeInternal;
extern Int64ArrayDefaultTypeInternal _Int64Array_default_instance_;
class Joy;
class JoyDefaultTypeInternal;
extern JoyDefaultTypeInternal _Joy_default_instance_;
class JoyFeedback;
class JoyFeedbackDefaultTypeInternal;
extern JoyFeedbackDefaultTypeInternal _JoyFeedback_default_instance_;
class JoyFeedbackArray;
class JoyFeedbackArrayDefaultTypeInternal;
extern JoyFeedbackArrayDefaultTypeInternal _JoyFeedbackArray_default_instance_;
class SInt32;
class SInt32DefaultTypeInternal;
extern SInt32DefaultTypeInternal _SInt32_default_instance_;
class SInt32Array;
class SInt32ArrayDefaultTypeInternal;
extern SInt32ArrayDefaultTypeInternal _SInt32Array_default_instance_;
class SInt64;
class SInt64DefaultTypeInternal;
extern SInt64DefaultTypeInternal _SInt64_default_instance_;
class SInt64Array;
class SInt64ArrayDefaultTypeInternal;
extern SInt64ArrayDefaultTypeInternal _SInt64Array_default_instance_;
class UInt32;
class UInt32DefaultTypeInternal;
extern UInt32DefaultTypeInternal _UInt32_default_instance_;
class UInt32Array;
class UInt32ArrayDefaultTypeInternal;
extern UInt32ArrayDefaultTypeInternal _UInt32Array_default_instance_;
class UInt64;
class UInt64DefaultTypeInternal;
extern UInt64DefaultTypeInternal _UInt64_default_instance_;
class UInt64Array;
class UInt64ArrayDefaultTypeInternal;
extern UInt64ArrayDefaultTypeInternal _UInt64Array_default_instance_;
}  // namespace choreo

namespace choreo {

namespace protobuf_sensor_2fjoystick_2eproto {
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
}  // namespace protobuf_sensor_2fjoystick_2eproto

enum JoyFeedback_FeedbackType {
  JoyFeedback_FeedbackType_LED = 0,
  JoyFeedback_FeedbackType_RUMBLE = 1,
  JoyFeedback_FeedbackType_BUZZER = 2,
  JoyFeedback_FeedbackType_JoyFeedback_FeedbackType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  JoyFeedback_FeedbackType_JoyFeedback_FeedbackType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool JoyFeedback_FeedbackType_IsValid(int value);
const JoyFeedback_FeedbackType JoyFeedback_FeedbackType_FeedbackType_MIN = JoyFeedback_FeedbackType_LED;
const JoyFeedback_FeedbackType JoyFeedback_FeedbackType_FeedbackType_MAX = JoyFeedback_FeedbackType_BUZZER;
const int JoyFeedback_FeedbackType_FeedbackType_ARRAYSIZE = JoyFeedback_FeedbackType_FeedbackType_MAX + 1;

const ::google::protobuf::EnumDescriptor* JoyFeedback_FeedbackType_descriptor();
inline const ::std::string& JoyFeedback_FeedbackType_Name(JoyFeedback_FeedbackType value) {
  return ::google::protobuf::internal::NameOfEnum(
    JoyFeedback_FeedbackType_descriptor(), value);
}
inline bool JoyFeedback_FeedbackType_Parse(
    const ::std::string& name, JoyFeedback_FeedbackType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<JoyFeedback_FeedbackType>(
    JoyFeedback_FeedbackType_descriptor(), name, value);
}
// ===================================================================

class Joy : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:choreo.Joy) */ {
 public:
  Joy();
  virtual ~Joy();

  Joy(const Joy& from);

  inline Joy& operator=(const Joy& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Joy& default_instance();

  static inline const Joy* internal_default_instance() {
    return reinterpret_cast<const Joy*>(
               &_Joy_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Joy* other);

  // implements Message ----------------------------------------------

  inline Joy* New() const PROTOBUF_FINAL { return New(NULL); }

  Joy* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Joy& from);
  void MergeFrom(const Joy& from);
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
  void InternalSwap(Joy* other);
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

  // repeated .choreo.Float32 axes = 2;
  int axes_size() const;
  void clear_axes();
  static const int kAxesFieldNumber = 2;
  const ::choreo::Float32& axes(int index) const;
  ::choreo::Float32* mutable_axes(int index);
  ::choreo::Float32* add_axes();
  ::google::protobuf::RepeatedPtrField< ::choreo::Float32 >*
      mutable_axes();
  const ::google::protobuf::RepeatedPtrField< ::choreo::Float32 >&
      axes() const;

  // repeated .choreo.Int32 buttons = 3;
  int buttons_size() const;
  void clear_buttons();
  static const int kButtonsFieldNumber = 3;
  const ::choreo::Int32& buttons(int index) const;
  ::choreo::Int32* mutable_buttons(int index);
  ::choreo::Int32* add_buttons();
  ::google::protobuf::RepeatedPtrField< ::choreo::Int32 >*
      mutable_buttons();
  const ::google::protobuf::RepeatedPtrField< ::choreo::Int32 >&
      buttons() const;

  // .choreo.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  const ::choreo::Header& header() const;
  ::choreo::Header* mutable_header();
  ::choreo::Header* release_header();
  void set_allocated_header(::choreo::Header* header);

  // @@protoc_insertion_point(class_scope:choreo.Joy)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::choreo::Float32 > axes_;
  ::google::protobuf::RepeatedPtrField< ::choreo::Int32 > buttons_;
  ::choreo::Header* header_;
  mutable int _cached_size_;
  friend struct protobuf_sensor_2fjoystick_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class JoyFeedback : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:choreo.JoyFeedback) */ {
 public:
  JoyFeedback();
  virtual ~JoyFeedback();

  JoyFeedback(const JoyFeedback& from);

  inline JoyFeedback& operator=(const JoyFeedback& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const JoyFeedback& default_instance();

  static inline const JoyFeedback* internal_default_instance() {
    return reinterpret_cast<const JoyFeedback*>(
               &_JoyFeedback_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(JoyFeedback* other);

  // implements Message ----------------------------------------------

  inline JoyFeedback* New() const PROTOBUF_FINAL { return New(NULL); }

  JoyFeedback* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const JoyFeedback& from);
  void MergeFrom(const JoyFeedback& from);
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
  void InternalSwap(JoyFeedback* other);
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

  typedef JoyFeedback_FeedbackType FeedbackType;
  static const FeedbackType LED =
    JoyFeedback_FeedbackType_LED;
  static const FeedbackType RUMBLE =
    JoyFeedback_FeedbackType_RUMBLE;
  static const FeedbackType BUZZER =
    JoyFeedback_FeedbackType_BUZZER;
  static inline bool FeedbackType_IsValid(int value) {
    return JoyFeedback_FeedbackType_IsValid(value);
  }
  static const FeedbackType FeedbackType_MIN =
    JoyFeedback_FeedbackType_FeedbackType_MIN;
  static const FeedbackType FeedbackType_MAX =
    JoyFeedback_FeedbackType_FeedbackType_MAX;
  static const int FeedbackType_ARRAYSIZE =
    JoyFeedback_FeedbackType_FeedbackType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  FeedbackType_descriptor() {
    return JoyFeedback_FeedbackType_descriptor();
  }
  static inline const ::std::string& FeedbackType_Name(FeedbackType value) {
    return JoyFeedback_FeedbackType_Name(value);
  }
  static inline bool FeedbackType_Parse(const ::std::string& name,
      FeedbackType* value) {
    return JoyFeedback_FeedbackType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // .choreo.UInt32 id = 2;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 2;
  const ::choreo::UInt32& id() const;
  ::choreo::UInt32* mutable_id();
  ::choreo::UInt32* release_id();
  void set_allocated_id(::choreo::UInt32* id);

  // .choreo.Float32 intensity = 3;
  bool has_intensity() const;
  void clear_intensity();
  static const int kIntensityFieldNumber = 3;
  const ::choreo::Float32& intensity() const;
  ::choreo::Float32* mutable_intensity();
  ::choreo::Float32* release_intensity();
  void set_allocated_intensity(::choreo::Float32* intensity);

  // .choreo.JoyFeedback.FeedbackType type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::choreo::JoyFeedback_FeedbackType type() const;
  void set_type(::choreo::JoyFeedback_FeedbackType value);

  // @@protoc_insertion_point(class_scope:choreo.JoyFeedback)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::choreo::UInt32* id_;
  ::choreo::Float32* intensity_;
  int type_;
  mutable int _cached_size_;
  friend struct protobuf_sensor_2fjoystick_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class JoyFeedbackArray : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:choreo.JoyFeedbackArray) */ {
 public:
  JoyFeedbackArray();
  virtual ~JoyFeedbackArray();

  JoyFeedbackArray(const JoyFeedbackArray& from);

  inline JoyFeedbackArray& operator=(const JoyFeedbackArray& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const JoyFeedbackArray& default_instance();

  static inline const JoyFeedbackArray* internal_default_instance() {
    return reinterpret_cast<const JoyFeedbackArray*>(
               &_JoyFeedbackArray_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(JoyFeedbackArray* other);

  // implements Message ----------------------------------------------

  inline JoyFeedbackArray* New() const PROTOBUF_FINAL { return New(NULL); }

  JoyFeedbackArray* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const JoyFeedbackArray& from);
  void MergeFrom(const JoyFeedbackArray& from);
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
  void InternalSwap(JoyFeedbackArray* other);
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

  // repeated .choreo.JoyFeedback array = 1;
  int array_size() const;
  void clear_array();
  static const int kArrayFieldNumber = 1;
  const ::choreo::JoyFeedback& array(int index) const;
  ::choreo::JoyFeedback* mutable_array(int index);
  ::choreo::JoyFeedback* add_array();
  ::google::protobuf::RepeatedPtrField< ::choreo::JoyFeedback >*
      mutable_array();
  const ::google::protobuf::RepeatedPtrField< ::choreo::JoyFeedback >&
      array() const;

  // @@protoc_insertion_point(class_scope:choreo.JoyFeedbackArray)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::choreo::JoyFeedback > array_;
  mutable int _cached_size_;
  friend struct protobuf_sensor_2fjoystick_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Joy

// .choreo.Header header = 1;
inline bool Joy::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline void Joy::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) delete header_;
  header_ = NULL;
}
inline const ::choreo::Header& Joy::header() const {
  // @@protoc_insertion_point(field_get:choreo.Joy.header)
  return header_ != NULL ? *header_
                         : *::choreo::Header::internal_default_instance();
}
inline ::choreo::Header* Joy::mutable_header() {
  
  if (header_ == NULL) {
    header_ = new ::choreo::Header;
  }
  // @@protoc_insertion_point(field_mutable:choreo.Joy.header)
  return header_;
}
inline ::choreo::Header* Joy::release_header() {
  // @@protoc_insertion_point(field_release:choreo.Joy.header)
  
  ::choreo::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void Joy::set_allocated_header(::choreo::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.Joy.header)
}

// repeated .choreo.Float32 axes = 2;
inline int Joy::axes_size() const {
  return axes_.size();
}
inline void Joy::clear_axes() {
  axes_.Clear();
}
inline const ::choreo::Float32& Joy::axes(int index) const {
  // @@protoc_insertion_point(field_get:choreo.Joy.axes)
  return axes_.Get(index);
}
inline ::choreo::Float32* Joy::mutable_axes(int index) {
  // @@protoc_insertion_point(field_mutable:choreo.Joy.axes)
  return axes_.Mutable(index);
}
inline ::choreo::Float32* Joy::add_axes() {
  // @@protoc_insertion_point(field_add:choreo.Joy.axes)
  return axes_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::choreo::Float32 >*
Joy::mutable_axes() {
  // @@protoc_insertion_point(field_mutable_list:choreo.Joy.axes)
  return &axes_;
}
inline const ::google::protobuf::RepeatedPtrField< ::choreo::Float32 >&
Joy::axes() const {
  // @@protoc_insertion_point(field_list:choreo.Joy.axes)
  return axes_;
}

// repeated .choreo.Int32 buttons = 3;
inline int Joy::buttons_size() const {
  return buttons_.size();
}
inline void Joy::clear_buttons() {
  buttons_.Clear();
}
inline const ::choreo::Int32& Joy::buttons(int index) const {
  // @@protoc_insertion_point(field_get:choreo.Joy.buttons)
  return buttons_.Get(index);
}
inline ::choreo::Int32* Joy::mutable_buttons(int index) {
  // @@protoc_insertion_point(field_mutable:choreo.Joy.buttons)
  return buttons_.Mutable(index);
}
inline ::choreo::Int32* Joy::add_buttons() {
  // @@protoc_insertion_point(field_add:choreo.Joy.buttons)
  return buttons_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::choreo::Int32 >*
Joy::mutable_buttons() {
  // @@protoc_insertion_point(field_mutable_list:choreo.Joy.buttons)
  return &buttons_;
}
inline const ::google::protobuf::RepeatedPtrField< ::choreo::Int32 >&
Joy::buttons() const {
  // @@protoc_insertion_point(field_list:choreo.Joy.buttons)
  return buttons_;
}

// -------------------------------------------------------------------

// JoyFeedback

// .choreo.JoyFeedback.FeedbackType type = 1;
inline void JoyFeedback::clear_type() {
  type_ = 0;
}
inline ::choreo::JoyFeedback_FeedbackType JoyFeedback::type() const {
  // @@protoc_insertion_point(field_get:choreo.JoyFeedback.type)
  return static_cast< ::choreo::JoyFeedback_FeedbackType >(type_);
}
inline void JoyFeedback::set_type(::choreo::JoyFeedback_FeedbackType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:choreo.JoyFeedback.type)
}

// .choreo.UInt32 id = 2;
inline bool JoyFeedback::has_id() const {
  return this != internal_default_instance() && id_ != NULL;
}
inline void JoyFeedback::clear_id() {
  if (GetArenaNoVirtual() == NULL && id_ != NULL) delete id_;
  id_ = NULL;
}
inline const ::choreo::UInt32& JoyFeedback::id() const {
  // @@protoc_insertion_point(field_get:choreo.JoyFeedback.id)
  return id_ != NULL ? *id_
                         : *::choreo::UInt32::internal_default_instance();
}
inline ::choreo::UInt32* JoyFeedback::mutable_id() {
  
  if (id_ == NULL) {
    id_ = new ::choreo::UInt32;
  }
  // @@protoc_insertion_point(field_mutable:choreo.JoyFeedback.id)
  return id_;
}
inline ::choreo::UInt32* JoyFeedback::release_id() {
  // @@protoc_insertion_point(field_release:choreo.JoyFeedback.id)
  
  ::choreo::UInt32* temp = id_;
  id_ = NULL;
  return temp;
}
inline void JoyFeedback::set_allocated_id(::choreo::UInt32* id) {
  delete id_;
  id_ = id;
  if (id) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.JoyFeedback.id)
}

// .choreo.Float32 intensity = 3;
inline bool JoyFeedback::has_intensity() const {
  return this != internal_default_instance() && intensity_ != NULL;
}
inline void JoyFeedback::clear_intensity() {
  if (GetArenaNoVirtual() == NULL && intensity_ != NULL) delete intensity_;
  intensity_ = NULL;
}
inline const ::choreo::Float32& JoyFeedback::intensity() const {
  // @@protoc_insertion_point(field_get:choreo.JoyFeedback.intensity)
  return intensity_ != NULL ? *intensity_
                         : *::choreo::Float32::internal_default_instance();
}
inline ::choreo::Float32* JoyFeedback::mutable_intensity() {
  
  if (intensity_ == NULL) {
    intensity_ = new ::choreo::Float32;
  }
  // @@protoc_insertion_point(field_mutable:choreo.JoyFeedback.intensity)
  return intensity_;
}
inline ::choreo::Float32* JoyFeedback::release_intensity() {
  // @@protoc_insertion_point(field_release:choreo.JoyFeedback.intensity)
  
  ::choreo::Float32* temp = intensity_;
  intensity_ = NULL;
  return temp;
}
inline void JoyFeedback::set_allocated_intensity(::choreo::Float32* intensity) {
  delete intensity_;
  intensity_ = intensity;
  if (intensity) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.JoyFeedback.intensity)
}

// -------------------------------------------------------------------

// JoyFeedbackArray

// repeated .choreo.JoyFeedback array = 1;
inline int JoyFeedbackArray::array_size() const {
  return array_.size();
}
inline void JoyFeedbackArray::clear_array() {
  array_.Clear();
}
inline const ::choreo::JoyFeedback& JoyFeedbackArray::array(int index) const {
  // @@protoc_insertion_point(field_get:choreo.JoyFeedbackArray.array)
  return array_.Get(index);
}
inline ::choreo::JoyFeedback* JoyFeedbackArray::mutable_array(int index) {
  // @@protoc_insertion_point(field_mutable:choreo.JoyFeedbackArray.array)
  return array_.Mutable(index);
}
inline ::choreo::JoyFeedback* JoyFeedbackArray::add_array() {
  // @@protoc_insertion_point(field_add:choreo.JoyFeedbackArray.array)
  return array_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::choreo::JoyFeedback >*
JoyFeedbackArray::mutable_array() {
  // @@protoc_insertion_point(field_mutable_list:choreo.JoyFeedbackArray.array)
  return &array_;
}
inline const ::google::protobuf::RepeatedPtrField< ::choreo::JoyFeedback >&
JoyFeedbackArray::array() const {
  // @@protoc_insertion_point(field_list:choreo.JoyFeedbackArray.array)
  return array_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace choreo

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::choreo::JoyFeedback_FeedbackType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::choreo::JoyFeedback_FeedbackType>() {
  return ::choreo::JoyFeedback_FeedbackType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_sensor_2fjoystick_2eproto__INCLUDED
