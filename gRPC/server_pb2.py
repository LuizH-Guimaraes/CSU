# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: server.proto
# Protobuf Python Version: 4.25.0
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x0cserver.proto\x12\x07\x65xample\"\x1c\n\x0cHelloRequest\x12\x0c\n\x04name\x18\x01 \x01(\t\" \n\rHelloResponse\x12\x0f\n\x07message\x18\x01 \x01(\t2K\n\x0e\x45xampleService\x12\x39\n\x08SayHello\x12\x15.example.HelloRequest\x1a\x16.example.HelloResponseb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'server_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:
  DESCRIPTOR._options = None
  _globals['_HELLOREQUEST']._serialized_start=25
  _globals['_HELLOREQUEST']._serialized_end=53
  _globals['_HELLORESPONSE']._serialized_start=55
  _globals['_HELLORESPONSE']._serialized_end=87
  _globals['_EXAMPLESERVICE']._serialized_start=89
  _globals['_EXAMPLESERVICE']._serialized_end=164
# @@protoc_insertion_point(module_scope)