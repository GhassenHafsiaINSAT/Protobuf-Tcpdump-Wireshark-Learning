// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: learning_example.proto
// Protobuf C++ Version: 5.26.1

#include "learning_example.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace Actia {

inline constexpr point::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : nom_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        id_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR point::point(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct pointDefaultTypeInternal {
  PROTOBUF_CONSTEXPR pointDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~pointDefaultTypeInternal() {}
  union {
    point _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 pointDefaultTypeInternal _point_default_instance_;

inline constexpr feature::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : nom_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        id_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR feature::feature(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct featureDefaultTypeInternal {
  PROTOBUF_CONSTEXPR featureDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~featureDefaultTypeInternal() {}
  union {
    feature _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 featureDefaultTypeInternal _feature_default_instance_;
}  // namespace Actia
static ::_pb::Metadata file_level_metadata_learning_5fexample_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_learning_5fexample_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_learning_5fexample_2eproto = nullptr;
const ::uint32_t
    TableStruct_learning_5fexample_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::Actia::point, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::Actia::point, _impl_.id_),
        PROTOBUF_FIELD_OFFSET(::Actia::point, _impl_.nom_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::Actia::feature, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::Actia::feature, _impl_.id_),
        PROTOBUF_FIELD_OFFSET(::Actia::feature, _impl_.nom_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::Actia::point)},
        {10, -1, -1, sizeof(::Actia::feature)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::Actia::_point_default_instance_._instance,
    &::Actia::_feature_default_instance_._instance,
};
const char descriptor_table_protodef_learning_5fexample_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\026learning_example.proto\022\005Actia\" \n\005point"
    "\022\n\n\002id\030\001 \001(\005\022\013\n\003nom\030\002 \001(\t\"\"\n\007feature\022\n\n\002"
    "id\030\001 \001(\005\022\013\n\003nom\030\002 \001(\t27\n\007CheckIn\022,\n\nGetF"
    "eature\022\014.Actia.point\032\016.Actia.feature\"\000b\006"
    "proto3"
};
static ::absl::once_flag descriptor_table_learning_5fexample_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_learning_5fexample_2eproto = {
    false,
    false,
    166,
    descriptor_table_protodef_learning_5fexample_2eproto,
    "learning_example.proto",
    &descriptor_table_learning_5fexample_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_learning_5fexample_2eproto::offsets,
    file_level_metadata_learning_5fexample_2eproto,
    file_level_enum_descriptors_learning_5fexample_2eproto,
    file_level_service_descriptors_learning_5fexample_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_learning_5fexample_2eproto_getter() {
  return &descriptor_table_learning_5fexample_2eproto;
}
namespace Actia {
// ===================================================================

class point::_Internal {
 public:
};

point::point(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:Actia.point)
}
inline PROTOBUF_NDEBUG_INLINE point::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : nom_(arena, from.nom_),
        _cached_size_{0} {}

point::point(
    ::google::protobuf::Arena* arena,
    const point& from)
    : ::google::protobuf::Message(arena) {
  point* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  _impl_.id_ = from._impl_.id_;

  // @@protoc_insertion_point(copy_constructor:Actia.point)
}
inline PROTOBUF_NDEBUG_INLINE point::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : nom_(arena),
        _cached_size_{0} {}

inline void point::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.id_ = {};
}
point::~point() {
  // @@protoc_insertion_point(destructor:Actia.point)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void point::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.nom_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
point::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              nullptr,  // OnDemandRegisterArenaDtor
              PROTOBUF_FIELD_OFFSET(point, _impl_._cached_size_),
              false,
          },
          &point::MergeImpl,
          &point::kDescriptorMethods,
      };
  return &_data_;
}
PROTOBUF_NOINLINE void point::Clear() {
// @@protoc_insertion_point(message_clear_start:Actia.point)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.nom_.ClearToEmpty();
  _impl_.id_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* point::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 23, 2> point::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_point_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::Actia::point>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // string nom = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(point, _impl_.nom_)}},
    // int32 id = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(point, _impl_.id_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(point, _impl_.id_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 id = 1;
    {PROTOBUF_FIELD_OFFSET(point, _impl_.id_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // string nom = 2;
    {PROTOBUF_FIELD_OFFSET(point, _impl_.nom_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\13\0\3\0\0\0\0\0"
    "Actia.point"
    "nom"
  }},
};

::uint8_t* point::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Actia.point)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int32 id = 1;
  if (this->_internal_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_id(), target);
  }

  // string nom = 2;
  if (!this->_internal_nom().empty()) {
    const std::string& _s = this->_internal_nom();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "Actia.point.nom");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Actia.point)
  return target;
}

::size_t point::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Actia.point)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string nom = 2;
  if (!this->_internal_nom().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_nom());
  }

  // int32 id = 1;
  if (this->_internal_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void point::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<point*>(&to_msg);
  auto& from = static_cast<const point&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Actia.point)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_nom().empty()) {
    _this->_internal_set_nom(from._internal_nom());
  }
  if (from._internal_id() != 0) {
    _this->_impl_.id_ = from._impl_.id_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void point::CopyFrom(const point& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Actia.point)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool point::IsInitialized() const {
  return true;
}

void point::InternalSwap(point* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.nom_, &other->_impl_.nom_, arena);
        swap(_impl_.id_, other->_impl_.id_);
}

::google::protobuf::Metadata point::GetMetadata() const {
  return ::_pbi::AssignDescriptors(&descriptor_table_learning_5fexample_2eproto_getter,
                                   &descriptor_table_learning_5fexample_2eproto_once,
                                   file_level_metadata_learning_5fexample_2eproto[0]);
}
// ===================================================================

class feature::_Internal {
 public:
};

feature::feature(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:Actia.feature)
}
inline PROTOBUF_NDEBUG_INLINE feature::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : nom_(arena, from.nom_),
        _cached_size_{0} {}

feature::feature(
    ::google::protobuf::Arena* arena,
    const feature& from)
    : ::google::protobuf::Message(arena) {
  feature* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  _impl_.id_ = from._impl_.id_;

  // @@protoc_insertion_point(copy_constructor:Actia.feature)
}
inline PROTOBUF_NDEBUG_INLINE feature::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : nom_(arena),
        _cached_size_{0} {}

inline void feature::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.id_ = {};
}
feature::~feature() {
  // @@protoc_insertion_point(destructor:Actia.feature)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void feature::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.nom_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
feature::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              nullptr,  // OnDemandRegisterArenaDtor
              PROTOBUF_FIELD_OFFSET(feature, _impl_._cached_size_),
              false,
          },
          &feature::MergeImpl,
          &feature::kDescriptorMethods,
      };
  return &_data_;
}
PROTOBUF_NOINLINE void feature::Clear() {
// @@protoc_insertion_point(message_clear_start:Actia.feature)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.nom_.ClearToEmpty();
  _impl_.id_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* feature::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 25, 2> feature::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_feature_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::Actia::feature>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // string nom = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(feature, _impl_.nom_)}},
    // int32 id = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(feature, _impl_.id_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(feature, _impl_.id_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 id = 1;
    {PROTOBUF_FIELD_OFFSET(feature, _impl_.id_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // string nom = 2;
    {PROTOBUF_FIELD_OFFSET(feature, _impl_.nom_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\15\0\3\0\0\0\0\0"
    "Actia.feature"
    "nom"
  }},
};

::uint8_t* feature::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Actia.feature)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int32 id = 1;
  if (this->_internal_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_id(), target);
  }

  // string nom = 2;
  if (!this->_internal_nom().empty()) {
    const std::string& _s = this->_internal_nom();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "Actia.feature.nom");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Actia.feature)
  return target;
}

::size_t feature::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Actia.feature)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string nom = 2;
  if (!this->_internal_nom().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_nom());
  }

  // int32 id = 1;
  if (this->_internal_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void feature::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<feature*>(&to_msg);
  auto& from = static_cast<const feature&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Actia.feature)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_nom().empty()) {
    _this->_internal_set_nom(from._internal_nom());
  }
  if (from._internal_id() != 0) {
    _this->_impl_.id_ = from._impl_.id_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void feature::CopyFrom(const feature& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Actia.feature)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool feature::IsInitialized() const {
  return true;
}

void feature::InternalSwap(feature* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.nom_, &other->_impl_.nom_, arena);
        swap(_impl_.id_, other->_impl_.id_);
}

::google::protobuf::Metadata feature::GetMetadata() const {
  return ::_pbi::AssignDescriptors(&descriptor_table_learning_5fexample_2eproto_getter,
                                   &descriptor_table_learning_5fexample_2eproto_once,
                                   file_level_metadata_learning_5fexample_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace Actia
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::std::false_type _static_init_ PROTOBUF_UNUSED =
    (::_pbi::AddDescriptors(&descriptor_table_learning_5fexample_2eproto),
     ::std::false_type{});
#include "google/protobuf/port_undef.inc"
