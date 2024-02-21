import sys
sys.path.append('../')
import grpc 
from concurrent import futures
import server_pb2
import server_pb2_grpc



def run():
    channel = grpc.insecure_channel('192.168.12.211:50051')
    stub = server_pb2_grpc.ExampleServiceStub(channel)
    response = stub.SayHello(server_pb2.HelloRequest(name='Maya'))
    print("Greeter client received: " + response.message)

    response = stub.SaySomething(server_pb2.SomethingRequest(name="Maya Calillung", age=25, emails=["maya.com", "mayaCallilung@gmail.com"]))
    print("Greeter client received: " + response.message)

run()