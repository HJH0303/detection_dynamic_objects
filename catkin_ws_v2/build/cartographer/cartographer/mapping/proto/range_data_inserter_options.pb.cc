// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/range_data_inserter_options.proto

#include "cartographer/mapping/proto/range_data_inserter_options.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_cartographer_2fmapping_2fproto_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_cartographer_2fmapping_2fproto_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_ProbabilityGridRangeDataInserterOptions2D;
}  // namespace protobuf_cartographer_2fmapping_2fproto_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto
namespace protobuf_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_TSDFRangeDataInserterOptions2D;
}  // namespace protobuf_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto
namespace cartographer {
namespace mapping {
namespace proto {
class RangeDataInserterOptionsDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RangeDataInserterOptions>
      _instance;
} _RangeDataInserterOptions_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer
namespace protobuf_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto {
static void InitDefaultsRangeDataInserterOptions() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::cartographer::mapping::proto::_RangeDataInserterOptions_default_instance_;
    new (ptr) ::cartographer::mapping::proto::RangeDataInserterOptions();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::cartographer::mapping::proto::RangeDataInserterOptions::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_RangeDataInserterOptions =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsRangeDataInserterOptions}, {
      &protobuf_cartographer_2fmapping_2fproto_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto::scc_info_ProbabilityGridRangeDataInserterOptions2D.base,
      &protobuf_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto::scc_info_TSDFRangeDataInserterOptions2D.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_RangeDataInserterOptions.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::cartographer::mapping::proto::RangeDataInserterOptions, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::cartographer::mapping::proto::RangeDataInserterOptions, range_data_inserter_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::cartographer::mapping::proto::RangeDataInserterOptions, probability_grid_range_data_inserter_options_2d_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::cartographer::mapping::proto::RangeDataInserterOptions, tsdf_range_data_inserter_options_2d_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::cartographer::mapping::proto::RangeDataInserterOptions)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::cartographer::mapping::proto::_RangeDataInserterOptions_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "cartographer/mapping/proto/range_data_inserter_options.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n<cartographer/mapping/proto/range_data_"
      "inserter_options.proto\022\032cartographer.map"
      "ping.proto\032Pcartographer/mapping/proto/p"
      "robability_grid_range_data_inserter_opti"
      "ons_2d.proto\032Dcartographer/mapping/proto"
      "/tsdf_range_data_inserter_options_2d.pro"
      "to\"\330\003\n\030RangeDataInserterOptions\022l\n\030range"
      "_data_inserter_type\030\001 \001(\0162J.cartographer"
      ".mapping.proto.RangeDataInserterOptions."
      "RangeDataInserterType\022~\n/probability_gri"
      "d_range_data_inserter_options_2d\030\002 \001(\0132E"
      ".cartographer.mapping.proto.ProbabilityG"
      "ridRangeDataInserterOptions2D\022g\n#tsdf_ra"
      "nge_data_inserter_options_2d\030\003 \001(\0132:.car"
      "tographer.mapping.proto.TSDFRangeDataIns"
      "erterOptions2D\"e\n\025RangeDataInserterType\022"
      "\024\n\020INVALID_INSERTER\020\000\022 \n\034PROBABILITY_GRI"
      "D_INSERTER_2D\020\001\022\024\n\020TSDF_INSERTER_2D\020\002b\006p"
      "roto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 725);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/range_data_inserter_options.proto", &protobuf_RegisterTypes);
  ::protobuf_cartographer_2fmapping_2fproto_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto::AddDescriptors();
  ::protobuf_cartographer_2fmapping_2fproto_2ftsdf_5frange_5fdata_5finserter_5foptions_5f2d_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto
namespace cartographer {
namespace mapping {
namespace proto {
const ::google::protobuf::EnumDescriptor* RangeDataInserterOptions_RangeDataInserterType_descriptor() {
  protobuf_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto::file_level_enum_descriptors[0];
}
bool RangeDataInserterOptions_RangeDataInserterType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const RangeDataInserterOptions_RangeDataInserterType RangeDataInserterOptions::INVALID_INSERTER;
const RangeDataInserterOptions_RangeDataInserterType RangeDataInserterOptions::PROBABILITY_GRID_INSERTER_2D;
const RangeDataInserterOptions_RangeDataInserterType RangeDataInserterOptions::TSDF_INSERTER_2D;
const RangeDataInserterOptions_RangeDataInserterType RangeDataInserterOptions::RangeDataInserterType_MIN;
const RangeDataInserterOptions_RangeDataInserterType RangeDataInserterOptions::RangeDataInserterType_MAX;
const int RangeDataInserterOptions::RangeDataInserterType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void RangeDataInserterOptions::InitAsDefaultInstance() {
  ::cartographer::mapping::proto::_RangeDataInserterOptions_default_instance_._instance.get_mutable()->probability_grid_range_data_inserter_options_2d_ = const_cast< ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D*>(
      ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D::internal_default_instance());
  ::cartographer::mapping::proto::_RangeDataInserterOptions_default_instance_._instance.get_mutable()->tsdf_range_data_inserter_options_2d_ = const_cast< ::cartographer::mapping::proto::TSDFRangeDataInserterOptions2D*>(
      ::cartographer::mapping::proto::TSDFRangeDataInserterOptions2D::internal_default_instance());
}
void RangeDataInserterOptions::clear_probability_grid_range_data_inserter_options_2d() {
  if (GetArenaNoVirtual() == NULL && probability_grid_range_data_inserter_options_2d_ != NULL) {
    delete probability_grid_range_data_inserter_options_2d_;
  }
  probability_grid_range_data_inserter_options_2d_ = NULL;
}
void RangeDataInserterOptions::clear_tsdf_range_data_inserter_options_2d() {
  if (GetArenaNoVirtual() == NULL && tsdf_range_data_inserter_options_2d_ != NULL) {
    delete tsdf_range_data_inserter_options_2d_;
  }
  tsdf_range_data_inserter_options_2d_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RangeDataInserterOptions::kRangeDataInserterTypeFieldNumber;
const int RangeDataInserterOptions::kProbabilityGridRangeDataInserterOptions2DFieldNumber;
const int RangeDataInserterOptions::kTsdfRangeDataInserterOptions2DFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RangeDataInserterOptions::RangeDataInserterOptions()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto::scc_info_RangeDataInserterOptions.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping.proto.RangeDataInserterOptions)
}
RangeDataInserterOptions::RangeDataInserterOptions(const RangeDataInserterOptions& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_probability_grid_range_data_inserter_options_2d()) {
    probability_grid_range_data_inserter_options_2d_ = new ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D(*from.probability_grid_range_data_inserter_options_2d_);
  } else {
    probability_grid_range_data_inserter_options_2d_ = NULL;
  }
  if (from.has_tsdf_range_data_inserter_options_2d()) {
    tsdf_range_data_inserter_options_2d_ = new ::cartographer::mapping::proto::TSDFRangeDataInserterOptions2D(*from.tsdf_range_data_inserter_options_2d_);
  } else {
    tsdf_range_data_inserter_options_2d_ = NULL;
  }
  range_data_inserter_type_ = from.range_data_inserter_type_;
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.proto.RangeDataInserterOptions)
}

void RangeDataInserterOptions::SharedCtor() {
  ::memset(&probability_grid_range_data_inserter_options_2d_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&range_data_inserter_type_) -
      reinterpret_cast<char*>(&probability_grid_range_data_inserter_options_2d_)) + sizeof(range_data_inserter_type_));
}

RangeDataInserterOptions::~RangeDataInserterOptions() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.proto.RangeDataInserterOptions)
  SharedDtor();
}

void RangeDataInserterOptions::SharedDtor() {
  if (this != internal_default_instance()) delete probability_grid_range_data_inserter_options_2d_;
  if (this != internal_default_instance()) delete tsdf_range_data_inserter_options_2d_;
}

void RangeDataInserterOptions::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* RangeDataInserterOptions::descriptor() {
  ::protobuf_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RangeDataInserterOptions& RangeDataInserterOptions::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto::scc_info_RangeDataInserterOptions.base);
  return *internal_default_instance();
}


void RangeDataInserterOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.proto.RangeDataInserterOptions)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && probability_grid_range_data_inserter_options_2d_ != NULL) {
    delete probability_grid_range_data_inserter_options_2d_;
  }
  probability_grid_range_data_inserter_options_2d_ = NULL;
  if (GetArenaNoVirtual() == NULL && tsdf_range_data_inserter_options_2d_ != NULL) {
    delete tsdf_range_data_inserter_options_2d_;
  }
  tsdf_range_data_inserter_options_2d_ = NULL;
  range_data_inserter_type_ = 0;
  _internal_metadata_.Clear();
}

bool RangeDataInserterOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping.proto.RangeDataInserterOptions)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .cartographer.mapping.proto.RangeDataInserterOptions.RangeDataInserterType range_data_inserter_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_range_data_inserter_type(static_cast< ::cartographer::mapping::proto::RangeDataInserterOptions_RangeDataInserterType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D probability_grid_range_data_inserter_options_2d = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_probability_grid_range_data_inserter_options_2d()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .cartographer.mapping.proto.TSDFRangeDataInserterOptions2D tsdf_range_data_inserter_options_2d = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_tsdf_range_data_inserter_options_2d()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.mapping.proto.RangeDataInserterOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping.proto.RangeDataInserterOptions)
  return false;
#undef DO_
}

void RangeDataInserterOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping.proto.RangeDataInserterOptions)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .cartographer.mapping.proto.RangeDataInserterOptions.RangeDataInserterType range_data_inserter_type = 1;
  if (this->range_data_inserter_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->range_data_inserter_type(), output);
  }

  // .cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D probability_grid_range_data_inserter_options_2d = 2;
  if (this->has_probability_grid_range_data_inserter_options_2d()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_probability_grid_range_data_inserter_options_2d(), output);
  }

  // .cartographer.mapping.proto.TSDFRangeDataInserterOptions2D tsdf_range_data_inserter_options_2d = 3;
  if (this->has_tsdf_range_data_inserter_options_2d()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_tsdf_range_data_inserter_options_2d(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.mapping.proto.RangeDataInserterOptions)
}

::google::protobuf::uint8* RangeDataInserterOptions::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.proto.RangeDataInserterOptions)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .cartographer.mapping.proto.RangeDataInserterOptions.RangeDataInserterType range_data_inserter_type = 1;
  if (this->range_data_inserter_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->range_data_inserter_type(), target);
  }

  // .cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D probability_grid_range_data_inserter_options_2d = 2;
  if (this->has_probability_grid_range_data_inserter_options_2d()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_probability_grid_range_data_inserter_options_2d(), deterministic, target);
  }

  // .cartographer.mapping.proto.TSDFRangeDataInserterOptions2D tsdf_range_data_inserter_options_2d = 3;
  if (this->has_tsdf_range_data_inserter_options_2d()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_tsdf_range_data_inserter_options_2d(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.proto.RangeDataInserterOptions)
  return target;
}

size_t RangeDataInserterOptions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.proto.RangeDataInserterOptions)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D probability_grid_range_data_inserter_options_2d = 2;
  if (this->has_probability_grid_range_data_inserter_options_2d()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *probability_grid_range_data_inserter_options_2d_);
  }

  // .cartographer.mapping.proto.TSDFRangeDataInserterOptions2D tsdf_range_data_inserter_options_2d = 3;
  if (this->has_tsdf_range_data_inserter_options_2d()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *tsdf_range_data_inserter_options_2d_);
  }

  // .cartographer.mapping.proto.RangeDataInserterOptions.RangeDataInserterType range_data_inserter_type = 1;
  if (this->range_data_inserter_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->range_data_inserter_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RangeDataInserterOptions::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.mapping.proto.RangeDataInserterOptions)
  GOOGLE_DCHECK_NE(&from, this);
  const RangeDataInserterOptions* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RangeDataInserterOptions>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.mapping.proto.RangeDataInserterOptions)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.mapping.proto.RangeDataInserterOptions)
    MergeFrom(*source);
  }
}

void RangeDataInserterOptions::MergeFrom(const RangeDataInserterOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.proto.RangeDataInserterOptions)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_probability_grid_range_data_inserter_options_2d()) {
    mutable_probability_grid_range_data_inserter_options_2d()->::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D::MergeFrom(from.probability_grid_range_data_inserter_options_2d());
  }
  if (from.has_tsdf_range_data_inserter_options_2d()) {
    mutable_tsdf_range_data_inserter_options_2d()->::cartographer::mapping::proto::TSDFRangeDataInserterOptions2D::MergeFrom(from.tsdf_range_data_inserter_options_2d());
  }
  if (from.range_data_inserter_type() != 0) {
    set_range_data_inserter_type(from.range_data_inserter_type());
  }
}

void RangeDataInserterOptions::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.mapping.proto.RangeDataInserterOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RangeDataInserterOptions::CopyFrom(const RangeDataInserterOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.proto.RangeDataInserterOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RangeDataInserterOptions::IsInitialized() const {
  return true;
}

void RangeDataInserterOptions::Swap(RangeDataInserterOptions* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RangeDataInserterOptions::InternalSwap(RangeDataInserterOptions* other) {
  using std::swap;
  swap(probability_grid_range_data_inserter_options_2d_, other->probability_grid_range_data_inserter_options_2d_);
  swap(tsdf_range_data_inserter_options_2d_, other->tsdf_range_data_inserter_options_2d_);
  swap(range_data_inserter_type_, other->range_data_inserter_type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata RangeDataInserterOptions::GetMetadata() const {
  protobuf_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::cartographer::mapping::proto::RangeDataInserterOptions* Arena::CreateMaybeMessage< ::cartographer::mapping::proto::RangeDataInserterOptions >(Arena* arena) {
  return Arena::CreateInternal< ::cartographer::mapping::proto::RangeDataInserterOptions >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)