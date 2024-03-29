# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import grpc

import server_pb2 as server__pb2


class ExampleServiceStub(object):
    """Missing associated documentation comment in .proto file."""

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.SayHello = channel.unary_unary(
                '/example.ExampleService/SayHello',
                request_serializer=server__pb2.HelloRequest.SerializeToString,
                response_deserializer=server__pb2.HelloResponse.FromString,
                )
        self.SaySomething = channel.unary_unary(
                '/example.ExampleService/SaySomething',
                request_serializer=server__pb2.SomethingRequest.SerializeToString,
                response_deserializer=server__pb2.SomethingReply.FromString,
                )


class ExampleServiceServicer(object):
    """Missing associated documentation comment in .proto file."""

    def SayHello(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def SaySomething(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_ExampleServiceServicer_to_server(servicer, server):
    rpc_method_handlers = {
            'SayHello': grpc.unary_unary_rpc_method_handler(
                    servicer.SayHello,
                    request_deserializer=server__pb2.HelloRequest.FromString,
                    response_serializer=server__pb2.HelloResponse.SerializeToString,
            ),
            'SaySomething': grpc.unary_unary_rpc_method_handler(
                    servicer.SaySomething,
                    request_deserializer=server__pb2.SomethingRequest.FromString,
                    response_serializer=server__pb2.SomethingReply.SerializeToString,
            ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
            'example.ExampleService', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


 # This class is part of an EXPERIMENTAL API.
class ExampleService(object):
    """Missing associated documentation comment in .proto file."""

    @staticmethod
    def SayHello(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/example.ExampleService/SayHello',
            server__pb2.HelloRequest.SerializeToString,
            server__pb2.HelloResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def SaySomething(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/example.ExampleService/SaySomething',
            server__pb2.SomethingRequest.SerializeToString,
            server__pb2.SomethingReply.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)
