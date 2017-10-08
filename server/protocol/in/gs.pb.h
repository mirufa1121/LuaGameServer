// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gs.proto

#ifndef PROTOBUF_gs_2eproto__INCLUDED
#define PROTOBUF_gs_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace gs {
class G2S_Create;
class G2S_CreateDefaultTypeInternal;
extern G2S_CreateDefaultTypeInternal _G2S_Create_default_instance_;
class G2S_Login;
class G2S_LoginDefaultTypeInternal;
extern G2S_LoginDefaultTypeInternal _G2S_Login_default_instance_;
class G2S_LoginOffline;
class G2S_LoginOfflineDefaultTypeInternal;
extern G2S_LoginOfflineDefaultTypeInternal _G2S_LoginOffline_default_instance_;
class G2S_RegisterServer;
class G2S_RegisterServerDefaultTypeInternal;
extern G2S_RegisterServerDefaultTypeInternal _G2S_RegisterServer_default_instance_;
class S2G_Create;
class S2G_CreateDefaultTypeInternal;
extern S2G_CreateDefaultTypeInternal _S2G_Create_default_instance_;
class S2G_Login;
class S2G_LoginDefaultTypeInternal;
extern S2G_LoginDefaultTypeInternal _S2G_Login_default_instance_;
class S2G_Ping;
class S2G_PingDefaultTypeInternal;
extern S2G_PingDefaultTypeInternal _S2G_Ping_default_instance_;
class S2G_RegisterServer;
class S2G_RegisterServerDefaultTypeInternal;
extern S2G_RegisterServerDefaultTypeInternal _S2G_RegisterServer_default_instance_;
}  // namespace gs

namespace gs {

namespace protobuf_gs_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_gs_2eproto

enum ProtoID {
  ID_NULL = 0,
  ID_S2G_RegisterServer = 9001,
  ID_G2S_RegisterServer = 9002,
  ID_G2S_Login = 9003,
  ID_S2G_Login = 9004,
  ID_S2G_Ping = 9005,
  ID_G2S_Create = 9006,
  ID_S2G_Create = 9007,
  ID_G2S_LoginOffline = 9008,
  ProtoID_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ProtoID_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ProtoID_IsValid(int value);
const ProtoID ProtoID_MIN = ID_NULL;
const ProtoID ProtoID_MAX = ID_G2S_LoginOffline;
const int ProtoID_ARRAYSIZE = ProtoID_MAX + 1;

const ::google::protobuf::EnumDescriptor* ProtoID_descriptor();
inline const ::std::string& ProtoID_Name(ProtoID value) {
  return ::google::protobuf::internal::NameOfEnum(
    ProtoID_descriptor(), value);
}
inline bool ProtoID_Parse(
    const ::std::string& name, ProtoID* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ProtoID>(
    ProtoID_descriptor(), name, value);
}
// ===================================================================

class S2G_RegisterServer : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gs.S2G_RegisterServer) */ {
 public:
  S2G_RegisterServer();
  virtual ~S2G_RegisterServer();

  S2G_RegisterServer(const S2G_RegisterServer& from);

  inline S2G_RegisterServer& operator=(const S2G_RegisterServer& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2G_RegisterServer& default_instance();

  static inline const S2G_RegisterServer* internal_default_instance() {
    return reinterpret_cast<const S2G_RegisterServer*>(
               &_S2G_RegisterServer_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(S2G_RegisterServer* other);

  // implements Message ----------------------------------------------

  inline S2G_RegisterServer* New() const PROTOBUF_FINAL { return New(NULL); }

  S2G_RegisterServer* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const S2G_RegisterServer& from);
  void MergeFrom(const S2G_RegisterServer& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(S2G_RegisterServer* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint32 sid = 1;
  void clear_sid();
  static const int kSidFieldNumber = 1;
  ::google::protobuf::uint32 sid() const;
  void set_sid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:gs.S2G_RegisterServer)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 sid_;
  mutable int _cached_size_;
  friend struct protobuf_gs_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class G2S_RegisterServer : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gs.G2S_RegisterServer) */ {
 public:
  G2S_RegisterServer();
  virtual ~G2S_RegisterServer();

  G2S_RegisterServer(const G2S_RegisterServer& from);

  inline G2S_RegisterServer& operator=(const G2S_RegisterServer& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const G2S_RegisterServer& default_instance();

  static inline const G2S_RegisterServer* internal_default_instance() {
    return reinterpret_cast<const G2S_RegisterServer*>(
               &_G2S_RegisterServer_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(G2S_RegisterServer* other);

  // implements Message ----------------------------------------------

  inline G2S_RegisterServer* New() const PROTOBUF_FINAL { return New(NULL); }

  G2S_RegisterServer* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const G2S_RegisterServer& from);
  void MergeFrom(const G2S_RegisterServer& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(G2S_RegisterServer* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint32 ret = 1;
  void clear_ret();
  static const int kRetFieldNumber = 1;
  ::google::protobuf::uint32 ret() const;
  void set_ret(::google::protobuf::uint32 value);

  // uint32 sid = 2;
  void clear_sid();
  static const int kSidFieldNumber = 2;
  ::google::protobuf::uint32 sid() const;
  void set_sid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:gs.G2S_RegisterServer)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 ret_;
  ::google::protobuf::uint32 sid_;
  mutable int _cached_size_;
  friend struct protobuf_gs_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class G2S_Login : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gs.G2S_Login) */ {
 public:
  G2S_Login();
  virtual ~G2S_Login();

  G2S_Login(const G2S_Login& from);

  inline G2S_Login& operator=(const G2S_Login& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const G2S_Login& default_instance();

  static inline const G2S_Login* internal_default_instance() {
    return reinterpret_cast<const G2S_Login*>(
               &_G2S_Login_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(G2S_Login* other);

  // implements Message ----------------------------------------------

  inline G2S_Login* New() const PROTOBUF_FINAL { return New(NULL); }

  G2S_Login* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const G2S_Login& from);
  void MergeFrom(const G2S_Login& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(G2S_Login* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint64 tokenId = 1;
  void clear_tokenid();
  static const int kTokenIdFieldNumber = 1;
  ::google::protobuf::uint64 tokenid() const;
  void set_tokenid(::google::protobuf::uint64 value);

  // uint64 uid = 2;
  void clear_uid();
  static const int kUidFieldNumber = 2;
  ::google::protobuf::uint64 uid() const;
  void set_uid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:gs.G2S_Login)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint64 tokenid_;
  ::google::protobuf::uint64 uid_;
  mutable int _cached_size_;
  friend struct protobuf_gs_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class S2G_Login : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gs.S2G_Login) */ {
 public:
  S2G_Login();
  virtual ~S2G_Login();

  S2G_Login(const S2G_Login& from);

  inline S2G_Login& operator=(const S2G_Login& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2G_Login& default_instance();

  static inline const S2G_Login* internal_default_instance() {
    return reinterpret_cast<const S2G_Login*>(
               &_S2G_Login_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(S2G_Login* other);

  // implements Message ----------------------------------------------

  inline S2G_Login* New() const PROTOBUF_FINAL { return New(NULL); }

  S2G_Login* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const S2G_Login& from);
  void MergeFrom(const S2G_Login& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(S2G_Login* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint64 tokenId = 1;
  void clear_tokenid();
  static const int kTokenIdFieldNumber = 1;
  ::google::protobuf::uint64 tokenid() const;
  void set_tokenid(::google::protobuf::uint64 value);

  // uint32 ret = 2;
  void clear_ret();
  static const int kRetFieldNumber = 2;
  ::google::protobuf::uint32 ret() const;
  void set_ret(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:gs.S2G_Login)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint64 tokenid_;
  ::google::protobuf::uint32 ret_;
  mutable int _cached_size_;
  friend struct protobuf_gs_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class S2G_Ping : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gs.S2G_Ping) */ {
 public:
  S2G_Ping();
  virtual ~S2G_Ping();

  S2G_Ping(const S2G_Ping& from);

  inline S2G_Ping& operator=(const S2G_Ping& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2G_Ping& default_instance();

  static inline const S2G_Ping* internal_default_instance() {
    return reinterpret_cast<const S2G_Ping*>(
               &_S2G_Ping_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    4;

  void Swap(S2G_Ping* other);

  // implements Message ----------------------------------------------

  inline S2G_Ping* New() const PROTOBUF_FINAL { return New(NULL); }

  S2G_Ping* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const S2G_Ping& from);
  void MergeFrom(const S2G_Ping& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(S2G_Ping* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint32 now_time = 1;
  void clear_now_time();
  static const int kNowTimeFieldNumber = 1;
  ::google::protobuf::uint32 now_time() const;
  void set_now_time(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:gs.S2G_Ping)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 now_time_;
  mutable int _cached_size_;
  friend struct protobuf_gs_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class G2S_Create : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gs.G2S_Create) */ {
 public:
  G2S_Create();
  virtual ~G2S_Create();

  G2S_Create(const G2S_Create& from);

  inline G2S_Create& operator=(const G2S_Create& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const G2S_Create& default_instance();

  static inline const G2S_Create* internal_default_instance() {
    return reinterpret_cast<const G2S_Create*>(
               &_G2S_Create_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    5;

  void Swap(G2S_Create* other);

  // implements Message ----------------------------------------------

  inline G2S_Create* New() const PROTOBUF_FINAL { return New(NULL); }

  G2S_Create* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const G2S_Create& from);
  void MergeFrom(const G2S_Create& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(G2S_Create* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint64 tokenId = 1;
  void clear_tokenid();
  static const int kTokenIdFieldNumber = 1;
  ::google::protobuf::uint64 tokenid() const;
  void set_tokenid(::google::protobuf::uint64 value);

  // uint64 uid = 2;
  void clear_uid();
  static const int kUidFieldNumber = 2;
  ::google::protobuf::uint64 uid() const;
  void set_uid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:gs.G2S_Create)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint64 tokenid_;
  ::google::protobuf::uint64 uid_;
  mutable int _cached_size_;
  friend struct protobuf_gs_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class S2G_Create : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gs.S2G_Create) */ {
 public:
  S2G_Create();
  virtual ~S2G_Create();

  S2G_Create(const S2G_Create& from);

  inline S2G_Create& operator=(const S2G_Create& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2G_Create& default_instance();

  static inline const S2G_Create* internal_default_instance() {
    return reinterpret_cast<const S2G_Create*>(
               &_S2G_Create_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    6;

  void Swap(S2G_Create* other);

  // implements Message ----------------------------------------------

  inline S2G_Create* New() const PROTOBUF_FINAL { return New(NULL); }

  S2G_Create* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const S2G_Create& from);
  void MergeFrom(const S2G_Create& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(S2G_Create* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint64 tokenId = 1;
  void clear_tokenid();
  static const int kTokenIdFieldNumber = 1;
  ::google::protobuf::uint64 tokenid() const;
  void set_tokenid(::google::protobuf::uint64 value);

  // uint32 ret = 2;
  void clear_ret();
  static const int kRetFieldNumber = 2;
  ::google::protobuf::uint32 ret() const;
  void set_ret(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:gs.S2G_Create)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint64 tokenid_;
  ::google::protobuf::uint32 ret_;
  mutable int _cached_size_;
  friend struct protobuf_gs_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class G2S_LoginOffline : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gs.G2S_LoginOffline) */ {
 public:
  G2S_LoginOffline();
  virtual ~G2S_LoginOffline();

  G2S_LoginOffline(const G2S_LoginOffline& from);

  inline G2S_LoginOffline& operator=(const G2S_LoginOffline& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const G2S_LoginOffline& default_instance();

  static inline const G2S_LoginOffline* internal_default_instance() {
    return reinterpret_cast<const G2S_LoginOffline*>(
               &_G2S_LoginOffline_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    7;

  void Swap(G2S_LoginOffline* other);

  // implements Message ----------------------------------------------

  inline G2S_LoginOffline* New() const PROTOBUF_FINAL { return New(NULL); }

  G2S_LoginOffline* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const G2S_LoginOffline& from);
  void MergeFrom(const G2S_LoginOffline& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(G2S_LoginOffline* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint64 uid = 1;
  void clear_uid();
  static const int kUidFieldNumber = 1;
  ::google::protobuf::uint64 uid() const;
  void set_uid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:gs.G2S_LoginOffline)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint64 uid_;
  mutable int _cached_size_;
  friend struct protobuf_gs_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// S2G_RegisterServer

// uint32 sid = 1;
inline void S2G_RegisterServer::clear_sid() {
  sid_ = 0u;
}
inline ::google::protobuf::uint32 S2G_RegisterServer::sid() const {
  // @@protoc_insertion_point(field_get:gs.S2G_RegisterServer.sid)
  return sid_;
}
inline void S2G_RegisterServer::set_sid(::google::protobuf::uint32 value) {
  
  sid_ = value;
  // @@protoc_insertion_point(field_set:gs.S2G_RegisterServer.sid)
}

// -------------------------------------------------------------------

// G2S_RegisterServer

// uint32 ret = 1;
inline void G2S_RegisterServer::clear_ret() {
  ret_ = 0u;
}
inline ::google::protobuf::uint32 G2S_RegisterServer::ret() const {
  // @@protoc_insertion_point(field_get:gs.G2S_RegisterServer.ret)
  return ret_;
}
inline void G2S_RegisterServer::set_ret(::google::protobuf::uint32 value) {
  
  ret_ = value;
  // @@protoc_insertion_point(field_set:gs.G2S_RegisterServer.ret)
}

// uint32 sid = 2;
inline void G2S_RegisterServer::clear_sid() {
  sid_ = 0u;
}
inline ::google::protobuf::uint32 G2S_RegisterServer::sid() const {
  // @@protoc_insertion_point(field_get:gs.G2S_RegisterServer.sid)
  return sid_;
}
inline void G2S_RegisterServer::set_sid(::google::protobuf::uint32 value) {
  
  sid_ = value;
  // @@protoc_insertion_point(field_set:gs.G2S_RegisterServer.sid)
}

// -------------------------------------------------------------------

// G2S_Login

// uint64 tokenId = 1;
inline void G2S_Login::clear_tokenid() {
  tokenid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 G2S_Login::tokenid() const {
  // @@protoc_insertion_point(field_get:gs.G2S_Login.tokenId)
  return tokenid_;
}
inline void G2S_Login::set_tokenid(::google::protobuf::uint64 value) {
  
  tokenid_ = value;
  // @@protoc_insertion_point(field_set:gs.G2S_Login.tokenId)
}

// uint64 uid = 2;
inline void G2S_Login::clear_uid() {
  uid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 G2S_Login::uid() const {
  // @@protoc_insertion_point(field_get:gs.G2S_Login.uid)
  return uid_;
}
inline void G2S_Login::set_uid(::google::protobuf::uint64 value) {
  
  uid_ = value;
  // @@protoc_insertion_point(field_set:gs.G2S_Login.uid)
}

// -------------------------------------------------------------------

// S2G_Login

// uint64 tokenId = 1;
inline void S2G_Login::clear_tokenid() {
  tokenid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 S2G_Login::tokenid() const {
  // @@protoc_insertion_point(field_get:gs.S2G_Login.tokenId)
  return tokenid_;
}
inline void S2G_Login::set_tokenid(::google::protobuf::uint64 value) {
  
  tokenid_ = value;
  // @@protoc_insertion_point(field_set:gs.S2G_Login.tokenId)
}

// uint32 ret = 2;
inline void S2G_Login::clear_ret() {
  ret_ = 0u;
}
inline ::google::protobuf::uint32 S2G_Login::ret() const {
  // @@protoc_insertion_point(field_get:gs.S2G_Login.ret)
  return ret_;
}
inline void S2G_Login::set_ret(::google::protobuf::uint32 value) {
  
  ret_ = value;
  // @@protoc_insertion_point(field_set:gs.S2G_Login.ret)
}

// -------------------------------------------------------------------

// S2G_Ping

// uint32 now_time = 1;
inline void S2G_Ping::clear_now_time() {
  now_time_ = 0u;
}
inline ::google::protobuf::uint32 S2G_Ping::now_time() const {
  // @@protoc_insertion_point(field_get:gs.S2G_Ping.now_time)
  return now_time_;
}
inline void S2G_Ping::set_now_time(::google::protobuf::uint32 value) {
  
  now_time_ = value;
  // @@protoc_insertion_point(field_set:gs.S2G_Ping.now_time)
}

// -------------------------------------------------------------------

// G2S_Create

// uint64 tokenId = 1;
inline void G2S_Create::clear_tokenid() {
  tokenid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 G2S_Create::tokenid() const {
  // @@protoc_insertion_point(field_get:gs.G2S_Create.tokenId)
  return tokenid_;
}
inline void G2S_Create::set_tokenid(::google::protobuf::uint64 value) {
  
  tokenid_ = value;
  // @@protoc_insertion_point(field_set:gs.G2S_Create.tokenId)
}

// uint64 uid = 2;
inline void G2S_Create::clear_uid() {
  uid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 G2S_Create::uid() const {
  // @@protoc_insertion_point(field_get:gs.G2S_Create.uid)
  return uid_;
}
inline void G2S_Create::set_uid(::google::protobuf::uint64 value) {
  
  uid_ = value;
  // @@protoc_insertion_point(field_set:gs.G2S_Create.uid)
}

// -------------------------------------------------------------------

// S2G_Create

// uint64 tokenId = 1;
inline void S2G_Create::clear_tokenid() {
  tokenid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 S2G_Create::tokenid() const {
  // @@protoc_insertion_point(field_get:gs.S2G_Create.tokenId)
  return tokenid_;
}
inline void S2G_Create::set_tokenid(::google::protobuf::uint64 value) {
  
  tokenid_ = value;
  // @@protoc_insertion_point(field_set:gs.S2G_Create.tokenId)
}

// uint32 ret = 2;
inline void S2G_Create::clear_ret() {
  ret_ = 0u;
}
inline ::google::protobuf::uint32 S2G_Create::ret() const {
  // @@protoc_insertion_point(field_get:gs.S2G_Create.ret)
  return ret_;
}
inline void S2G_Create::set_ret(::google::protobuf::uint32 value) {
  
  ret_ = value;
  // @@protoc_insertion_point(field_set:gs.S2G_Create.ret)
}

// -------------------------------------------------------------------

// G2S_LoginOffline

// uint64 uid = 1;
inline void G2S_LoginOffline::clear_uid() {
  uid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 G2S_LoginOffline::uid() const {
  // @@protoc_insertion_point(field_get:gs.G2S_LoginOffline.uid)
  return uid_;
}
inline void G2S_LoginOffline::set_uid(::google::protobuf::uint64 value) {
  
  uid_ = value;
  // @@protoc_insertion_point(field_set:gs.G2S_LoginOffline.uid)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace gs

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::gs::ProtoID> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gs::ProtoID>() {
  return ::gs::ProtoID_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_gs_2eproto__INCLUDED
