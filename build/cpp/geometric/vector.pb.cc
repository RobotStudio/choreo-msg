// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: geometric/vector.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "geometric/vector.pb.h"

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
class Vector3StampedDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Vector3Stamped> {
} _Vector3Stamped_default_instance_;
class Vector3DefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Vector3> {
} _Vector3_default_instance_;

namespace protobuf_geometric_2fvector_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3Stamped, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3Stamped, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3Stamped, vector_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3, x_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3, y_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3, z_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Vector3Stamped)},
  { 7, -1, sizeof(Vector3)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Vector3Stamped_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_Vector3_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "geometric/vector.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _Vector3Stamped_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _Vector3_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::choreo::protobuf_primitive_2fheader_2eproto::InitDefaults();
  _Vector3Stamped_default_instance_.DefaultConstruct();
  _Vector3_default_instance_.DefaultConstruct();
  _Vector3Stamped_default_instance_.get_mutable()->header_ = const_cast< ::choreo::Header*>(
      ::choreo::Header::internal_default_instance());
  _Vector3Stamped_default_instance_.get_mutable()->vector_ = const_cast< ::choreo::Vector3*>(
      ::choreo::Vector3::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\026geometric/vector.proto\022\006choreo\032\026primit"
      "ive/header.proto\"Q\n\016Vector3Stamped\022\036\n\006he"
      "ader\030\001 \001(\0132\016.choreo.Header\022\037\n\006vector\030\002 \001"
      "(\0132\017.choreo.Vector3\"*\n\007Vector3\022\t\n\001x\030\001 \001("
      "\001\022\t\n\001y\030\002 \001(\001\022\t\n\001z\030\003 \001(\001B+Z)github.com/Ro"
      "botStudio/choreo-msg/msg;msgb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 236);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "geometric/vector.proto", &protobuf_RegisterTypes);
  ::choreo::protobuf_primitive_2fheader_2eproto::AddDescriptors();
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

}  // namespace protobuf_geometric_2fvector_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Vector3Stamped::kHeaderFieldNumber;
const int Vector3Stamped::kVectorFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Vector3Stamped::Vector3Stamped()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_geometric_2fvector_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:choreo.Vector3Stamped)
}
Vector3Stamped::Vector3Stamped(const Vector3Stamped& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::choreo::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_vector()) {
    vector_ = new ::choreo::Vector3(*from.vector_);
  } else {
    vector_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:choreo.Vector3Stamped)
}

void Vector3Stamped::SharedCtor() {
  ::memset(&header_, 0, reinterpret_cast<char*>(&vector_) -
    reinterpret_cast<char*>(&header_) + sizeof(vector_));
  _cached_size_ = 0;
}

Vector3Stamped::~Vector3Stamped() {
  // @@protoc_insertion_point(destructor:choreo.Vector3Stamped)
  SharedDtor();
}

void Vector3Stamped::SharedDtor() {
  if (this != internal_default_instance()) {
    delete header_;
  }
  if (this != internal_default_instance()) {
    delete vector_;
  }
}

void Vector3Stamped::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Vector3Stamped::descriptor() {
  protobuf_geometric_2fvector_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_geometric_2fvector_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Vector3Stamped& Vector3Stamped::default_instance() {
  protobuf_geometric_2fvector_2eproto::InitDefaults();
  return *internal_default_instance();
}

Vector3Stamped* Vector3Stamped::New(::google::protobuf::Arena* arena) const {
  Vector3Stamped* n = new Vector3Stamped;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Vector3Stamped::Clear() {
// @@protoc_insertion_point(message_clear_start:choreo.Vector3Stamped)
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && vector_ != NULL) {
    delete vector_;
  }
  vector_ = NULL;
}

bool Vector3Stamped::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:choreo.Vector3Stamped)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .choreo.Header header = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .choreo.Vector3 vector = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_vector()));
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
  // @@protoc_insertion_point(parse_success:choreo.Vector3Stamped)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:choreo.Vector3Stamped)
  return false;
#undef DO_
}

void Vector3Stamped::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:choreo.Vector3Stamped)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .choreo.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->header_, output);
  }

  // .choreo.Vector3 vector = 2;
  if (this->has_vector()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->vector_, output);
  }

  // @@protoc_insertion_point(serialize_end:choreo.Vector3Stamped)
}

::google::protobuf::uint8* Vector3Stamped::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:choreo.Vector3Stamped)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .choreo.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->header_, deterministic, target);
  }

  // .choreo.Vector3 vector = 2;
  if (this->has_vector()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->vector_, deterministic, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:choreo.Vector3Stamped)
  return target;
}

size_t Vector3Stamped::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:choreo.Vector3Stamped)
  size_t total_size = 0;

  // .choreo.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->header_);
  }

  // .choreo.Vector3 vector = 2;
  if (this->has_vector()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->vector_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Vector3Stamped::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:choreo.Vector3Stamped)
  GOOGLE_DCHECK_NE(&from, this);
  const Vector3Stamped* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Vector3Stamped>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:choreo.Vector3Stamped)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:choreo.Vector3Stamped)
    MergeFrom(*source);
  }
}

void Vector3Stamped::MergeFrom(const Vector3Stamped& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:choreo.Vector3Stamped)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::choreo::Header::MergeFrom(from.header());
  }
  if (from.has_vector()) {
    mutable_vector()->::choreo::Vector3::MergeFrom(from.vector());
  }
}

void Vector3Stamped::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:choreo.Vector3Stamped)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vector3Stamped::CopyFrom(const Vector3Stamped& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:choreo.Vector3Stamped)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vector3Stamped::IsInitialized() const {
  return true;
}

void Vector3Stamped::Swap(Vector3Stamped* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Vector3Stamped::InternalSwap(Vector3Stamped* other) {
  std::swap(header_, other->header_);
  std::swap(vector_, other->vector_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Vector3Stamped::GetMetadata() const {
  protobuf_geometric_2fvector_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_geometric_2fvector_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Vector3Stamped

// .choreo.Header header = 1;
bool Vector3Stamped::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
void Vector3Stamped::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) delete header_;
  header_ = NULL;
}
const ::choreo::Header& Vector3Stamped::header() const {
  // @@protoc_insertion_point(field_get:choreo.Vector3Stamped.header)
  return header_ != NULL ? *header_
                         : *::choreo::Header::internal_default_instance();
}
::choreo::Header* Vector3Stamped::mutable_header() {
  
  if (header_ == NULL) {
    header_ = new ::choreo::Header;
  }
  // @@protoc_insertion_point(field_mutable:choreo.Vector3Stamped.header)
  return header_;
}
::choreo::Header* Vector3Stamped::release_header() {
  // @@protoc_insertion_point(field_release:choreo.Vector3Stamped.header)
  
  ::choreo::Header* temp = header_;
  header_ = NULL;
  return temp;
}
void Vector3Stamped::set_allocated_header(::choreo::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.Vector3Stamped.header)
}

// .choreo.Vector3 vector = 2;
bool Vector3Stamped::has_vector() const {
  return this != internal_default_instance() && vector_ != NULL;
}
void Vector3Stamped::clear_vector() {
  if (GetArenaNoVirtual() == NULL && vector_ != NULL) delete vector_;
  vector_ = NULL;
}
const ::choreo::Vector3& Vector3Stamped::vector() const {
  // @@protoc_insertion_point(field_get:choreo.Vector3Stamped.vector)
  return vector_ != NULL ? *vector_
                         : *::choreo::Vector3::internal_default_instance();
}
::choreo::Vector3* Vector3Stamped::mutable_vector() {
  
  if (vector_ == NULL) {
    vector_ = new ::choreo::Vector3;
  }
  // @@protoc_insertion_point(field_mutable:choreo.Vector3Stamped.vector)
  return vector_;
}
::choreo::Vector3* Vector3Stamped::release_vector() {
  // @@protoc_insertion_point(field_release:choreo.Vector3Stamped.vector)
  
  ::choreo::Vector3* temp = vector_;
  vector_ = NULL;
  return temp;
}
void Vector3Stamped::set_allocated_vector(::choreo::Vector3* vector) {
  delete vector_;
  vector_ = vector;
  if (vector) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.Vector3Stamped.vector)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Vector3::kXFieldNumber;
const int Vector3::kYFieldNumber;
const int Vector3::kZFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Vector3::Vector3()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_geometric_2fvector_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:choreo.Vector3)
}
Vector3::Vector3(const Vector3& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&x_) + sizeof(z_));
  // @@protoc_insertion_point(copy_constructor:choreo.Vector3)
}

void Vector3::SharedCtor() {
  ::memset(&x_, 0, reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&x_) + sizeof(z_));
  _cached_size_ = 0;
}

Vector3::~Vector3() {
  // @@protoc_insertion_point(destructor:choreo.Vector3)
  SharedDtor();
}

void Vector3::SharedDtor() {
}

void Vector3::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Vector3::descriptor() {
  protobuf_geometric_2fvector_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_geometric_2fvector_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Vector3& Vector3::default_instance() {
  protobuf_geometric_2fvector_2eproto::InitDefaults();
  return *internal_default_instance();
}

Vector3* Vector3::New(::google::protobuf::Arena* arena) const {
  Vector3* n = new Vector3;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Vector3::Clear() {
// @@protoc_insertion_point(message_clear_start:choreo.Vector3)
  ::memset(&x_, 0, reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&x_) + sizeof(z_));
}

bool Vector3::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:choreo.Vector3)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double x = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double y = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double z = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &z_)));
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
  // @@protoc_insertion_point(parse_success:choreo.Vector3)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:choreo.Vector3)
  return false;
#undef DO_
}

void Vector3::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:choreo.Vector3)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double x = 1;
  if (this->x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->x(), output);
  }

  // double y = 2;
  if (this->y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->y(), output);
  }

  // double z = 3;
  if (this->z() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->z(), output);
  }

  // @@protoc_insertion_point(serialize_end:choreo.Vector3)
}

::google::protobuf::uint8* Vector3::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:choreo.Vector3)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double x = 1;
  if (this->x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->x(), target);
  }

  // double y = 2;
  if (this->y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->y(), target);
  }

  // double z = 3;
  if (this->z() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->z(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:choreo.Vector3)
  return target;
}

size_t Vector3::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:choreo.Vector3)
  size_t total_size = 0;

  // double x = 1;
  if (this->x() != 0) {
    total_size += 1 + 8;
  }

  // double y = 2;
  if (this->y() != 0) {
    total_size += 1 + 8;
  }

  // double z = 3;
  if (this->z() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Vector3::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:choreo.Vector3)
  GOOGLE_DCHECK_NE(&from, this);
  const Vector3* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Vector3>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:choreo.Vector3)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:choreo.Vector3)
    MergeFrom(*source);
  }
}

void Vector3::MergeFrom(const Vector3& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:choreo.Vector3)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.x() != 0) {
    set_x(from.x());
  }
  if (from.y() != 0) {
    set_y(from.y());
  }
  if (from.z() != 0) {
    set_z(from.z());
  }
}

void Vector3::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:choreo.Vector3)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vector3::CopyFrom(const Vector3& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:choreo.Vector3)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vector3::IsInitialized() const {
  return true;
}

void Vector3::Swap(Vector3* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Vector3::InternalSwap(Vector3* other) {
  std::swap(x_, other->x_);
  std::swap(y_, other->y_);
  std::swap(z_, other->z_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Vector3::GetMetadata() const {
  protobuf_geometric_2fvector_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_geometric_2fvector_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Vector3

// double x = 1;
void Vector3::clear_x() {
  x_ = 0;
}
double Vector3::x() const {
  // @@protoc_insertion_point(field_get:choreo.Vector3.x)
  return x_;
}
void Vector3::set_x(double value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:choreo.Vector3.x)
}

// double y = 2;
void Vector3::clear_y() {
  y_ = 0;
}
double Vector3::y() const {
  // @@protoc_insertion_point(field_get:choreo.Vector3.y)
  return y_;
}
void Vector3::set_y(double value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:choreo.Vector3.y)
}

// double z = 3;
void Vector3::clear_z() {
  z_ = 0;
}
double Vector3::z() const {
  // @@protoc_insertion_point(field_get:choreo.Vector3.z)
  return z_;
}
void Vector3::set_z(double value) {
  
  z_ = value;
  // @@protoc_insertion_point(field_set:choreo.Vector3.z)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace choreo

// @@protoc_insertion_point(global_scope)