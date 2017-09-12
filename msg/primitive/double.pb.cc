// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: primitive/double.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "primitive/double.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace choreo {
class DoubleArrayDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<DoubleArray> {
} _DoubleArray_default_instance_;
class DoubleDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Double> {
} _Double_default_instance_;

namespace protobuf_primitive_2fdouble_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DoubleArray, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DoubleArray, data_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Double, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Double, data_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(DoubleArray)},
  { 6, -1, sizeof(Double)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_DoubleArray_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_Double_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "primitive/double.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void TableStruct::Shutdown() {
  _DoubleArray_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _Double_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _DoubleArray_default_instance_.DefaultConstruct();
  _Double_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\026primitive/double.proto\022\006choreo\"+\n\013Doub"
      "leArray\022\034\n\004data\030\001 \003(\0132\016.choreo.Double\"\026\n"
      "\006Double\022\014\n\004data\030\001 \001(\001B1Z/github.com/Robo"
      "tStudio/choreo-msg/msg/primitiveb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 160);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "primitive/double.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_primitive_2fdouble_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DoubleArray::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DoubleArray::DoubleArray()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_primitive_2fdouble_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:choreo.DoubleArray)
}
DoubleArray::DoubleArray(const DoubleArray& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      data_(from.data_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:choreo.DoubleArray)
}

void DoubleArray::SharedCtor() {
  _cached_size_ = 0;
}

DoubleArray::~DoubleArray() {
  // @@protoc_insertion_point(destructor:choreo.DoubleArray)
  SharedDtor();
}

void DoubleArray::SharedDtor() {
}

void DoubleArray::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DoubleArray::descriptor() {
  protobuf_primitive_2fdouble_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_primitive_2fdouble_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const DoubleArray& DoubleArray::default_instance() {
  protobuf_primitive_2fdouble_2eproto::InitDefaults();
  return *internal_default_instance();
}

DoubleArray* DoubleArray::New(::google::protobuf::Arena* arena) const {
  DoubleArray* n = new DoubleArray;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void DoubleArray::Clear() {
// @@protoc_insertion_point(message_clear_start:choreo.DoubleArray)
  data_.Clear();
}

bool DoubleArray::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:choreo.DoubleArray)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .choreo.Double data = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_data()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:choreo.DoubleArray)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:choreo.DoubleArray)
  return false;
#undef DO_
}

void DoubleArray::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:choreo.DoubleArray)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .choreo.Double data = 1;
  for (unsigned int i = 0, n = this->data_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->data(i), output);
  }

  // @@protoc_insertion_point(serialize_end:choreo.DoubleArray)
}

::google::protobuf::uint8* DoubleArray::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:choreo.DoubleArray)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .choreo.Double data = 1;
  for (unsigned int i = 0, n = this->data_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->data(i), deterministic, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:choreo.DoubleArray)
  return target;
}

size_t DoubleArray::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:choreo.DoubleArray)
  size_t total_size = 0;

  // repeated .choreo.Double data = 1;
  {
    unsigned int count = this->data_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->data(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DoubleArray::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:choreo.DoubleArray)
  GOOGLE_DCHECK_NE(&from, this);
  const DoubleArray* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const DoubleArray>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:choreo.DoubleArray)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:choreo.DoubleArray)
    MergeFrom(*source);
  }
}

void DoubleArray::MergeFrom(const DoubleArray& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:choreo.DoubleArray)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  data_.MergeFrom(from.data_);
}

void DoubleArray::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:choreo.DoubleArray)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DoubleArray::CopyFrom(const DoubleArray& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:choreo.DoubleArray)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DoubleArray::IsInitialized() const {
  return true;
}

void DoubleArray::Swap(DoubleArray* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DoubleArray::InternalSwap(DoubleArray* other) {
  data_.InternalSwap(&other->data_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata DoubleArray::GetMetadata() const {
  protobuf_primitive_2fdouble_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_primitive_2fdouble_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// DoubleArray

// repeated .choreo.Double data = 1;
int DoubleArray::data_size() const {
  return data_.size();
}
void DoubleArray::clear_data() {
  data_.Clear();
}
const ::choreo::Double& DoubleArray::data(int index) const {
  // @@protoc_insertion_point(field_get:choreo.DoubleArray.data)
  return data_.Get(index);
}
::choreo::Double* DoubleArray::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:choreo.DoubleArray.data)
  return data_.Mutable(index);
}
::choreo::Double* DoubleArray::add_data() {
  // @@protoc_insertion_point(field_add:choreo.DoubleArray.data)
  return data_.Add();
}
::google::protobuf::RepeatedPtrField< ::choreo::Double >*
DoubleArray::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:choreo.DoubleArray.data)
  return &data_;
}
const ::google::protobuf::RepeatedPtrField< ::choreo::Double >&
DoubleArray::data() const {
  // @@protoc_insertion_point(field_list:choreo.DoubleArray.data)
  return data_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Double::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Double::Double()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_primitive_2fdouble_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:choreo.Double)
}
Double::Double(const Double& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  data_ = from.data_;
  // @@protoc_insertion_point(copy_constructor:choreo.Double)
}

void Double::SharedCtor() {
  data_ = 0;
  _cached_size_ = 0;
}

Double::~Double() {
  // @@protoc_insertion_point(destructor:choreo.Double)
  SharedDtor();
}

void Double::SharedDtor() {
}

void Double::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Double::descriptor() {
  protobuf_primitive_2fdouble_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_primitive_2fdouble_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Double& Double::default_instance() {
  protobuf_primitive_2fdouble_2eproto::InitDefaults();
  return *internal_default_instance();
}

Double* Double::New(::google::protobuf::Arena* arena) const {
  Double* n = new Double;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Double::Clear() {
// @@protoc_insertion_point(message_clear_start:choreo.Double)
  data_ = 0;
}

bool Double::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:choreo.Double)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double data = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &data_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:choreo.Double)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:choreo.Double)
  return false;
#undef DO_
}

void Double::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:choreo.Double)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double data = 1;
  if (this->data() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->data(), output);
  }

  // @@protoc_insertion_point(serialize_end:choreo.Double)
}

::google::protobuf::uint8* Double::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:choreo.Double)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double data = 1;
  if (this->data() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->data(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:choreo.Double)
  return target;
}

size_t Double::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:choreo.Double)
  size_t total_size = 0;

  // double data = 1;
  if (this->data() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Double::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:choreo.Double)
  GOOGLE_DCHECK_NE(&from, this);
  const Double* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Double>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:choreo.Double)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:choreo.Double)
    MergeFrom(*source);
  }
}

void Double::MergeFrom(const Double& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:choreo.Double)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.data() != 0) {
    set_data(from.data());
  }
}

void Double::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:choreo.Double)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Double::CopyFrom(const Double& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:choreo.Double)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Double::IsInitialized() const {
  return true;
}

void Double::Swap(Double* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Double::InternalSwap(Double* other) {
  std::swap(data_, other->data_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Double::GetMetadata() const {
  protobuf_primitive_2fdouble_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_primitive_2fdouble_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Double

// double data = 1;
void Double::clear_data() {
  data_ = 0;
}
double Double::data() const {
  // @@protoc_insertion_point(field_get:choreo.Double.data)
  return data_;
}
void Double::set_data(double value) {
  
  data_ = value;
  // @@protoc_insertion_point(field_set:choreo.Double.data)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace choreo

// @@protoc_insertion_point(global_scope)