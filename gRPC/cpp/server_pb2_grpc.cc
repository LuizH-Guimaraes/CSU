#include "product-service.pb.h"
#include "product-service.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace example
{

  static const char *ExampleService_method_names[] = {
      "/example.ExampleService/SayHello",
      "/example.ExampleService/SaySomething",
  };

  std::unique_ptr<ExampleService::Stub> ExampleService::NewStub(const std::shared_ptr<::grpc::ChannelInterface> &channel, const ::grpc::StubOptions &options)
  {
    (void)options;
    std::unique_ptr<ExampleService::Stub> stub(new ExampleService::Stub(channel, options));
    return stub;
  }

  ExampleService::Stub::Stub(const std::shared_ptr<::grpc::ChannelInterface> &channel, const ::grpc::StubOptions &options)
      : channel_(channel), rpcmethod_SayHello_(ExampleService_method_names[0], options.suffix_for_stats(), ::grpc::internal::RpcMethod::NORMAL_RPC, channel), rpcmethod_SaySomething_(ExampleService_method_names[1], options.suffix_for_stats(), ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {
  }

  ::grpc::Status ExampleService::Stub::SayHello(::grpc::ClientContext *context, const ::example::HelloRequest &request, ::example::HelloResponse *response)
  {
    return ::grpc::internal::BlockingUnaryCall<::example::HelloRequest, ::example::HelloResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SayHello_, context, request, response);
  }

  void ExampleService::Stub::async::SayHello(::grpc::ClientContext *context, const ::example::HelloRequest *request, ::example::HelloResponse *response, std::function<void(::grpc::Status)> f)
  {
    ::grpc::internal::CallbackUnaryCall<::example::HelloRequest, ::example::HelloResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SayHello_, context, request, response, std::move(f));
  }

  void ExampleService::Stub::async::SayHello(::grpc::ClientContext *context, const ::example::HelloRequest *request, ::example::HelloResponse *response, ::grpc::ClientUnaryReactor *reactor)
  {
    ::grpc::internal::ClientCallbackUnaryFactory::Create<::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SayHello_, context, request, response, reactor);
  }

  ::grpc::ClientAsyncResponseReader<::example::HelloResponse> *ExampleService::Stub::PrepareAsyncSayHelloRaw(::grpc::ClientContext *context, const ::example::HelloRequest &request, ::grpc::CompletionQueue *cq)
  {
    return ::grpc::internal::ClientAsyncResponseReaderHelper::Create<::example::HelloResponse, ::example::HelloRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SayHello_, context, request);
  }

  ::grpc::ClientAsyncResponseReader<::example::HelloResponse> *ExampleService::Stub::AsyncSayHelloRaw(::grpc::ClientContext *context, const ::example::HelloRequest &request, ::grpc::CompletionQueue *cq)
  {
    auto *result =
        this->PrepareAsyncSayHelloRaw(context, request, cq);
    result->StartCall();
    return result;
  }

  ::grpc::Status ExampleService::Stub::SaySomething(::grpc::ClientContext *context, const ::example::SomethingRequest &request, ::example::SomethingReply *response)
  {
    return ::grpc::internal::BlockingUnaryCall<::example::SomethingRequest, ::example::SomethingReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SaySomething_, context, request, response);
  }

  void ExampleService::Stub::async::SaySomething(::grpc::ClientContext *context, const ::example::SomethingRequest *request, ::example::SomethingReply *response, std::function<void(::grpc::Status)> f)
  {
    ::grpc::internal::CallbackUnaryCall<::example::SomethingRequest, ::example::SomethingReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SaySomething_, context, request, response, std::move(f));
  }

  void ExampleService::Stub::async::SaySomething(::grpc::ClientContext *context, const ::example::SomethingRequest *request, ::example::SomethingReply *response, ::grpc::ClientUnaryReactor *reactor)
  {
    ::grpc::internal::ClientCallbackUnaryFactory::Create<::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SaySomething_, context, request, response, reactor);
  }

  ::grpc::ClientAsyncResponseReader<::example::SomethingReply> *ExampleService::Stub::PrepareAsyncSaySomethingRaw(::grpc::ClientContext *context, const ::example::SomethingRequest &request, ::grpc::CompletionQueue *cq)
  {
    return ::grpc::internal::ClientAsyncResponseReaderHelper::Create<::example::SomethingReply, ::example::SomethingRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SaySomething_, context, request);
  }

  ::grpc::ClientAsyncResponseReader<::example::SomethingReply> *ExampleService::Stub::AsyncSaySomethingRaw(::grpc::ClientContext *context, const ::example::SomethingRequest &request, ::grpc::CompletionQueue *cq)
  {
    auto *result =
        this->PrepareAsyncSaySomethingRaw(context, request, cq);
    result->StartCall();
    return result;
  }

  ExampleService::Service::Service()
  {
    AddMethod(new ::grpc::internal::RpcServiceMethod(
        ExampleService_method_names[0],
        ::grpc::internal::RpcMethod::NORMAL_RPC,
        new ::grpc::internal::RpcMethodHandler<ExampleService::Service, ::example::HelloRequest, ::example::HelloResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
            [](ExampleService::Service *service,
               ::grpc::ServerContext *ctx,
               const ::example::HelloRequest *req,
               ::example::HelloResponse *resp)
            {
              return service->SayHello(ctx, req, resp);
            },
            this)));
    AddMethod(new ::grpc::internal::RpcServiceMethod(
        ExampleService_method_names[1],
        ::grpc::internal::RpcMethod::NORMAL_RPC,
        new ::grpc::internal::RpcMethodHandler<ExampleService::Service, ::example::SomethingRequest, ::example::SomethingReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
            [](ExampleService::Service *service,
               ::grpc::ServerContext *ctx,
               const ::example::SomethingRequest *req,
               ::example::SomethingReply *resp)
            {
              return service->SaySomething(ctx, req, resp);
            },
            this)));
  }

  ExampleService::Service::~Service()
  {
  }

  ::grpc::Status ExampleService::Service::SayHello(::grpc::ServerContext *context, const ::example::HelloRequest *request, ::example::HelloResponse *response)
  {
    (void)context;
    (void)request;
    (void)response;
    return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
  }

  ::grpc::Status ExampleService::Service::SaySomething(::grpc::ServerContext *context, const ::example::SomethingRequest *request, ::example::SomethingReply *response)
  {
    (void)context;
    (void)request;
    (void)response;
    return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
  }

} // namespace example
