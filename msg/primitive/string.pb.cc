// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: primitive/string.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "primitive/string.pb.h"

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
class StringDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<String> {
} _String_default_instance_;

namespace protobuf_primitive_2fstring_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

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
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(String, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(String, data_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(String)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_String_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "primitive/string.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _String_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _String_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\026primitive/string.proto\022\006choreo\"\026\n\006Stri"
      "ng\022\014\n\004data\030\001 \001(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 64);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "primitive/string.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_primitive_2fstring_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int String::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

String::String()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_primitive_2fstring_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:choreo.String)
}
String::String(const String& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.data().size() > 0) {
    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  // @@protoc_insertion_point(copy_constructor:choreo.String)
}

void String::SharedCtor() {
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

String::~String() {
  // @@protoc_insertion_point(destructor:choreo.String)
  SharedDtor();
}

void String::SharedDtor() {
  data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void String::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* String::descriptor() {
  protobuf_primitive_2fstring_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_primitive_2fstring_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const String& String::default_instance() {
  protobuf_primitive_2fstring_2eproto::InitDefaults();
  return *internal_default_instance();
}

String* String::New(::google::protobuf::Arena* arena) const {
  String* n = new String;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void String::Clear() {
// @@protoc_insertion_point(message_clear_start:choreo.String)
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool String::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:choreo.String)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string data = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_data()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->data().data(), this->data().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "choreo.String.data"));
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
  // @@protoc_insertion_point(parse_success:choreo.String)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:choreo.String)
  return false;
#undef DO_
}

void String::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:choreo.String)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string data = 1;
  if (this->data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->data().data(), this->data().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "choreo.String.data");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->data(), output);
  }

  // @@protoc_insertion_point(serialize_end:choreo.String)
}

::google::protobuf::uint8* String::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:choreo.String)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string data = 1;
  if (this->data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->data().data(), this->data().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "choreo.String.data");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->data(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:choreo.String)
  return target;
}

size_t String::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:choreo.String)
  size_t total_size = 0;

  // string data = 1;
  if (this->data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->data());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void String::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:choreo.String)
  GOOGLE_DCHECK_NE(&from, this);
  const String* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const String>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:choreo.String)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:choreo.String)
    MergeFrom(*source);
  }
}

void String::MergeFrom(const String& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:choreo.String)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.data().size() > 0) {

    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
}

void String::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:choreo.String)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void String::CopyFrom(const String& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:choreo.String)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool String::IsInitialized() const {
  return true;
}

void String::Swap(String* other) {
  if (other == this) return;
  InternalSwap(other);
}
void String::InternalSwap(String* other) {
  data_.Swap(&other->data_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata String::GetMetadata() const {
  protobuf_primitive_2fstring_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_primitive_2fstring_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// String

// string data = 1;
void String::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& String::data() const {
  // @@protoc_insertion_point(field_get:choreo.String.data)
  return data_.GetNoArena();
}
void String::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:choreo.String.data)
}
#if LANG_CXX11
void String::set_data(::std::string&& value) {
  
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:choreo.String.data)
}
#endif
void String::set_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:choreo.String.data)
}
void String::set_data(const char* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:choreo.String.data)
}
::std::string* String::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:choreo.String.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* String::release_data() {
  // @@protoc_insertion_point(field_release:choreo.String.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void String::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:choreo.String.data)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace choreo

// @@protoc_insertion_point(global_scope)
