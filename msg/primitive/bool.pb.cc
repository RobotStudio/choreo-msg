// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: primitive/bool.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "primitive/bool.pb.h"

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
class BoolArrayDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<BoolArray> {
} _BoolArray_default_instance_;
class BoolDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Bool> {
} _Bool_default_instance_;

namespace protobuf_primitive_2fbool_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoolArray, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoolArray, data_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Bool, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Bool, data_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(BoolArray)},
  { 6, -1, sizeof(Bool)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_BoolArray_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_Bool_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "primitive/bool.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _BoolArray_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _Bool_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _BoolArray_default_instance_.DefaultConstruct();
  _Bool_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\024primitive/bool.proto\022\006choreo\"\'\n\tBoolAr"
      "ray\022\032\n\004data\030\001 \003(\0132\014.choreo.Bool\"\024\n\004Bool\022"
      "\014\n\004data\030\001 \001(\010BIZGgithub.com/RobotStudio/"
      "choreo-msg/msg/primitive;rs.choreo.msg.p"
      "rimitiveb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 176);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "primitive/bool.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_primitive_2fbool_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BoolArray::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BoolArray::BoolArray()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_primitive_2fbool_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:choreo.BoolArray)
}
BoolArray::BoolArray(const BoolArray& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      data_(from.data_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:choreo.BoolArray)
}

void BoolArray::SharedCtor() {
  _cached_size_ = 0;
}

BoolArray::~BoolArray() {
  // @@protoc_insertion_point(destructor:choreo.BoolArray)
  SharedDtor();
}

void BoolArray::SharedDtor() {
}

void BoolArray::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BoolArray::descriptor() {
  protobuf_primitive_2fbool_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_primitive_2fbool_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const BoolArray& BoolArray::default_instance() {
  protobuf_primitive_2fbool_2eproto::InitDefaults();
  return *internal_default_instance();
}

BoolArray* BoolArray::New(::google::protobuf::Arena* arena) const {
  BoolArray* n = new BoolArray;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BoolArray::Clear() {
// @@protoc_insertion_point(message_clear_start:choreo.BoolArray)
  data_.Clear();
}

bool BoolArray::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:choreo.BoolArray)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .choreo.Bool data = 1;
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
  // @@protoc_insertion_point(parse_success:choreo.BoolArray)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:choreo.BoolArray)
  return false;
#undef DO_
}

void BoolArray::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:choreo.BoolArray)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .choreo.Bool data = 1;
  for (unsigned int i = 0, n = this->data_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->data(i), output);
  }

  // @@protoc_insertion_point(serialize_end:choreo.BoolArray)
}

::google::protobuf::uint8* BoolArray::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:choreo.BoolArray)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .choreo.Bool data = 1;
  for (unsigned int i = 0, n = this->data_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->data(i), deterministic, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:choreo.BoolArray)
  return target;
}

size_t BoolArray::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:choreo.BoolArray)
  size_t total_size = 0;

  // repeated .choreo.Bool data = 1;
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

void BoolArray::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:choreo.BoolArray)
  GOOGLE_DCHECK_NE(&from, this);
  const BoolArray* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const BoolArray>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:choreo.BoolArray)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:choreo.BoolArray)
    MergeFrom(*source);
  }
}

void BoolArray::MergeFrom(const BoolArray& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:choreo.BoolArray)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  data_.MergeFrom(from.data_);
}

void BoolArray::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:choreo.BoolArray)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BoolArray::CopyFrom(const BoolArray& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:choreo.BoolArray)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BoolArray::IsInitialized() const {
  return true;
}

void BoolArray::Swap(BoolArray* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BoolArray::InternalSwap(BoolArray* other) {
  data_.InternalSwap(&other->data_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata BoolArray::GetMetadata() const {
  protobuf_primitive_2fbool_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_primitive_2fbool_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BoolArray

// repeated .choreo.Bool data = 1;
int BoolArray::data_size() const {
  return data_.size();
}
void BoolArray::clear_data() {
  data_.Clear();
}
const ::choreo::Bool& BoolArray::data(int index) const {
  // @@protoc_insertion_point(field_get:choreo.BoolArray.data)
  return data_.Get(index);
}
::choreo::Bool* BoolArray::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:choreo.BoolArray.data)
  return data_.Mutable(index);
}
::choreo::Bool* BoolArray::add_data() {
  // @@protoc_insertion_point(field_add:choreo.BoolArray.data)
  return data_.Add();
}
::google::protobuf::RepeatedPtrField< ::choreo::Bool >*
BoolArray::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:choreo.BoolArray.data)
  return &data_;
}
const ::google::protobuf::RepeatedPtrField< ::choreo::Bool >&
BoolArray::data() const {
  // @@protoc_insertion_point(field_list:choreo.BoolArray.data)
  return data_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Bool::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Bool::Bool()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_primitive_2fbool_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:choreo.Bool)
}
Bool::Bool(const Bool& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  data_ = from.data_;
  // @@protoc_insertion_point(copy_constructor:choreo.Bool)
}

void Bool::SharedCtor() {
  data_ = false;
  _cached_size_ = 0;
}

Bool::~Bool() {
  // @@protoc_insertion_point(destructor:choreo.Bool)
  SharedDtor();
}

void Bool::SharedDtor() {
}

void Bool::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Bool::descriptor() {
  protobuf_primitive_2fbool_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_primitive_2fbool_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Bool& Bool::default_instance() {
  protobuf_primitive_2fbool_2eproto::InitDefaults();
  return *internal_default_instance();
}

Bool* Bool::New(::google::protobuf::Arena* arena) const {
  Bool* n = new Bool;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Bool::Clear() {
// @@protoc_insertion_point(message_clear_start:choreo.Bool)
  data_ = false;
}

bool Bool::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:choreo.Bool)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool data = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
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
  // @@protoc_insertion_point(parse_success:choreo.Bool)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:choreo.Bool)
  return false;
#undef DO_
}

void Bool::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:choreo.Bool)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool data = 1;
  if (this->data() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->data(), output);
  }

  // @@protoc_insertion_point(serialize_end:choreo.Bool)
}

::google::protobuf::uint8* Bool::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:choreo.Bool)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool data = 1;
  if (this->data() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->data(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:choreo.Bool)
  return target;
}

size_t Bool::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:choreo.Bool)
  size_t total_size = 0;

  // bool data = 1;
  if (this->data() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Bool::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:choreo.Bool)
  GOOGLE_DCHECK_NE(&from, this);
  const Bool* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Bool>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:choreo.Bool)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:choreo.Bool)
    MergeFrom(*source);
  }
}

void Bool::MergeFrom(const Bool& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:choreo.Bool)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.data() != 0) {
    set_data(from.data());
  }
}

void Bool::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:choreo.Bool)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Bool::CopyFrom(const Bool& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:choreo.Bool)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Bool::IsInitialized() const {
  return true;
}

void Bool::Swap(Bool* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Bool::InternalSwap(Bool* other) {
  std::swap(data_, other->data_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Bool::GetMetadata() const {
  protobuf_primitive_2fbool_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_primitive_2fbool_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Bool

// bool data = 1;
void Bool::clear_data() {
  data_ = false;
}
bool Bool::data() const {
  // @@protoc_insertion_point(field_get:choreo.Bool.data)
  return data_;
}
void Bool::set_data(bool value) {
  
  data_ = value;
  // @@protoc_insertion_point(field_set:choreo.Bool.data)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace choreo

// @@protoc_insertion_point(global_scope)
