// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: node_svr.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "node_svr.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace ankv {
namespace node {

namespace {

const ::google::protobuf::Descriptor* Node_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Node_reflection_ = NULL;
const ::google::protobuf::Descriptor* InfoServerReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  InfoServerReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* InfoServerResp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  InfoServerResp_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Type_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* StatusCode_descriptor_ = NULL;
const ::google::protobuf::ServiceDescriptor* InfoServerService_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_node_5fsvr_2eproto() {
  protobuf_AddDesc_node_5fsvr_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "node_svr.proto");
  GOOGLE_CHECK(file != NULL);
  Node_descriptor_ = file->message_type(0);
  static const int Node_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, ip_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, port_),
  };
  Node_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Node_descriptor_,
      Node::default_instance_,
      Node_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Node));
  InfoServerReq_descriptor_ = file->message_type(1);
  static const int InfoServerReq_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InfoServerReq, table_name_),
  };
  InfoServerReq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      InfoServerReq_descriptor_,
      InfoServerReq::default_instance_,
      InfoServerReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InfoServerReq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InfoServerReq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(InfoServerReq));
  InfoServerResp_descriptor_ = file->message_type(2);
  static const int InfoServerResp_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InfoServerResp, epoch_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InfoServerResp, table_names_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InfoServerResp, cur_meta_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InfoServerResp, meta_renewing_),
  };
  InfoServerResp_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      InfoServerResp_descriptor_,
      InfoServerResp::default_instance_,
      InfoServerResp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InfoServerResp, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InfoServerResp, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(InfoServerResp));
  Type_descriptor_ = file->enum_type(0);
  StatusCode_descriptor_ = file->enum_type(1);
  InfoServerService_descriptor_ = file->service(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_node_5fsvr_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Node_descriptor_, &Node::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    InfoServerReq_descriptor_, &InfoServerReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    InfoServerResp_descriptor_, &InfoServerResp::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_node_5fsvr_2eproto() {
  delete Node::default_instance_;
  delete Node_reflection_;
  delete InfoServerReq::default_instance_;
  delete InfoServerReq_reflection_;
  delete InfoServerResp::default_instance_;
  delete InfoServerResp_reflection_;
}

void protobuf_AddDesc_node_5fsvr_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016node_svr.proto\022\tankv.node\" \n\004Node\022\n\n\002i"
    "p\030\001 \002(\t\022\014\n\004port\030\002 \002(\005\"#\n\rInfoServerReq\022\022"
    "\n\ntable_name\030\001 \001(\t\"n\n\016InfoServerResp\022\r\n\005"
    "epoch\030\001 \002(\003\022\023\n\013table_names\030\002 \003(\t\022!\n\010cur_"
    "meta\030\003 \002(\0132\017.ankv.node.Node\022\025\n\rmeta_rene"
    "wing\030\004 \002(\010*\026\n\004Type\022\016\n\nINFOSERVER\020\001*\025\n\nSt"
    "atusCode\022\007\n\003kOk\020\0002V\n\021InfoServerService\022A"
    "\n\nInfoServer\022\030.ankv.node.InfoServerReq\032\031"
    ".ankv.node.InfoServerRespB\003\200\001\001", 350);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "node_svr.proto", &protobuf_RegisterTypes);
  Node::default_instance_ = new Node();
  InfoServerReq::default_instance_ = new InfoServerReq();
  InfoServerResp::default_instance_ = new InfoServerResp();
  Node::default_instance_->InitAsDefaultInstance();
  InfoServerReq::default_instance_->InitAsDefaultInstance();
  InfoServerResp::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_node_5fsvr_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_node_5fsvr_2eproto {
  StaticDescriptorInitializer_node_5fsvr_2eproto() {
    protobuf_AddDesc_node_5fsvr_2eproto();
  }
} static_descriptor_initializer_node_5fsvr_2eproto_;
const ::google::protobuf::EnumDescriptor* Type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Type_descriptor_;
}
bool Type_IsValid(int value) {
  switch(value) {
    case 1:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* StatusCode_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return StatusCode_descriptor_;
}
bool StatusCode_IsValid(int value) {
  switch(value) {
    case 0:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int Node::kIpFieldNumber;
const int Node::kPortFieldNumber;
#endif  // !_MSC_VER

Node::Node()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Node::InitAsDefaultInstance() {
}

Node::Node(const Node& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Node::SharedCtor() {
  _cached_size_ = 0;
  ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  port_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Node::~Node() {
  SharedDtor();
}

void Node::SharedDtor() {
  if (ip_ != &::google::protobuf::internal::kEmptyString) {
    delete ip_;
  }
  if (this != default_instance_) {
  }
}

void Node::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Node::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Node_descriptor_;
}

const Node& Node::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_node_5fsvr_2eproto();
  return *default_instance_;
}

Node* Node::default_instance_ = NULL;

Node* Node::New() const {
  return new Node;
}

void Node::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_ip()) {
      if (ip_ != &::google::protobuf::internal::kEmptyString) {
        ip_->clear();
      }
    }
    port_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Node::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string ip = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ip()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->ip().data(), this->ip().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_port;
        break;
      }

      // required int32 port = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_port:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &port_)));
          set_has_port();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Node::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string ip = 1;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->ip(), output);
  }

  // required int32 port = 2;
  if (has_port()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->port(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Node::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string ip = 1;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->ip(), target);
  }

  // required int32 port = 2;
  if (has_port()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->port(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Node::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string ip = 1;
    if (has_ip()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->ip());
    }

    // required int32 port = 2;
    if (has_port()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->port());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Node::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Node* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Node*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Node::MergeFrom(const Node& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ip()) {
      set_ip(from.ip());
    }
    if (from.has_port()) {
      set_port(from.port());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Node::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Node::CopyFrom(const Node& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Node::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void Node::Swap(Node* other) {
  if (other != this) {
    std::swap(ip_, other->ip_);
    std::swap(port_, other->port_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Node::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Node_descriptor_;
  metadata.reflection = Node_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int InfoServerReq::kTableNameFieldNumber;
#endif  // !_MSC_VER

InfoServerReq::InfoServerReq()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void InfoServerReq::InitAsDefaultInstance() {
}

InfoServerReq::InfoServerReq(const InfoServerReq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void InfoServerReq::SharedCtor() {
  _cached_size_ = 0;
  table_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

InfoServerReq::~InfoServerReq() {
  SharedDtor();
}

void InfoServerReq::SharedDtor() {
  if (table_name_ != &::google::protobuf::internal::kEmptyString) {
    delete table_name_;
  }
  if (this != default_instance_) {
  }
}

void InfoServerReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* InfoServerReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return InfoServerReq_descriptor_;
}

const InfoServerReq& InfoServerReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_node_5fsvr_2eproto();
  return *default_instance_;
}

InfoServerReq* InfoServerReq::default_instance_ = NULL;

InfoServerReq* InfoServerReq::New() const {
  return new InfoServerReq;
}

void InfoServerReq::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_table_name()) {
      if (table_name_ != &::google::protobuf::internal::kEmptyString) {
        table_name_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool InfoServerReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string table_name = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_table_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->table_name().data(), this->table_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void InfoServerReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string table_name = 1;
  if (has_table_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->table_name().data(), this->table_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->table_name(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* InfoServerReq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string table_name = 1;
  if (has_table_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->table_name().data(), this->table_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->table_name(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int InfoServerReq::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string table_name = 1;
    if (has_table_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->table_name());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void InfoServerReq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const InfoServerReq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const InfoServerReq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void InfoServerReq::MergeFrom(const InfoServerReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_table_name()) {
      set_table_name(from.table_name());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void InfoServerReq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InfoServerReq::CopyFrom(const InfoServerReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InfoServerReq::IsInitialized() const {

  return true;
}

void InfoServerReq::Swap(InfoServerReq* other) {
  if (other != this) {
    std::swap(table_name_, other->table_name_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata InfoServerReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = InfoServerReq_descriptor_;
  metadata.reflection = InfoServerReq_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int InfoServerResp::kEpochFieldNumber;
const int InfoServerResp::kTableNamesFieldNumber;
const int InfoServerResp::kCurMetaFieldNumber;
const int InfoServerResp::kMetaRenewingFieldNumber;
#endif  // !_MSC_VER

InfoServerResp::InfoServerResp()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void InfoServerResp::InitAsDefaultInstance() {
  cur_meta_ = const_cast< ::ankv::node::Node*>(&::ankv::node::Node::default_instance());
}

InfoServerResp::InfoServerResp(const InfoServerResp& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void InfoServerResp::SharedCtor() {
  _cached_size_ = 0;
  epoch_ = GOOGLE_LONGLONG(0);
  cur_meta_ = NULL;
  meta_renewing_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

InfoServerResp::~InfoServerResp() {
  SharedDtor();
}

void InfoServerResp::SharedDtor() {
  if (this != default_instance_) {
    delete cur_meta_;
  }
}

void InfoServerResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* InfoServerResp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return InfoServerResp_descriptor_;
}

const InfoServerResp& InfoServerResp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_node_5fsvr_2eproto();
  return *default_instance_;
}

InfoServerResp* InfoServerResp::default_instance_ = NULL;

InfoServerResp* InfoServerResp::New() const {
  return new InfoServerResp;
}

void InfoServerResp::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    epoch_ = GOOGLE_LONGLONG(0);
    if (has_cur_meta()) {
      if (cur_meta_ != NULL) cur_meta_->::ankv::node::Node::Clear();
    }
    meta_renewing_ = false;
  }
  table_names_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool InfoServerResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 epoch = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &epoch_)));
          set_has_epoch();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_table_names;
        break;
      }

      // repeated string table_names = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_table_names:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_table_names()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->table_names(this->table_names_size() - 1).data(),
            this->table_names(this->table_names_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_table_names;
        if (input->ExpectTag(26)) goto parse_cur_meta;
        break;
      }

      // required .ankv.node.Node cur_meta = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_cur_meta:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_cur_meta()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_meta_renewing;
        break;
      }

      // required bool meta_renewing = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_meta_renewing:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &meta_renewing_)));
          set_has_meta_renewing();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void InfoServerResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int64 epoch = 1;
  if (has_epoch()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->epoch(), output);
  }

  // repeated string table_names = 2;
  for (int i = 0; i < this->table_names_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8String(
    this->table_names(i).data(), this->table_names(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->table_names(i), output);
  }

  // required .ankv.node.Node cur_meta = 3;
  if (has_cur_meta()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->cur_meta(), output);
  }

  // required bool meta_renewing = 4;
  if (has_meta_renewing()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->meta_renewing(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* InfoServerResp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int64 epoch = 1;
  if (has_epoch()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->epoch(), target);
  }

  // repeated string table_names = 2;
  for (int i = 0; i < this->table_names_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->table_names(i).data(), this->table_names(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->table_names(i), target);
  }

  // required .ankv.node.Node cur_meta = 3;
  if (has_cur_meta()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->cur_meta(), target);
  }

  // required bool meta_renewing = 4;
  if (has_meta_renewing()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->meta_renewing(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int InfoServerResp::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int64 epoch = 1;
    if (has_epoch()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->epoch());
    }

    // required .ankv.node.Node cur_meta = 3;
    if (has_cur_meta()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->cur_meta());
    }

    // required bool meta_renewing = 4;
    if (has_meta_renewing()) {
      total_size += 1 + 1;
    }

  }
  // repeated string table_names = 2;
  total_size += 1 * this->table_names_size();
  for (int i = 0; i < this->table_names_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->table_names(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void InfoServerResp::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const InfoServerResp* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const InfoServerResp*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void InfoServerResp::MergeFrom(const InfoServerResp& from) {
  GOOGLE_CHECK_NE(&from, this);
  table_names_.MergeFrom(from.table_names_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_epoch()) {
      set_epoch(from.epoch());
    }
    if (from.has_cur_meta()) {
      mutable_cur_meta()->::ankv::node::Node::MergeFrom(from.cur_meta());
    }
    if (from.has_meta_renewing()) {
      set_meta_renewing(from.meta_renewing());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void InfoServerResp::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InfoServerResp::CopyFrom(const InfoServerResp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InfoServerResp::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000d) != 0x0000000d) return false;

  if (has_cur_meta()) {
    if (!this->cur_meta().IsInitialized()) return false;
  }
  return true;
}

void InfoServerResp::Swap(InfoServerResp* other) {
  if (other != this) {
    std::swap(epoch_, other->epoch_);
    table_names_.Swap(&other->table_names_);
    std::swap(cur_meta_, other->cur_meta_);
    std::swap(meta_renewing_, other->meta_renewing_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata InfoServerResp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = InfoServerResp_descriptor_;
  metadata.reflection = InfoServerResp_reflection_;
  return metadata;
}


// ===================================================================

InfoServerService::~InfoServerService() {}

const ::google::protobuf::ServiceDescriptor* InfoServerService::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return InfoServerService_descriptor_;
}

const ::google::protobuf::ServiceDescriptor* InfoServerService::GetDescriptor() {
  protobuf_AssignDescriptorsOnce();
  return InfoServerService_descriptor_;
}

void InfoServerService::InfoServer(::google::protobuf::RpcController* controller,
                         const ::ankv::node::InfoServerReq*,
                         ::ankv::node::InfoServerResp*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method InfoServer() not implemented.");
  done->Run();
}

void InfoServerService::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), InfoServerService_descriptor_);
  switch(method->index()) {
    case 0:
      InfoServer(controller,
             ::google::protobuf::down_cast<const ::ankv::node::InfoServerReq*>(request),
             ::google::protobuf::down_cast< ::ankv::node::InfoServerResp*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& InfoServerService::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::ankv::node::InfoServerReq::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

const ::google::protobuf::Message& InfoServerService::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::ankv::node::InfoServerResp::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

InfoServerService_Stub::InfoServerService_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
InfoServerService_Stub::InfoServerService_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
InfoServerService_Stub::~InfoServerService_Stub() {
  if (owns_channel_) delete channel_;
}

void InfoServerService_Stub::InfoServer(::google::protobuf::RpcController* controller,
                              const ::ankv::node::InfoServerReq* request,
                              ::ankv::node::InfoServerResp* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace node
}  // namespace ankv

// @@protoc_insertion_point(global_scope)
