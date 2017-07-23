// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: loadx1_ec.proto

#ifndef PROTOBUF_loadx1_5fec_2eproto__INCLUDED
#define PROTOBUF_loadx1_5fec_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "component_base.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_loadx1_5fec_2eproto();
void protobuf_AssignDesc_loadx1_5fec_2eproto();
void protobuf_ShutdownFile_loadx1_5fec_2eproto();

class M3LoadX1EcStatus;
class M3LoadX1EcCommand;
class M3LoadX1EcParam;

// ===================================================================

class M3LoadX1EcStatus : public ::google::protobuf::Message {
 public:
  M3LoadX1EcStatus();
  virtual ~M3LoadX1EcStatus();

  M3LoadX1EcStatus(const M3LoadX1EcStatus& from);

  inline M3LoadX1EcStatus& operator=(const M3LoadX1EcStatus& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const M3LoadX1EcStatus& default_instance();

  void Swap(M3LoadX1EcStatus* other);

  // implements Message ----------------------------------------------

  M3LoadX1EcStatus* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const M3LoadX1EcStatus& from);
  void MergeFrom(const M3LoadX1EcStatus& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .M3BaseStatus base = 1;
  inline bool has_base() const;
  inline void clear_base();
  static const int kBaseFieldNumber = 1;
  inline const ::M3BaseStatus& base() const;
  inline ::M3BaseStatus* mutable_base();
  inline ::M3BaseStatus* release_base();
  inline void set_allocated_base(::M3BaseStatus* base);

  // optional .M3EtherCATStatus ethercat = 2;
  inline bool has_ethercat() const;
  inline void clear_ethercat();
  static const int kEthercatFieldNumber = 2;
  inline const ::M3EtherCATStatus& ethercat() const;
  inline ::M3EtherCATStatus* mutable_ethercat();
  inline ::M3EtherCATStatus* release_ethercat();
  inline void set_allocated_ethercat(::M3EtherCATStatus* ethercat);

  // optional uint64 timestamp = 3;
  inline bool has_timestamp() const;
  inline void clear_timestamp();
  static const int kTimestampFieldNumber = 3;
  inline ::google::protobuf::uint64 timestamp() const;
  inline void set_timestamp(::google::protobuf::uint64 value);

  // optional int32 adc_torque = 4;
  inline bool has_adc_torque() const;
  inline void clear_adc_torque();
  static const int kAdcTorqueFieldNumber = 4;
  inline ::google::protobuf::int32 adc_torque() const;
  inline void set_adc_torque(::google::protobuf::int32 value);

  // optional int32 flags = 5;
  inline bool has_flags() const;
  inline void clear_flags();
  static const int kFlagsFieldNumber = 5;
  inline ::google::protobuf::int32 flags() const;
  inline void set_flags(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:M3LoadX1EcStatus)
 private:
  inline void set_has_base();
  inline void clear_has_base();
  inline void set_has_ethercat();
  inline void clear_has_ethercat();
  inline void set_has_timestamp();
  inline void clear_has_timestamp();
  inline void set_has_adc_torque();
  inline void clear_has_adc_torque();
  inline void set_has_flags();
  inline void clear_has_flags();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::M3BaseStatus* base_;
  ::M3EtherCATStatus* ethercat_;
  ::google::protobuf::uint64 timestamp_;
  ::google::protobuf::int32 adc_torque_;
  ::google::protobuf::int32 flags_;
  friend void  protobuf_AddDesc_loadx1_5fec_2eproto();
  friend void protobuf_AssignDesc_loadx1_5fec_2eproto();
  friend void protobuf_ShutdownFile_loadx1_5fec_2eproto();

  void InitAsDefaultInstance();
  static M3LoadX1EcStatus* default_instance_;
};
// -------------------------------------------------------------------

class M3LoadX1EcCommand : public ::google::protobuf::Message {
 public:
  M3LoadX1EcCommand();
  virtual ~M3LoadX1EcCommand();

  M3LoadX1EcCommand(const M3LoadX1EcCommand& from);

  inline M3LoadX1EcCommand& operator=(const M3LoadX1EcCommand& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const M3LoadX1EcCommand& default_instance();

  void Swap(M3LoadX1EcCommand* other);

  // implements Message ----------------------------------------------

  M3LoadX1EcCommand* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const M3LoadX1EcCommand& from);
  void MergeFrom(const M3LoadX1EcCommand& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 dummy = 1;
  inline bool has_dummy() const;
  inline void clear_dummy();
  static const int kDummyFieldNumber = 1;
  inline ::google::protobuf::int32 dummy() const;
  inline void set_dummy(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:M3LoadX1EcCommand)
 private:
  inline void set_has_dummy();
  inline void clear_has_dummy();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 dummy_;
  friend void  protobuf_AddDesc_loadx1_5fec_2eproto();
  friend void protobuf_AssignDesc_loadx1_5fec_2eproto();
  friend void protobuf_ShutdownFile_loadx1_5fec_2eproto();

  void InitAsDefaultInstance();
  static M3LoadX1EcCommand* default_instance_;
};
// -------------------------------------------------------------------

class M3LoadX1EcParam : public ::google::protobuf::Message {
 public:
  M3LoadX1EcParam();
  virtual ~M3LoadX1EcParam();

  M3LoadX1EcParam(const M3LoadX1EcParam& from);

  inline M3LoadX1EcParam& operator=(const M3LoadX1EcParam& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const M3LoadX1EcParam& default_instance();

  void Swap(M3LoadX1EcParam* other);

  // implements Message ----------------------------------------------

  M3LoadX1EcParam* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const M3LoadX1EcParam& from);
  void MergeFrom(const M3LoadX1EcParam& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 dummy = 1;
  inline bool has_dummy() const;
  inline void clear_dummy();
  static const int kDummyFieldNumber = 1;
  inline ::google::protobuf::int32 dummy() const;
  inline void set_dummy(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:M3LoadX1EcParam)
 private:
  inline void set_has_dummy();
  inline void clear_has_dummy();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 dummy_;
  friend void  protobuf_AddDesc_loadx1_5fec_2eproto();
  friend void protobuf_AssignDesc_loadx1_5fec_2eproto();
  friend void protobuf_ShutdownFile_loadx1_5fec_2eproto();

  void InitAsDefaultInstance();
  static M3LoadX1EcParam* default_instance_;
};
// ===================================================================


// ===================================================================

// M3LoadX1EcStatus

// optional .M3BaseStatus base = 1;
inline bool M3LoadX1EcStatus::has_base() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void M3LoadX1EcStatus::set_has_base() {
  _has_bits_[0] |= 0x00000001u;
}
inline void M3LoadX1EcStatus::clear_has_base() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void M3LoadX1EcStatus::clear_base() {
  if (base_ != NULL) base_->::M3BaseStatus::Clear();
  clear_has_base();
}
inline const ::M3BaseStatus& M3LoadX1EcStatus::base() const {
  // @@protoc_insertion_point(field_get:M3LoadX1EcStatus.base)
  return base_ != NULL ? *base_ : *default_instance_->base_;
}
inline ::M3BaseStatus* M3LoadX1EcStatus::mutable_base() {
  set_has_base();
  if (base_ == NULL) base_ = new ::M3BaseStatus;
  // @@protoc_insertion_point(field_mutable:M3LoadX1EcStatus.base)
  return base_;
}
inline ::M3BaseStatus* M3LoadX1EcStatus::release_base() {
  clear_has_base();
  ::M3BaseStatus* temp = base_;
  base_ = NULL;
  return temp;
}
inline void M3LoadX1EcStatus::set_allocated_base(::M3BaseStatus* base) {
  delete base_;
  base_ = base;
  if (base) {
    set_has_base();
  } else {
    clear_has_base();
  }
  // @@protoc_insertion_point(field_set_allocated:M3LoadX1EcStatus.base)
}

// optional .M3EtherCATStatus ethercat = 2;
inline bool M3LoadX1EcStatus::has_ethercat() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void M3LoadX1EcStatus::set_has_ethercat() {
  _has_bits_[0] |= 0x00000002u;
}
inline void M3LoadX1EcStatus::clear_has_ethercat() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void M3LoadX1EcStatus::clear_ethercat() {
  if (ethercat_ != NULL) ethercat_->::M3EtherCATStatus::Clear();
  clear_has_ethercat();
}
inline const ::M3EtherCATStatus& M3LoadX1EcStatus::ethercat() const {
  // @@protoc_insertion_point(field_get:M3LoadX1EcStatus.ethercat)
  return ethercat_ != NULL ? *ethercat_ : *default_instance_->ethercat_;
}
inline ::M3EtherCATStatus* M3LoadX1EcStatus::mutable_ethercat() {
  set_has_ethercat();
  if (ethercat_ == NULL) ethercat_ = new ::M3EtherCATStatus;
  // @@protoc_insertion_point(field_mutable:M3LoadX1EcStatus.ethercat)
  return ethercat_;
}
inline ::M3EtherCATStatus* M3LoadX1EcStatus::release_ethercat() {
  clear_has_ethercat();
  ::M3EtherCATStatus* temp = ethercat_;
  ethercat_ = NULL;
  return temp;
}
inline void M3LoadX1EcStatus::set_allocated_ethercat(::M3EtherCATStatus* ethercat) {
  delete ethercat_;
  ethercat_ = ethercat;
  if (ethercat) {
    set_has_ethercat();
  } else {
    clear_has_ethercat();
  }
  // @@protoc_insertion_point(field_set_allocated:M3LoadX1EcStatus.ethercat)
}

// optional uint64 timestamp = 3;
inline bool M3LoadX1EcStatus::has_timestamp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void M3LoadX1EcStatus::set_has_timestamp() {
  _has_bits_[0] |= 0x00000004u;
}
inline void M3LoadX1EcStatus::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void M3LoadX1EcStatus::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::uint64 M3LoadX1EcStatus::timestamp() const {
  // @@protoc_insertion_point(field_get:M3LoadX1EcStatus.timestamp)
  return timestamp_;
}
inline void M3LoadX1EcStatus::set_timestamp(::google::protobuf::uint64 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:M3LoadX1EcStatus.timestamp)
}

// optional int32 adc_torque = 4;
inline bool M3LoadX1EcStatus::has_adc_torque() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void M3LoadX1EcStatus::set_has_adc_torque() {
  _has_bits_[0] |= 0x00000008u;
}
inline void M3LoadX1EcStatus::clear_has_adc_torque() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void M3LoadX1EcStatus::clear_adc_torque() {
  adc_torque_ = 0;
  clear_has_adc_torque();
}
inline ::google::protobuf::int32 M3LoadX1EcStatus::adc_torque() const {
  // @@protoc_insertion_point(field_get:M3LoadX1EcStatus.adc_torque)
  return adc_torque_;
}
inline void M3LoadX1EcStatus::set_adc_torque(::google::protobuf::int32 value) {
  set_has_adc_torque();
  adc_torque_ = value;
  // @@protoc_insertion_point(field_set:M3LoadX1EcStatus.adc_torque)
}

// optional int32 flags = 5;
inline bool M3LoadX1EcStatus::has_flags() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void M3LoadX1EcStatus::set_has_flags() {
  _has_bits_[0] |= 0x00000010u;
}
inline void M3LoadX1EcStatus::clear_has_flags() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void M3LoadX1EcStatus::clear_flags() {
  flags_ = 0;
  clear_has_flags();
}
inline ::google::protobuf::int32 M3LoadX1EcStatus::flags() const {
  // @@protoc_insertion_point(field_get:M3LoadX1EcStatus.flags)
  return flags_;
}
inline void M3LoadX1EcStatus::set_flags(::google::protobuf::int32 value) {
  set_has_flags();
  flags_ = value;
  // @@protoc_insertion_point(field_set:M3LoadX1EcStatus.flags)
}

// -------------------------------------------------------------------

// M3LoadX1EcCommand

// optional int32 dummy = 1;
inline bool M3LoadX1EcCommand::has_dummy() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void M3LoadX1EcCommand::set_has_dummy() {
  _has_bits_[0] |= 0x00000001u;
}
inline void M3LoadX1EcCommand::clear_has_dummy() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void M3LoadX1EcCommand::clear_dummy() {
  dummy_ = 0;
  clear_has_dummy();
}
inline ::google::protobuf::int32 M3LoadX1EcCommand::dummy() const {
  // @@protoc_insertion_point(field_get:M3LoadX1EcCommand.dummy)
  return dummy_;
}
inline void M3LoadX1EcCommand::set_dummy(::google::protobuf::int32 value) {
  set_has_dummy();
  dummy_ = value;
  // @@protoc_insertion_point(field_set:M3LoadX1EcCommand.dummy)
}

// -------------------------------------------------------------------

// M3LoadX1EcParam

// optional int32 dummy = 1;
inline bool M3LoadX1EcParam::has_dummy() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void M3LoadX1EcParam::set_has_dummy() {
  _has_bits_[0] |= 0x00000001u;
}
inline void M3LoadX1EcParam::clear_has_dummy() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void M3LoadX1EcParam::clear_dummy() {
  dummy_ = 0;
  clear_has_dummy();
}
inline ::google::protobuf::int32 M3LoadX1EcParam::dummy() const {
  // @@protoc_insertion_point(field_get:M3LoadX1EcParam.dummy)
  return dummy_;
}
inline void M3LoadX1EcParam::set_dummy(::google::protobuf::int32 value) {
  set_has_dummy();
  dummy_ = value;
  // @@protoc_insertion_point(field_set:M3LoadX1EcParam.dummy)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_loadx1_5fec_2eproto__INCLUDED