// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: geometric/quaternion.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "geometric/quaternion.pb.h"

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
class QuaternionStampedDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<QuaternionStamped> {
} _QuaternionStamped_default_instance_;
class QuaternionDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Quaternion> {
} _Quaternion_default_instance_;

namespace protobuf_geometric_2fquaternion_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QuaternionStamped, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QuaternionStamped, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QuaternionStamped, quaternion_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Quaternion, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Quaternion, x_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Quaternion, y_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Quaternion, z_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Quaternion, w_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(QuaternionStamped)},
  { 7, -1, sizeof(Quaternion)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_QuaternionStamped_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_Quaternion_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "geometric/quaternion.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _QuaternionStamped_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _Quaternion_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::choreo::protobuf_primitive_2fheader_2eproto::InitDefaults();
  ::choreo::protobuf_primitive_2ffloat_2eproto::InitDefaults();
  _QuaternionStamped_default_instance_.DefaultConstruct();
  _Quaternion_default_instance_.DefaultConstruct();
  _QuaternionStamped_default_instance_.get_mutable()->header_ = const_cast< ::choreo::Header*>(
      ::choreo::Header::internal_default_instance());
  _QuaternionStamped_default_instance_.get_mutable()->quaternion_ = const_cast< ::choreo::Quaternion*>(
      ::choreo::Quaternion::internal_default_instance());
  _Quaternion_default_instance_.get_mutable()->x_ = const_cast< ::choreo::Float64*>(
      ::choreo::Float64::internal_default_instance());
  _Quaternion_default_instance_.get_mutable()->y_ = const_cast< ::choreo::Float64*>(
      ::choreo::Float64::internal_default_instance());
  _Quaternion_default_instance_.get_mutable()->z_ = const_cast< ::choreo::Float64*>(
      ::choreo::Float64::internal_default_instance());
  _Quaternion_default_instance_.get_mutable()->w_ = const_cast< ::choreo::Float64*>(
      ::choreo::Float64::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\032geometric/quaternion.proto\022\006choreo\032\026pr"
      "imitive/header.proto\032\025primitive/float.pr"
      "oto\"[\n\021QuaternionStamped\022\036\n\006header\030\001 \001(\013"
      "2\016.choreo.Header\022&\n\nquaternion\030\002 \001(\0132\022.c"
      "horeo.Quaternion\"|\n\nQuaternion\022\032\n\001x\030\001 \001("
      "\0132\017.choreo.Float64\022\032\n\001y\030\002 \001(\0132\017.choreo.F"
      "loat64\022\032\n\001z\030\003 \001(\0132\017.choreo.Float64\022\032\n\001w\030"
      "\004 \001(\0132\017.choreo.Float64b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 310);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "geometric/quaternion.proto", &protobuf_RegisterTypes);
  ::choreo::protobuf_primitive_2fheader_2eproto::AddDescriptors();
  ::choreo::protobuf_primitive_2ffloat_2eproto::AddDescriptors();
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

}  // namespace protobuf_geometric_2fquaternion_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int QuaternionStamped::kHeaderFieldNumber;
const int QuaternionStamped::kQuaternionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

QuaternionStamped::QuaternionStamped()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_geometric_2fquaternion_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:choreo.QuaternionStamped)
}
QuaternionStamped::QuaternionStamped(const QuaternionStamped& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::choreo::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_quaternion()) {
    quaternion_ = new ::choreo::Quaternion(*from.quaternion_);
  } else {
    quaternion_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:choreo.QuaternionStamped)
}

void QuaternionStamped::SharedCtor() {
  ::memset(&header_, 0, reinterpret_cast<char*>(&quaternion_) -
    reinterpret_cast<char*>(&header_) + sizeof(quaternion_));
  _cached_size_ = 0;
}

QuaternionStamped::~QuaternionStamped() {
  // @@protoc_insertion_point(destructor:choreo.QuaternionStamped)
  SharedDtor();
}

void QuaternionStamped::SharedDtor() {
  if (this != internal_default_instance()) {
    delete header_;
  }
  if (this != internal_default_instance()) {
    delete quaternion_;
  }
}

void QuaternionStamped::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* QuaternionStamped::descriptor() {
  protobuf_geometric_2fquaternion_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_geometric_2fquaternion_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const QuaternionStamped& QuaternionStamped::default_instance() {
  protobuf_geometric_2fquaternion_2eproto::InitDefaults();
  return *internal_default_instance();
}

QuaternionStamped* QuaternionStamped::New(::google::protobuf::Arena* arena) const {
  QuaternionStamped* n = new QuaternionStamped;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void QuaternionStamped::Clear() {
// @@protoc_insertion_point(message_clear_start:choreo.QuaternionStamped)
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && quaternion_ != NULL) {
    delete quaternion_;
  }
  quaternion_ = NULL;
}

bool QuaternionStamped::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:choreo.QuaternionStamped)
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

      // .choreo.Quaternion quaternion = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_quaternion()));
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
  // @@protoc_insertion_point(parse_success:choreo.QuaternionStamped)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:choreo.QuaternionStamped)
  return false;
#undef DO_
}

void QuaternionStamped::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:choreo.QuaternionStamped)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .choreo.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->header_, output);
  }

  // .choreo.Quaternion quaternion = 2;
  if (this->has_quaternion()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->quaternion_, output);
  }

  // @@protoc_insertion_point(serialize_end:choreo.QuaternionStamped)
}

::google::protobuf::uint8* QuaternionStamped::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:choreo.QuaternionStamped)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .choreo.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->header_, deterministic, target);
  }

  // .choreo.Quaternion quaternion = 2;
  if (this->has_quaternion()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->quaternion_, deterministic, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:choreo.QuaternionStamped)
  return target;
}

size_t QuaternionStamped::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:choreo.QuaternionStamped)
  size_t total_size = 0;

  // .choreo.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->header_);
  }

  // .choreo.Quaternion quaternion = 2;
  if (this->has_quaternion()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->quaternion_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void QuaternionStamped::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:choreo.QuaternionStamped)
  GOOGLE_DCHECK_NE(&from, this);
  const QuaternionStamped* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const QuaternionStamped>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:choreo.QuaternionStamped)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:choreo.QuaternionStamped)
    MergeFrom(*source);
  }
}

void QuaternionStamped::MergeFrom(const QuaternionStamped& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:choreo.QuaternionStamped)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::choreo::Header::MergeFrom(from.header());
  }
  if (from.has_quaternion()) {
    mutable_quaternion()->::choreo::Quaternion::MergeFrom(from.quaternion());
  }
}

void QuaternionStamped::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:choreo.QuaternionStamped)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void QuaternionStamped::CopyFrom(const QuaternionStamped& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:choreo.QuaternionStamped)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QuaternionStamped::IsInitialized() const {
  return true;
}

void QuaternionStamped::Swap(QuaternionStamped* other) {
  if (other == this) return;
  InternalSwap(other);
}
void QuaternionStamped::InternalSwap(QuaternionStamped* other) {
  std::swap(header_, other->header_);
  std::swap(quaternion_, other->quaternion_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata QuaternionStamped::GetMetadata() const {
  protobuf_geometric_2fquaternion_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_geometric_2fquaternion_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// QuaternionStamped

// .choreo.Header header = 1;
bool QuaternionStamped::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
void QuaternionStamped::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) delete header_;
  header_ = NULL;
}
const ::choreo::Header& QuaternionStamped::header() const {
  // @@protoc_insertion_point(field_get:choreo.QuaternionStamped.header)
  return header_ != NULL ? *header_
                         : *::choreo::Header::internal_default_instance();
}
::choreo::Header* QuaternionStamped::mutable_header() {
  
  if (header_ == NULL) {
    header_ = new ::choreo::Header;
  }
  // @@protoc_insertion_point(field_mutable:choreo.QuaternionStamped.header)
  return header_;
}
::choreo::Header* QuaternionStamped::release_header() {
  // @@protoc_insertion_point(field_release:choreo.QuaternionStamped.header)
  
  ::choreo::Header* temp = header_;
  header_ = NULL;
  return temp;
}
void QuaternionStamped::set_allocated_header(::choreo::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.QuaternionStamped.header)
}

// .choreo.Quaternion quaternion = 2;
bool QuaternionStamped::has_quaternion() const {
  return this != internal_default_instance() && quaternion_ != NULL;
}
void QuaternionStamped::clear_quaternion() {
  if (GetArenaNoVirtual() == NULL && quaternion_ != NULL) delete quaternion_;
  quaternion_ = NULL;
}
const ::choreo::Quaternion& QuaternionStamped::quaternion() const {
  // @@protoc_insertion_point(field_get:choreo.QuaternionStamped.quaternion)
  return quaternion_ != NULL ? *quaternion_
                         : *::choreo::Quaternion::internal_default_instance();
}
::choreo::Quaternion* QuaternionStamped::mutable_quaternion() {
  
  if (quaternion_ == NULL) {
    quaternion_ = new ::choreo::Quaternion;
  }
  // @@protoc_insertion_point(field_mutable:choreo.QuaternionStamped.quaternion)
  return quaternion_;
}
::choreo::Quaternion* QuaternionStamped::release_quaternion() {
  // @@protoc_insertion_point(field_release:choreo.QuaternionStamped.quaternion)
  
  ::choreo::Quaternion* temp = quaternion_;
  quaternion_ = NULL;
  return temp;
}
void QuaternionStamped::set_allocated_quaternion(::choreo::Quaternion* quaternion) {
  delete quaternion_;
  quaternion_ = quaternion;
  if (quaternion) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.QuaternionStamped.quaternion)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Quaternion::kXFieldNumber;
const int Quaternion::kYFieldNumber;
const int Quaternion::kZFieldNumber;
const int Quaternion::kWFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Quaternion::Quaternion()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_geometric_2fquaternion_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:choreo.Quaternion)
}
Quaternion::Quaternion(const Quaternion& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_x()) {
    x_ = new ::choreo::Float64(*from.x_);
  } else {
    x_ = NULL;
  }
  if (from.has_y()) {
    y_ = new ::choreo::Float64(*from.y_);
  } else {
    y_ = NULL;
  }
  if (from.has_z()) {
    z_ = new ::choreo::Float64(*from.z_);
  } else {
    z_ = NULL;
  }
  if (from.has_w()) {
    w_ = new ::choreo::Float64(*from.w_);
  } else {
    w_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:choreo.Quaternion)
}

void Quaternion::SharedCtor() {
  ::memset(&x_, 0, reinterpret_cast<char*>(&w_) -
    reinterpret_cast<char*>(&x_) + sizeof(w_));
  _cached_size_ = 0;
}

Quaternion::~Quaternion() {
  // @@protoc_insertion_point(destructor:choreo.Quaternion)
  SharedDtor();
}

void Quaternion::SharedDtor() {
  if (this != internal_default_instance()) {
    delete x_;
  }
  if (this != internal_default_instance()) {
    delete y_;
  }
  if (this != internal_default_instance()) {
    delete z_;
  }
  if (this != internal_default_instance()) {
    delete w_;
  }
}

void Quaternion::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Quaternion::descriptor() {
  protobuf_geometric_2fquaternion_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_geometric_2fquaternion_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Quaternion& Quaternion::default_instance() {
  protobuf_geometric_2fquaternion_2eproto::InitDefaults();
  return *internal_default_instance();
}

Quaternion* Quaternion::New(::google::protobuf::Arena* arena) const {
  Quaternion* n = new Quaternion;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Quaternion::Clear() {
// @@protoc_insertion_point(message_clear_start:choreo.Quaternion)
  if (GetArenaNoVirtual() == NULL && x_ != NULL) {
    delete x_;
  }
  x_ = NULL;
  if (GetArenaNoVirtual() == NULL && y_ != NULL) {
    delete y_;
  }
  y_ = NULL;
  if (GetArenaNoVirtual() == NULL && z_ != NULL) {
    delete z_;
  }
  z_ = NULL;
  if (GetArenaNoVirtual() == NULL && w_ != NULL) {
    delete w_;
  }
  w_ = NULL;
}

bool Quaternion::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:choreo.Quaternion)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .choreo.Float64 x = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_x()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .choreo.Float64 y = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_y()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .choreo.Float64 z = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_z()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .choreo.Float64 w = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_w()));
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
  // @@protoc_insertion_point(parse_success:choreo.Quaternion)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:choreo.Quaternion)
  return false;
#undef DO_
}

void Quaternion::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:choreo.Quaternion)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .choreo.Float64 x = 1;
  if (this->has_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->x_, output);
  }

  // .choreo.Float64 y = 2;
  if (this->has_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->y_, output);
  }

  // .choreo.Float64 z = 3;
  if (this->has_z()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->z_, output);
  }

  // .choreo.Float64 w = 4;
  if (this->has_w()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->w_, output);
  }

  // @@protoc_insertion_point(serialize_end:choreo.Quaternion)
}

::google::protobuf::uint8* Quaternion::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:choreo.Quaternion)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .choreo.Float64 x = 1;
  if (this->has_x()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->x_, deterministic, target);
  }

  // .choreo.Float64 y = 2;
  if (this->has_y()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->y_, deterministic, target);
  }

  // .choreo.Float64 z = 3;
  if (this->has_z()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->z_, deterministic, target);
  }

  // .choreo.Float64 w = 4;
  if (this->has_w()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->w_, deterministic, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:choreo.Quaternion)
  return target;
}

size_t Quaternion::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:choreo.Quaternion)
  size_t total_size = 0;

  // .choreo.Float64 x = 1;
  if (this->has_x()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->x_);
  }

  // .choreo.Float64 y = 2;
  if (this->has_y()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->y_);
  }

  // .choreo.Float64 z = 3;
  if (this->has_z()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->z_);
  }

  // .choreo.Float64 w = 4;
  if (this->has_w()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->w_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Quaternion::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:choreo.Quaternion)
  GOOGLE_DCHECK_NE(&from, this);
  const Quaternion* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Quaternion>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:choreo.Quaternion)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:choreo.Quaternion)
    MergeFrom(*source);
  }
}

void Quaternion::MergeFrom(const Quaternion& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:choreo.Quaternion)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_x()) {
    mutable_x()->::choreo::Float64::MergeFrom(from.x());
  }
  if (from.has_y()) {
    mutable_y()->::choreo::Float64::MergeFrom(from.y());
  }
  if (from.has_z()) {
    mutable_z()->::choreo::Float64::MergeFrom(from.z());
  }
  if (from.has_w()) {
    mutable_w()->::choreo::Float64::MergeFrom(from.w());
  }
}

void Quaternion::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:choreo.Quaternion)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Quaternion::CopyFrom(const Quaternion& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:choreo.Quaternion)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Quaternion::IsInitialized() const {
  return true;
}

void Quaternion::Swap(Quaternion* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Quaternion::InternalSwap(Quaternion* other) {
  std::swap(x_, other->x_);
  std::swap(y_, other->y_);
  std::swap(z_, other->z_);
  std::swap(w_, other->w_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Quaternion::GetMetadata() const {
  protobuf_geometric_2fquaternion_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_geometric_2fquaternion_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Quaternion

// .choreo.Float64 x = 1;
bool Quaternion::has_x() const {
  return this != internal_default_instance() && x_ != NULL;
}
void Quaternion::clear_x() {
  if (GetArenaNoVirtual() == NULL && x_ != NULL) delete x_;
  x_ = NULL;
}
const ::choreo::Float64& Quaternion::x() const {
  // @@protoc_insertion_point(field_get:choreo.Quaternion.x)
  return x_ != NULL ? *x_
                         : *::choreo::Float64::internal_default_instance();
}
::choreo::Float64* Quaternion::mutable_x() {
  
  if (x_ == NULL) {
    x_ = new ::choreo::Float64;
  }
  // @@protoc_insertion_point(field_mutable:choreo.Quaternion.x)
  return x_;
}
::choreo::Float64* Quaternion::release_x() {
  // @@protoc_insertion_point(field_release:choreo.Quaternion.x)
  
  ::choreo::Float64* temp = x_;
  x_ = NULL;
  return temp;
}
void Quaternion::set_allocated_x(::choreo::Float64* x) {
  delete x_;
  x_ = x;
  if (x) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.Quaternion.x)
}

// .choreo.Float64 y = 2;
bool Quaternion::has_y() const {
  return this != internal_default_instance() && y_ != NULL;
}
void Quaternion::clear_y() {
  if (GetArenaNoVirtual() == NULL && y_ != NULL) delete y_;
  y_ = NULL;
}
const ::choreo::Float64& Quaternion::y() const {
  // @@protoc_insertion_point(field_get:choreo.Quaternion.y)
  return y_ != NULL ? *y_
                         : *::choreo::Float64::internal_default_instance();
}
::choreo::Float64* Quaternion::mutable_y() {
  
  if (y_ == NULL) {
    y_ = new ::choreo::Float64;
  }
  // @@protoc_insertion_point(field_mutable:choreo.Quaternion.y)
  return y_;
}
::choreo::Float64* Quaternion::release_y() {
  // @@protoc_insertion_point(field_release:choreo.Quaternion.y)
  
  ::choreo::Float64* temp = y_;
  y_ = NULL;
  return temp;
}
void Quaternion::set_allocated_y(::choreo::Float64* y) {
  delete y_;
  y_ = y;
  if (y) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.Quaternion.y)
}

// .choreo.Float64 z = 3;
bool Quaternion::has_z() const {
  return this != internal_default_instance() && z_ != NULL;
}
void Quaternion::clear_z() {
  if (GetArenaNoVirtual() == NULL && z_ != NULL) delete z_;
  z_ = NULL;
}
const ::choreo::Float64& Quaternion::z() const {
  // @@protoc_insertion_point(field_get:choreo.Quaternion.z)
  return z_ != NULL ? *z_
                         : *::choreo::Float64::internal_default_instance();
}
::choreo::Float64* Quaternion::mutable_z() {
  
  if (z_ == NULL) {
    z_ = new ::choreo::Float64;
  }
  // @@protoc_insertion_point(field_mutable:choreo.Quaternion.z)
  return z_;
}
::choreo::Float64* Quaternion::release_z() {
  // @@protoc_insertion_point(field_release:choreo.Quaternion.z)
  
  ::choreo::Float64* temp = z_;
  z_ = NULL;
  return temp;
}
void Quaternion::set_allocated_z(::choreo::Float64* z) {
  delete z_;
  z_ = z;
  if (z) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.Quaternion.z)
}

// .choreo.Float64 w = 4;
bool Quaternion::has_w() const {
  return this != internal_default_instance() && w_ != NULL;
}
void Quaternion::clear_w() {
  if (GetArenaNoVirtual() == NULL && w_ != NULL) delete w_;
  w_ = NULL;
}
const ::choreo::Float64& Quaternion::w() const {
  // @@protoc_insertion_point(field_get:choreo.Quaternion.w)
  return w_ != NULL ? *w_
                         : *::choreo::Float64::internal_default_instance();
}
::choreo::Float64* Quaternion::mutable_w() {
  
  if (w_ == NULL) {
    w_ = new ::choreo::Float64;
  }
  // @@protoc_insertion_point(field_mutable:choreo.Quaternion.w)
  return w_;
}
::choreo::Float64* Quaternion::release_w() {
  // @@protoc_insertion_point(field_release:choreo.Quaternion.w)
  
  ::choreo::Float64* temp = w_;
  w_ = NULL;
  return temp;
}
void Quaternion::set_allocated_w(::choreo::Float64* w) {
  delete w_;
  w_ = w;
  if (w) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:choreo.Quaternion.w)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace choreo

// @@protoc_insertion_point(global_scope)
