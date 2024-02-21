// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: product-service

#ifndef GOOGLE_PROTOBUF_INCLUDED_product_2dservice
#define GOOGLE_PROTOBUF_INCLUDED_product_2dservice

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_product_2dservice
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_product_2dservice {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_product_2dservice;
namespace example {
class HelloRequest;
struct HelloRequestDefaultTypeInternal;
extern HelloRequestDefaultTypeInternal _HelloRequest_default_instance_;
class HelloResponse;
struct HelloResponseDefaultTypeInternal;
extern HelloResponseDefaultTypeInternal _HelloResponse_default_instance_;
class SomethingReply;
struct SomethingReplyDefaultTypeInternal;
extern SomethingReplyDefaultTypeInternal _SomethingReply_default_instance_;
class SomethingRequest;
struct SomethingRequestDefaultTypeInternal;
extern SomethingRequestDefaultTypeInternal _SomethingRequest_default_instance_;
}  // namespace example
PROTOBUF_NAMESPACE_OPEN
template<> ::example::HelloRequest* Arena::CreateMaybeMessage<::example::HelloRequest>(Arena*);
template<> ::example::HelloResponse* Arena::CreateMaybeMessage<::example::HelloResponse>(Arena*);
template<> ::example::SomethingReply* Arena::CreateMaybeMessage<::example::SomethingReply>(Arena*);
template<> ::example::SomethingRequest* Arena::CreateMaybeMessage<::example::SomethingRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace example {

// ===================================================================

class HelloRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:example.HelloRequest) */ {
 public:
  inline HelloRequest() : HelloRequest(nullptr) {}
  ~HelloRequest() override;
  explicit constexpr HelloRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  HelloRequest(const HelloRequest& from);
  HelloRequest(HelloRequest&& from) noexcept
    : HelloRequest() {
    *this = ::std::move(from);
  }

  inline HelloRequest& operator=(const HelloRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline HelloRequest& operator=(HelloRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const HelloRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const HelloRequest* internal_default_instance() {
    return reinterpret_cast<const HelloRequest*>(
               &_HelloRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(HelloRequest& a, HelloRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(HelloRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(HelloRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  HelloRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<HelloRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const HelloRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const HelloRequest& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HelloRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "example.HelloRequest";
  }
  protected:
  explicit HelloRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // @@protoc_insertion_point(class_scope:example.HelloRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_product_2dservice;
};
// -------------------------------------------------------------------

class HelloResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:example.HelloResponse) */ {
 public:
  inline HelloResponse() : HelloResponse(nullptr) {}
  ~HelloResponse() override;
  explicit constexpr HelloResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  HelloResponse(const HelloResponse& from);
  HelloResponse(HelloResponse&& from) noexcept
    : HelloResponse() {
    *this = ::std::move(from);
  }

  inline HelloResponse& operator=(const HelloResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline HelloResponse& operator=(HelloResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const HelloResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const HelloResponse* internal_default_instance() {
    return reinterpret_cast<const HelloResponse*>(
               &_HelloResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(HelloResponse& a, HelloResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(HelloResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(HelloResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  HelloResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<HelloResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const HelloResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const HelloResponse& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HelloResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "example.HelloResponse";
  }
  protected:
  explicit HelloResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 1,
  };
  // string message = 1;
  void clear_message();
  const std::string& message() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_message(ArgT0&& arg0, ArgT... args);
  std::string* mutable_message();
  PROTOBUF_NODISCARD std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // @@protoc_insertion_point(class_scope:example.HelloResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_product_2dservice;
};
// -------------------------------------------------------------------

class SomethingRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:example.SomethingRequest) */ {
 public:
  inline SomethingRequest() : SomethingRequest(nullptr) {}
  ~SomethingRequest() override;
  explicit constexpr SomethingRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SomethingRequest(const SomethingRequest& from);
  SomethingRequest(SomethingRequest&& from) noexcept
    : SomethingRequest() {
    *this = ::std::move(from);
  }

  inline SomethingRequest& operator=(const SomethingRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SomethingRequest& operator=(SomethingRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SomethingRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const SomethingRequest* internal_default_instance() {
    return reinterpret_cast<const SomethingRequest*>(
               &_SomethingRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(SomethingRequest& a, SomethingRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(SomethingRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SomethingRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SomethingRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SomethingRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SomethingRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const SomethingRequest& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SomethingRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "example.SomethingRequest";
  }
  protected:
  explicit SomethingRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kEmailsFieldNumber = 3,
    kNameFieldNumber = 1,
    kAgeFieldNumber = 2,
  };
  // repeated string emails = 3;
  int emails_size() const;
  private:
  int _internal_emails_size() const;
  public:
  void clear_emails();
  const std::string& emails(int index) const;
  std::string* mutable_emails(int index);
  void set_emails(int index, const std::string& value);
  void set_emails(int index, std::string&& value);
  void set_emails(int index, const char* value);
  void set_emails(int index, const char* value, size_t size);
  std::string* add_emails();
  void add_emails(const std::string& value);
  void add_emails(std::string&& value);
  void add_emails(const char* value);
  void add_emails(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& emails() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_emails();
  private:
  const std::string& _internal_emails(int index) const;
  std::string* _internal_add_emails();
  public:

  // string name = 1;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // int32 age = 2;
  void clear_age();
  int32_t age() const;
  void set_age(int32_t value);
  private:
  int32_t _internal_age() const;
  void _internal_set_age(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:example.SomethingRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> emails_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  int32_t age_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_product_2dservice;
};
// -------------------------------------------------------------------

class SomethingReply final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:example.SomethingReply) */ {
 public:
  inline SomethingReply() : SomethingReply(nullptr) {}
  ~SomethingReply() override;
  explicit constexpr SomethingReply(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SomethingReply(const SomethingReply& from);
  SomethingReply(SomethingReply&& from) noexcept
    : SomethingReply() {
    *this = ::std::move(from);
  }

  inline SomethingReply& operator=(const SomethingReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline SomethingReply& operator=(SomethingReply&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SomethingReply& default_instance() {
    return *internal_default_instance();
  }
  static inline const SomethingReply* internal_default_instance() {
    return reinterpret_cast<const SomethingReply*>(
               &_SomethingReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(SomethingReply& a, SomethingReply& b) {
    a.Swap(&b);
  }
  inline void Swap(SomethingReply* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SomethingReply* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SomethingReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SomethingReply>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SomethingReply& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const SomethingReply& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SomethingReply* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "example.SomethingReply";
  }
  protected:
  explicit SomethingReply(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 1,
  };
  // string message = 1;
  void clear_message();
  const std::string& message() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_message(ArgT0&& arg0, ArgT... args);
  std::string* mutable_message();
  PROTOBUF_NODISCARD std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // @@protoc_insertion_point(class_scope:example.SomethingReply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_product_2dservice;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HelloRequest

// string name = 1;
inline void HelloRequest::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& HelloRequest::name() const {
  // @@protoc_insertion_point(field_get:example.HelloRequest.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HelloRequest::set_name(ArgT0&& arg0, ArgT... args) {
 
 name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:example.HelloRequest.name)
}
inline std::string* HelloRequest::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:example.HelloRequest.name)
  return _s;
}
inline const std::string& HelloRequest::_internal_name() const {
  return name_.Get();
}
inline void HelloRequest::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* HelloRequest::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* HelloRequest::release_name() {
  // @@protoc_insertion_point(field_release:example.HelloRequest.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void HelloRequest::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:example.HelloRequest.name)
}

// -------------------------------------------------------------------

// HelloResponse

// string message = 1;
inline void HelloResponse::clear_message() {
  message_.ClearToEmpty();
}
inline const std::string& HelloResponse::message() const {
  // @@protoc_insertion_point(field_get:example.HelloResponse.message)
  return _internal_message();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HelloResponse::set_message(ArgT0&& arg0, ArgT... args) {
 
 message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:example.HelloResponse.message)
}
inline std::string* HelloResponse::mutable_message() {
  std::string* _s = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:example.HelloResponse.message)
  return _s;
}
inline const std::string& HelloResponse::_internal_message() const {
  return message_.Get();
}
inline void HelloResponse::_internal_set_message(const std::string& value) {
  
  message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* HelloResponse::_internal_mutable_message() {
  
  return message_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* HelloResponse::release_message() {
  // @@protoc_insertion_point(field_release:example.HelloResponse.message)
  return message_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void HelloResponse::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (message_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:example.HelloResponse.message)
}

// -------------------------------------------------------------------

// SomethingRequest

// string name = 1;
inline void SomethingRequest::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& SomethingRequest::name() const {
  // @@protoc_insertion_point(field_get:example.SomethingRequest.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SomethingRequest::set_name(ArgT0&& arg0, ArgT... args) {
 
 name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:example.SomethingRequest.name)
}
inline std::string* SomethingRequest::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:example.SomethingRequest.name)
  return _s;
}
inline const std::string& SomethingRequest::_internal_name() const {
  return name_.Get();
}
inline void SomethingRequest::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* SomethingRequest::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* SomethingRequest::release_name() {
  // @@protoc_insertion_point(field_release:example.SomethingRequest.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void SomethingRequest::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:example.SomethingRequest.name)
}

// int32 age = 2;
inline void SomethingRequest::clear_age() {
  age_ = 0;
}
inline int32_t SomethingRequest::_internal_age() const {
  return age_;
}
inline int32_t SomethingRequest::age() const {
  // @@protoc_insertion_point(field_get:example.SomethingRequest.age)
  return _internal_age();
}
inline void SomethingRequest::_internal_set_age(int32_t value) {
  
  age_ = value;
}
inline void SomethingRequest::set_age(int32_t value) {
  _internal_set_age(value);
  // @@protoc_insertion_point(field_set:example.SomethingRequest.age)
}

// repeated string emails = 3;
inline int SomethingRequest::_internal_emails_size() const {
  return emails_.size();
}
inline int SomethingRequest::emails_size() const {
  return _internal_emails_size();
}
inline void SomethingRequest::clear_emails() {
  emails_.Clear();
}
inline std::string* SomethingRequest::add_emails() {
  std::string* _s = _internal_add_emails();
  // @@protoc_insertion_point(field_add_mutable:example.SomethingRequest.emails)
  return _s;
}
inline const std::string& SomethingRequest::_internal_emails(int index) const {
  return emails_.Get(index);
}
inline const std::string& SomethingRequest::emails(int index) const {
  // @@protoc_insertion_point(field_get:example.SomethingRequest.emails)
  return _internal_emails(index);
}
inline std::string* SomethingRequest::mutable_emails(int index) {
  // @@protoc_insertion_point(field_mutable:example.SomethingRequest.emails)
  return emails_.Mutable(index);
}
inline void SomethingRequest::set_emails(int index, const std::string& value) {
  emails_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:example.SomethingRequest.emails)
}
inline void SomethingRequest::set_emails(int index, std::string&& value) {
  emails_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:example.SomethingRequest.emails)
}
inline void SomethingRequest::set_emails(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  emails_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:example.SomethingRequest.emails)
}
inline void SomethingRequest::set_emails(int index, const char* value, size_t size) {
  emails_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:example.SomethingRequest.emails)
}
inline std::string* SomethingRequest::_internal_add_emails() {
  return emails_.Add();
}
inline void SomethingRequest::add_emails(const std::string& value) {
  emails_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:example.SomethingRequest.emails)
}
inline void SomethingRequest::add_emails(std::string&& value) {
  emails_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:example.SomethingRequest.emails)
}
inline void SomethingRequest::add_emails(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  emails_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:example.SomethingRequest.emails)
}
inline void SomethingRequest::add_emails(const char* value, size_t size) {
  emails_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:example.SomethingRequest.emails)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
SomethingRequest::emails() const {
  // @@protoc_insertion_point(field_list:example.SomethingRequest.emails)
  return emails_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
SomethingRequest::mutable_emails() {
  // @@protoc_insertion_point(field_mutable_list:example.SomethingRequest.emails)
  return &emails_;
}

// -------------------------------------------------------------------

// SomethingReply

// string message = 1;
inline void SomethingReply::clear_message() {
  message_.ClearToEmpty();
}
inline const std::string& SomethingReply::message() const {
  // @@protoc_insertion_point(field_get:example.SomethingReply.message)
  return _internal_message();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SomethingReply::set_message(ArgT0&& arg0, ArgT... args) {
 
 message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:example.SomethingReply.message)
}
inline std::string* SomethingReply::mutable_message() {
  std::string* _s = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:example.SomethingReply.message)
  return _s;
}
inline const std::string& SomethingReply::_internal_message() const {
  return message_.Get();
}
inline void SomethingReply::_internal_set_message(const std::string& value) {
  
  message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* SomethingReply::_internal_mutable_message() {
  
  return message_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* SomethingReply::release_message() {
  // @@protoc_insertion_point(field_release:example.SomethingReply.message)
  return message_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void SomethingReply::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (message_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:example.SomethingReply.message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace example

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_product_2dservice
