import sys
sys.path.append('../')
import grpc 
from concurrent import futures
import server_pb2
import server_pb2_grpc

class ExampleServicer(server_pb2_grpc.ExampleServiceServicer):
    def SayHello(self, request, context):
        print(f"Received request: {request.name}")
        return server_pb2.HelloResponse(message="Server received:, %s!" % request.name)

def serve():
    server = grpc.server(futures.ThreadPoolExecutor(max_workers=10))
    server_pb2_grpc.add_ExampleServiceServicer_to_server(ExampleServicer(), server)
    server.add_insecure_port('[::]:50051')
    server.start()
    server.wait_for_termination()

if __name__ == '__main__':
    print("Listening server on port: 50051")
    serve()
