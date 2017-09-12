// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: primitive/float.proto

#ifndef PROTOBUF_primitive_2ffloat_2eproto__INCLUDED
#define PROTOBUF_primitive_2ffloat_2eproto__INCLUDED

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
}  // namespace choreo

namespace choreo {

namespace protobuf_primitive_2ffloat_2eproto {
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
}  // namespace protobuf_primitive_2ffloat_2eproto

// ===================================================================

class FloatArray : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:choreo.FloatArray) */ {
 public:
  FloatArray();
  virtual ~FloatArray();

  FloatArray(const FloatArray& from);

  inline FloatArray& operator=(const FloatArray& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FloatArray& default_instance();

  static inline const FloatArray* internal_default_instance() {
    return reinterpret_cast<const FloatArray*>(
               &_FloatArray_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(FloatArray* other);

  // implements Message ----------------------------------------------

  inline FloatArray* New() const PROTOBUF_FINAL { return New(NULL); }

  FloatArray* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const FloatArray& from);
  void MergeFrom(const FloatArray& from);
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
  void InternalSwap(FloatArray* other);
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

  // repeated .choreo.Float data = 1;
  int data_size() const;
  void clear_data();
  static const int kDataFieldNumber = 1;
  const ::choreo::Float& data(int index) const;
  ::choreo::Float* mutable_data(int index);
  ::choreo::Float* add_data();
  ::google::protobuf::RepeatedPtrField< ::choreo::Float >*
      mutable_data();
  const ::google::protobuf::RepeatedPtrField< ::choreo::Float >&
      data() const;

  // @@protoc_insertion_point(class_scope:choreo.FloatArray)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::choreo::Float > data_;
  mutable int _cached_size_;
  friend struct protobuf_primitive_2ffloat_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Float : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:choreo.Float) */ {
 public:
  Float();
  virtual ~Float();

  Float(const Float& from);

  inline Float& operator=(const Float& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Float& default_instance();

  static inline const Float* internal_default_instance() {
    return reinterpret_cast<const Float*>(
               &_Float_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Float* other);

  // implements Message ----------------------------------------------

  inline Float* New() const PROTOBUF_FINAL { return New(NULL); }

  Float* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Float& from);
  void MergeFrom(const Float& from);
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
  void InternalSwap(Float* other);
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

  // float data = 1;
  void clear_data();
  static const int kDataFieldNumber = 1;
  float data() const;
  void set_data(float value);

  // @@protoc_insertion_point(class_scope:choreo.Float)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  float data_;
  mutable int _cached_size_;
  friend struct protobuf_primitive_2ffloat_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Float32Array : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:choreo.Float32Array) */ {
 public:
  Float32Array();
  virtual ~Float32Array();

  Float32Array(const Float32Array& from);

  inline Float32Array& operator=(const Float32Array& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Float32Array& default_instance();

  static inline const Float32Array* internal_default_instance() {
    return reinterpret_cast<const Float32Array*>(
               &_Float32Array_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(Float32Array* other);

  // implements Message ----------------------------------------------

  inline Float32Array* New() const PROTOBUF_FINAL { return New(NULL); }

  Float32Array* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Float32Array& from);
  void MergeFrom(const Float32Array& from);
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
  void InternalSwap(Float32Array* other);
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

  // repeated .choreo.Float32 data = 1;
  int data_size() const;
  void clear_data();
  static const int kDataFieldNumber = 1;
  const ::choreo::Float32& data(int index) const;
  ::choreo::Float32* mutable_data(int index);
  ::choreo::Float32* add_data();
  ::google::protobuf::RepeatedPtrField< ::choreo::Float32 >*
      mutable_data();
  const ::google::protobuf::RepeatedPtrField< ::choreo::Float32 >&
      data() const;

  // @@protoc_insertion_point(class_scope:choreo.Float32Array)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::choreo::Float32 > data_;
  mutable int _cached_size_;
  friend struct protobuf_primitive_2ffloat_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Float32 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:choreo.Float32) */ {
 public:
  Float32();
  virtual ~Float32();

  Float32(const Float32& from);

  inline Float32& operator=(const Float32& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Float32& default_instance();

  static inline const Float32* internal_default_instance() {
    return reinterpret_cast<const Float32*>(
               &_Float32_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(Float32* other);

  // implements Message ----------------------------------------------

  inline Float32* New() const PROTOBUF_FINAL { return New(NULL); }

  Float32* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Float32& from);
  void MergeFrom(const Float32& from);
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
  void InternalSwap(Float32* other);
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

  // float data = 1;
  void clear_data();
  static const int kDataFieldNumber = 1;
  float data() const;
  void set_data(float value);

  // @@protoc_insertion_point(class_scope:choreo.Float32)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  float data_;
  mutable int _cached_size_;
  friend struct protobuf_primitive_2ffloat_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Float64Array : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:choreo.Float64Array) */ {
 public:
  Float64Array();
  virtual ~Float64Array();

  Float64Array(const Float64Array& from);

  inline Float64Array& operator=(const Float64Array& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Float64Array& default_instance();

  static inline const Float64Array* internal_default_instance() {
    return reinterpret_cast<const Float64Array*>(
               &_Float64Array_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    4;

  void Swap(Float64Array* other);

  // implements Message ----------------------------------------------

  inline Float64Array* New() const PROTOBUF_FINAL { return New(NULL); }

  Float64Array* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Float64Array& from);
  void MergeFrom(const Float64Array& from);
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
  void InternalSwap(Float64Array* other);
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

  // repeated .choreo.Float64 data = 1;
  int data_size() const;
  void clear_data();
  static const int kDataFieldNumber = 1;
  const ::choreo::Float64& data(int index) const;
  ::choreo::Float64* mutable_data(int index);
  ::choreo::Float64* add_data();
  ::google::protobuf::RepeatedPtrField< ::choreo::Float64 >*
      mutable_data();
  const ::google::protobuf::RepeatedPtrField< ::choreo::Float64 >&
      data() const;

  // @@protoc_insertion_point(class_scope:choreo.Float64Array)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::choreo::Float64 > data_;
  mutable int _cached_size_;
  friend struct protobuf_primitive_2ffloat_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Float64 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:choreo.Float64) */ {
 public:
  Float64();
  virtual ~Float64();

  Float64(const Float64& from);

  inline Float64& operator=(const Float64& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Float64& default_instance();

  static inline const Float64* internal_default_instance() {
    return reinterpret_cast<const Float64*>(
               &_Float64_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    5;

  void Swap(Float64* other);

  // implements Message ----------------------------------------------

  inline Float64* New() const PROTOBUF_FINAL { return New(NULL); }

  Float64* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Float64& from);
  void MergeFrom(const Float64& from);
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
  void InternalSwap(Float64* other);
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

  // float data = 1;
  void clear_data();
  static const int kDataFieldNumber = 1;
  float data() const;
  void set_data(float value);

  // @@protoc_insertion_point(class_scope:choreo.Float64)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  float data_;
  mutable int _cached_size_;
  friend struct protobuf_primitive_2ffloat_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// FloatArray

// repeated .choreo.Float data = 1;
inline int FloatArray::data_size() const {
  return data_.size();
}
inline void FloatArray::clear_data() {
  data_.Clear();
}
inline const ::choreo::Float& FloatArray::data(int index) const {
  // @@protoc_insertion_point(field_get:choreo.FloatArray.data)
  return data_.Get(index);
}
inline ::choreo::Float* FloatArray::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:choreo.FloatArray.data)
  return data_.Mutable(index);
}
inline ::choreo::Float* FloatArray::add_data() {
  // @@protoc_insertion_point(field_add:choreo.FloatArray.data)
  return data_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::choreo::Float >*
FloatArray::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:choreo.FloatArray.data)
  return &data_;
}
inline const ::google::protobuf::RepeatedPtrField< ::choreo::Float >&
FloatArray::data() const {
  // @@protoc_insertion_point(field_list:choreo.FloatArray.data)
  return data_;
}

// -------------------------------------------------------------------

// Float

// float data = 1;
inline void Float::clear_data() {
  data_ = 0;
}
inline float Float::data() const {
  // @@protoc_insertion_point(field_get:choreo.Float.data)
  return data_;
}
inline void Float::set_data(float value) {
  
  data_ = value;
  // @@protoc_insertion_point(field_set:choreo.Float.data)
}

// -------------------------------------------------------------------

// Float32Array

// repeated .choreo.Float32 data = 1;
inline int Float32Array::data_size() const {
  return data_.size();
}
inline void Float32Array::clear_data() {
  data_.Clear();
}
inline const ::choreo::Float32& Float32Array::data(int index) const {
  // @@protoc_insertion_point(field_get:choreo.Float32Array.data)
  return data_.Get(index);
}
inline ::choreo::Float32* Float32Array::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:choreo.Float32Array.data)
  return data_.Mutable(index);
}
inline ::choreo::Float32* Float32Array::add_data() {
  // @@protoc_insertion_point(field_add:choreo.Float32Array.data)
  return data_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::choreo::Float32 >*
Float32Array::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:choreo.Float32Array.data)
  return &data_;
}
inline const ::google::protobuf::RepeatedPtrField< ::choreo::Float32 >&
Float32Array::data() const {
  // @@protoc_insertion_point(field_list:choreo.Float32Array.data)
  return data_;
}

// -------------------------------------------------------------------

// Float32

// float data = 1;
inline void Float32::clear_data() {
  data_ = 0;
}
inline float Float32::data() const {
  // @@protoc_insertion_point(field_get:choreo.Float32.data)
  return data_;
}
inline void Float32::set_data(float value) {
  
  data_ = value;
  // @@protoc_insertion_point(field_set:choreo.Float32.data)
}

// -------------------------------------------------------------------

// Float64Array

// repeated .choreo.Float64 data = 1;
inline int Float64Array::data_size() const {
  return data_.size();
}
inline void Float64Array::clear_data() {
  data_.Clear();
}
inline const ::choreo::Float64& Float64Array::data(int index) const {
  // @@protoc_insertion_point(field_get:choreo.Float64Array.data)
  return data_.Get(index);
}
inline ::choreo::Float64* Float64Array::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:choreo.Float64Array.data)
  return data_.Mutable(index);
}
inline ::choreo::Float64* Float64Array::add_data() {
  // @@protoc_insertion_point(field_add:choreo.Float64Array.data)
  return data_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::choreo::Float64 >*
Float64Array::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:choreo.Float64Array.data)
  return &data_;
}
inline const ::google::protobuf::RepeatedPtrField< ::choreo::Float64 >&
Float64Array::data() const {
  // @@protoc_insertion_point(field_list:choreo.Float64Array.data)
  return data_;
}

// -------------------------------------------------------------------

// Float64

// float data = 1;
inline void Float64::clear_data() {
  data_ = 0;
}
inline float Float64::data() const {
  // @@protoc_insertion_point(field_get:choreo.Float64.data)
  return data_;
}
inline void Float64::set_data(float value) {
  
  data_ = value;
  // @@protoc_insertion_point(field_set:choreo.Float64.data)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace choreo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_primitive_2ffloat_2eproto__INCLUDED