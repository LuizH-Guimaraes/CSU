import sys
sys.path.append('../')
import grpc 
from concurrent import futures
import server_pb2
import server_pb2_grpc

channel = grpc.insecure_channel('localhost:50051')
stub = server_pb2_grpc.ExampleServiceStub(channel)

response = stub.SayHello(server_pb2.HelloRequest(name='Luiz Guimaraes'))
print("Received: " + response.message)
