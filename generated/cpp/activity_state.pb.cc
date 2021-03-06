// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: activity_state.proto

#include "activity_state.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_activity_5fstate_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_ActivitySessionState_activity_5fstate_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_activity_5fmodel_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_CustomerActivity_activity_5fmodel_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_common_5fmodel_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_CustomerNumber_common_5fmodel_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2ftimestamp_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto;
namespace com {
namespace elarian {
namespace hera {
namespace proto {
class ActivitySessionStateDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ActivitySessionState> _instance;
} _ActivitySessionState_default_instance_;
class ActivityStateDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ActivityState> _instance;
} _ActivityState_default_instance_;
}  // namespace proto
}  // namespace hera
}  // namespace elarian
}  // namespace com
static void InitDefaultsscc_info_ActivitySessionState_activity_5fstate_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::com::elarian::hera::proto::_ActivitySessionState_default_instance_;
    new (ptr) ::com::elarian::hera::proto::ActivitySessionState();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_ActivitySessionState_activity_5fstate_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 3, 0, InitDefaultsscc_info_ActivitySessionState_activity_5fstate_2eproto}, {
      &scc_info_CustomerNumber_common_5fmodel_2eproto.base,
      &scc_info_CustomerActivity_activity_5fmodel_2eproto.base,
      &scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto.base,}};

static void InitDefaultsscc_info_ActivityState_activity_5fstate_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::com::elarian::hera::proto::_ActivityState_default_instance_;
    new (ptr) ::com::elarian::hera::proto::ActivityState();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_ActivityState_activity_5fstate_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_ActivityState_activity_5fstate_2eproto}, {
      &scc_info_ActivitySessionState_activity_5fstate_2eproto.base,
      &scc_info_CustomerNumber_common_5fmodel_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_activity_5fstate_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_activity_5fstate_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_activity_5fstate_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_activity_5fstate_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::com::elarian::hera::proto::ActivitySessionState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::com::elarian::hera::proto::ActivitySessionState, customer_number_),
  PROTOBUF_FIELD_OFFSET(::com::elarian::hera::proto::ActivitySessionState, source_),
  PROTOBUF_FIELD_OFFSET(::com::elarian::hera::proto::ActivitySessionState, session_id_),
  PROTOBUF_FIELD_OFFSET(::com::elarian::hera::proto::ActivitySessionState, app_id_),
  PROTOBUF_FIELD_OFFSET(::com::elarian::hera::proto::ActivitySessionState, activities_),
  PROTOBUF_FIELD_OFFSET(::com::elarian::hera::proto::ActivitySessionState, created_at_),
  PROTOBUF_FIELD_OFFSET(::com::elarian::hera::proto::ActivitySessionState, updated_at_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::com::elarian::hera::proto::ActivityState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::com::elarian::hera::proto::ActivityState, sessions_),
  PROTOBUF_FIELD_OFFSET(::com::elarian::hera::proto::ActivityState, customer_numbers_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::com::elarian::hera::proto::ActivitySessionState)},
  { 12, -1, sizeof(::com::elarian::hera::proto::ActivityState)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::com::elarian::hera::proto::_ActivitySessionState_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::com::elarian::hera::proto::_ActivityState_default_instance_),
};

const char descriptor_table_protodef_activity_5fstate_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024activity_state.proto\022\026com.elarian.hera"
  ".proto\032\037google/protobuf/timestamp.proto\032"
  "\022common_model.proto\032\024activity_model.prot"
  "o\"\251\002\n\024ActivitySessionState\022\?\n\017customer_n"
  "umber\030\001 \001(\0132&.com.elarian.hera.proto.Cus"
  "tomerNumber\022\016\n\006source\030\002 \001(\t\022\022\n\nsession_i"
  "d\030\003 \001(\t\022\016\n\006app_id\030\004 \001(\t\022<\n\nactivities\030\005 "
  "\003(\0132(.com.elarian.hera.proto.CustomerAct"
  "ivity\022.\n\ncreated_at\030\006 \001(\0132\032.google.proto"
  "buf.Timestamp\022.\n\nupdated_at\030\007 \001(\0132\032.goog"
  "le.protobuf.Timestamp\"\221\001\n\rActivityState\022"
  ">\n\010sessions\030\001 \003(\0132,.com.elarian.hera.pro"
  "to.ActivitySessionState\022@\n\020customer_numb"
  "ers\030\002 \003(\0132&.com.elarian.hera.proto.Custo"
  "merNumberb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_activity_5fstate_2eproto_deps[3] = {
  &::descriptor_table_activity_5fmodel_2eproto,
  &::descriptor_table_common_5fmodel_2eproto,
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_activity_5fstate_2eproto_sccs[2] = {
  &scc_info_ActivitySessionState_activity_5fstate_2eproto.base,
  &scc_info_ActivityState_activity_5fstate_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_activity_5fstate_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_activity_5fstate_2eproto = {
  false, false, descriptor_table_protodef_activity_5fstate_2eproto, "activity_state.proto", 577,
  &descriptor_table_activity_5fstate_2eproto_once, descriptor_table_activity_5fstate_2eproto_sccs, descriptor_table_activity_5fstate_2eproto_deps, 2, 3,
  schemas, file_default_instances, TableStruct_activity_5fstate_2eproto::offsets,
  file_level_metadata_activity_5fstate_2eproto, 2, file_level_enum_descriptors_activity_5fstate_2eproto, file_level_service_descriptors_activity_5fstate_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_activity_5fstate_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_activity_5fstate_2eproto)), true);
namespace com {
namespace elarian {
namespace hera {
namespace proto {

// ===================================================================

class ActivitySessionState::_Internal {
 public:
  static const ::com::elarian::hera::proto::CustomerNumber& customer_number(const ActivitySessionState* msg);
  static const PROTOBUF_NAMESPACE_ID::Timestamp& created_at(const ActivitySessionState* msg);
  static const PROTOBUF_NAMESPACE_ID::Timestamp& updated_at(const ActivitySessionState* msg);
};

const ::com::elarian::hera::proto::CustomerNumber&
ActivitySessionState::_Internal::customer_number(const ActivitySessionState* msg) {
  return *msg->customer_number_;
}
const PROTOBUF_NAMESPACE_ID::Timestamp&
ActivitySessionState::_Internal::created_at(const ActivitySessionState* msg) {
  return *msg->created_at_;
}
const PROTOBUF_NAMESPACE_ID::Timestamp&
ActivitySessionState::_Internal::updated_at(const ActivitySessionState* msg) {
  return *msg->updated_at_;
}
void ActivitySessionState::clear_customer_number() {
  if (GetArena() == nullptr && customer_number_ != nullptr) {
    delete customer_number_;
  }
  customer_number_ = nullptr;
}
void ActivitySessionState::clear_activities() {
  activities_.Clear();
}
void ActivitySessionState::clear_created_at() {
  if (GetArena() == nullptr && created_at_ != nullptr) {
    delete created_at_;
  }
  created_at_ = nullptr;
}
void ActivitySessionState::clear_updated_at() {
  if (GetArena() == nullptr && updated_at_ != nullptr) {
    delete updated_at_;
  }
  updated_at_ = nullptr;
}
ActivitySessionState::ActivitySessionState(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  activities_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:com.elarian.hera.proto.ActivitySessionState)
}
ActivitySessionState::ActivitySessionState(const ActivitySessionState& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      activities_(from.activities_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  source_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_source().empty()) {
    source_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_source(), 
      GetArena());
  }
  session_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_session_id().empty()) {
    session_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_session_id(), 
      GetArena());
  }
  app_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_app_id().empty()) {
    app_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_app_id(), 
      GetArena());
  }
  if (from._internal_has_customer_number()) {
    customer_number_ = new ::com::elarian::hera::proto::CustomerNumber(*from.customer_number_);
  } else {
    customer_number_ = nullptr;
  }
  if (from._internal_has_created_at()) {
    created_at_ = new PROTOBUF_NAMESPACE_ID::Timestamp(*from.created_at_);
  } else {
    created_at_ = nullptr;
  }
  if (from._internal_has_updated_at()) {
    updated_at_ = new PROTOBUF_NAMESPACE_ID::Timestamp(*from.updated_at_);
  } else {
    updated_at_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:com.elarian.hera.proto.ActivitySessionState)
}

void ActivitySessionState::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ActivitySessionState_activity_5fstate_2eproto.base);
  source_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  session_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  app_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&customer_number_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&updated_at_) -
      reinterpret_cast<char*>(&customer_number_)) + sizeof(updated_at_));
}

ActivitySessionState::~ActivitySessionState() {
  // @@protoc_insertion_point(destructor:com.elarian.hera.proto.ActivitySessionState)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ActivitySessionState::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  source_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  session_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  app_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete customer_number_;
  if (this != internal_default_instance()) delete created_at_;
  if (this != internal_default_instance()) delete updated_at_;
}

void ActivitySessionState::ArenaDtor(void* object) {
  ActivitySessionState* _this = reinterpret_cast< ActivitySessionState* >(object);
  (void)_this;
}
void ActivitySessionState::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ActivitySessionState::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ActivitySessionState& ActivitySessionState::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ActivitySessionState_activity_5fstate_2eproto.base);
  return *internal_default_instance();
}


void ActivitySessionState::Clear() {
// @@protoc_insertion_point(message_clear_start:com.elarian.hera.proto.ActivitySessionState)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  activities_.Clear();
  source_.ClearToEmpty();
  session_id_.ClearToEmpty();
  app_id_.ClearToEmpty();
  if (GetArena() == nullptr && customer_number_ != nullptr) {
    delete customer_number_;
  }
  customer_number_ = nullptr;
  if (GetArena() == nullptr && created_at_ != nullptr) {
    delete created_at_;
  }
  created_at_ = nullptr;
  if (GetArena() == nullptr && updated_at_ != nullptr) {
    delete updated_at_;
  }
  updated_at_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ActivitySessionState::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .com.elarian.hera.proto.CustomerNumber customer_number = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_customer_number(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string source = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_source();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "com.elarian.hera.proto.ActivitySessionState.source"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string session_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_session_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "com.elarian.hera.proto.ActivitySessionState.session_id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string app_id = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_app_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "com.elarian.hera.proto.ActivitySessionState.app_id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .com.elarian.hera.proto.CustomerActivity activities = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_activities(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp created_at = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_created_at(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp updated_at = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_updated_at(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ActivitySessionState::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:com.elarian.hera.proto.ActivitySessionState)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .com.elarian.hera.proto.CustomerNumber customer_number = 1;
  if (this->has_customer_number()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::customer_number(this), target, stream);
  }

  // string source = 2;
  if (this->source().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_source().data(), static_cast<int>(this->_internal_source().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.elarian.hera.proto.ActivitySessionState.source");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_source(), target);
  }

  // string session_id = 3;
  if (this->session_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_session_id().data(), static_cast<int>(this->_internal_session_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.elarian.hera.proto.ActivitySessionState.session_id");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_session_id(), target);
  }

  // string app_id = 4;
  if (this->app_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_app_id().data(), static_cast<int>(this->_internal_app_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.elarian.hera.proto.ActivitySessionState.app_id");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_app_id(), target);
  }

  // repeated .com.elarian.hera.proto.CustomerActivity activities = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_activities_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(5, this->_internal_activities(i), target, stream);
  }

  // .google.protobuf.Timestamp created_at = 6;
  if (this->has_created_at()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        6, _Internal::created_at(this), target, stream);
  }

  // .google.protobuf.Timestamp updated_at = 7;
  if (this->has_updated_at()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        7, _Internal::updated_at(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:com.elarian.hera.proto.ActivitySessionState)
  return target;
}

size_t ActivitySessionState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:com.elarian.hera.proto.ActivitySessionState)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .com.elarian.hera.proto.CustomerActivity activities = 5;
  total_size += 1UL * this->_internal_activities_size();
  for (const auto& msg : this->activities_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string source = 2;
  if (this->source().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_source());
  }

  // string session_id = 3;
  if (this->session_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_session_id());
  }

  // string app_id = 4;
  if (this->app_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_app_id());
  }

  // .com.elarian.hera.proto.CustomerNumber customer_number = 1;
  if (this->has_customer_number()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *customer_number_);
  }

  // .google.protobuf.Timestamp created_at = 6;
  if (this->has_created_at()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *created_at_);
  }

  // .google.protobuf.Timestamp updated_at = 7;
  if (this->has_updated_at()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *updated_at_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ActivitySessionState::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:com.elarian.hera.proto.ActivitySessionState)
  GOOGLE_DCHECK_NE(&from, this);
  const ActivitySessionState* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ActivitySessionState>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:com.elarian.hera.proto.ActivitySessionState)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:com.elarian.hera.proto.ActivitySessionState)
    MergeFrom(*source);
  }
}

void ActivitySessionState::MergeFrom(const ActivitySessionState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:com.elarian.hera.proto.ActivitySessionState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  activities_.MergeFrom(from.activities_);
  if (from.source().size() > 0) {
    _internal_set_source(from._internal_source());
  }
  if (from.session_id().size() > 0) {
    _internal_set_session_id(from._internal_session_id());
  }
  if (from.app_id().size() > 0) {
    _internal_set_app_id(from._internal_app_id());
  }
  if (from.has_customer_number()) {
    _internal_mutable_customer_number()->::com::elarian::hera::proto::CustomerNumber::MergeFrom(from._internal_customer_number());
  }
  if (from.has_created_at()) {
    _internal_mutable_created_at()->PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from._internal_created_at());
  }
  if (from.has_updated_at()) {
    _internal_mutable_updated_at()->PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from._internal_updated_at());
  }
}

void ActivitySessionState::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:com.elarian.hera.proto.ActivitySessionState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ActivitySessionState::CopyFrom(const ActivitySessionState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:com.elarian.hera.proto.ActivitySessionState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ActivitySessionState::IsInitialized() const {
  return true;
}

void ActivitySessionState::InternalSwap(ActivitySessionState* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  activities_.InternalSwap(&other->activities_);
  source_.Swap(&other->source_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  session_id_.Swap(&other->session_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  app_id_.Swap(&other->app_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ActivitySessionState, updated_at_)
      + sizeof(ActivitySessionState::updated_at_)
      - PROTOBUF_FIELD_OFFSET(ActivitySessionState, customer_number_)>(
          reinterpret_cast<char*>(&customer_number_),
          reinterpret_cast<char*>(&other->customer_number_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ActivitySessionState::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class ActivityState::_Internal {
 public:
};

void ActivityState::clear_customer_numbers() {
  customer_numbers_.Clear();
}
ActivityState::ActivityState(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  sessions_(arena),
  customer_numbers_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:com.elarian.hera.proto.ActivityState)
}
ActivityState::ActivityState(const ActivityState& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      sessions_(from.sessions_),
      customer_numbers_(from.customer_numbers_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:com.elarian.hera.proto.ActivityState)
}

void ActivityState::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ActivityState_activity_5fstate_2eproto.base);
}

ActivityState::~ActivityState() {
  // @@protoc_insertion_point(destructor:com.elarian.hera.proto.ActivityState)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ActivityState::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void ActivityState::ArenaDtor(void* object) {
  ActivityState* _this = reinterpret_cast< ActivityState* >(object);
  (void)_this;
}
void ActivityState::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ActivityState::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ActivityState& ActivityState::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ActivityState_activity_5fstate_2eproto.base);
  return *internal_default_instance();
}


void ActivityState::Clear() {
// @@protoc_insertion_point(message_clear_start:com.elarian.hera.proto.ActivityState)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  sessions_.Clear();
  customer_numbers_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ActivityState::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .com.elarian.hera.proto.ActivitySessionState sessions = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_sessions(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .com.elarian.hera.proto.CustomerNumber customer_numbers = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_customer_numbers(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ActivityState::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:com.elarian.hera.proto.ActivityState)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .com.elarian.hera.proto.ActivitySessionState sessions = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_sessions_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_sessions(i), target, stream);
  }

  // repeated .com.elarian.hera.proto.CustomerNumber customer_numbers = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_customer_numbers_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_customer_numbers(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:com.elarian.hera.proto.ActivityState)
  return target;
}

size_t ActivityState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:com.elarian.hera.proto.ActivityState)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .com.elarian.hera.proto.ActivitySessionState sessions = 1;
  total_size += 1UL * this->_internal_sessions_size();
  for (const auto& msg : this->sessions_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .com.elarian.hera.proto.CustomerNumber customer_numbers = 2;
  total_size += 1UL * this->_internal_customer_numbers_size();
  for (const auto& msg : this->customer_numbers_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ActivityState::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:com.elarian.hera.proto.ActivityState)
  GOOGLE_DCHECK_NE(&from, this);
  const ActivityState* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ActivityState>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:com.elarian.hera.proto.ActivityState)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:com.elarian.hera.proto.ActivityState)
    MergeFrom(*source);
  }
}

void ActivityState::MergeFrom(const ActivityState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:com.elarian.hera.proto.ActivityState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  sessions_.MergeFrom(from.sessions_);
  customer_numbers_.MergeFrom(from.customer_numbers_);
}

void ActivityState::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:com.elarian.hera.proto.ActivityState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ActivityState::CopyFrom(const ActivityState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:com.elarian.hera.proto.ActivityState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ActivityState::IsInitialized() const {
  return true;
}

void ActivityState::InternalSwap(ActivityState* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  sessions_.InternalSwap(&other->sessions_);
  customer_numbers_.InternalSwap(&other->customer_numbers_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ActivityState::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace hera
}  // namespace elarian
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::com::elarian::hera::proto::ActivitySessionState* Arena::CreateMaybeMessage< ::com::elarian::hera::proto::ActivitySessionState >(Arena* arena) {
  return Arena::CreateMessageInternal< ::com::elarian::hera::proto::ActivitySessionState >(arena);
}
template<> PROTOBUF_NOINLINE ::com::elarian::hera::proto::ActivityState* Arena::CreateMaybeMessage< ::com::elarian::hera::proto::ActivityState >(Arena* arena) {
  return Arena::CreateMessageInternal< ::com::elarian::hera::proto::ActivityState >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
