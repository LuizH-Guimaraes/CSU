#include <iostream>
#include <memory>
#include <string>
#include <grpcpp/grpcpp.h>
#include "helloworld.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using helloworld::ComplexReply;
using helloworld::ComplexRequest;
using helloworld::Greeter;
using helloworld::HelloReply;
using helloworld::HelloRequest;

class GreeterClient
{
public:
    GreeterClient(std::shared_ptr<Channel> channel)
        : stub_(Greeter::NewStub(channel)) {}

    std::string SayHello(const std::string &name)
    {
        HelloRequest request;
        request.set_name(name);

        HelloReply reply;
        ClientContext context;

        Status status = stub_->SayHello(&context, request, &reply);

        if (status.ok())
        {
            return reply.message();
        }
        else
        {
            std::cout << "Error: " << status.error_code() << ": " << status.error_message() << std::endl;
            return "RPC failed";
        }
    }

    std::string SaySomething(const std::string &name, int age, const std::vector<std::string> &emails, const std::map<std::string, std::string> &properties)
    {
        ComplexRequest request;
        request.set_name(name);
        request.set_age(age);
        for (const auto &email : emails)
        {
            request.add_emails(email);
        }
        for (const auto &kv : properties)
        {
            (*request.mutable_properties())[kv.first] = kv.second;
        }

        ComplexReply reply;
        ClientContext context;

        Status status = stub_->SaySomething(&context, request, &reply);

        if (status.ok())
        {
            return reply.message();
        }
        else
        {
            std::cout << "Error: " << status.error_code() << ": " << status.error_message() << std::endl;
            return "RPC failed";
        }
    }

private:
    std::unique_ptr<Greeter::Stub> stub_;
};

int main()
{
    GreeterClient greeter(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));

    // Call SayHello
    std::string helloResponse = greeter.SayHello("Alice");
    std::cout << "SayHello response: " << helloResponse << std::endl;

    // Call SaySomething
    std::vector<std::string> emails = {"alice@example.com", "bob@example.com"};
    std::map<std::string, std::string> properties = {{"key1", "value1"}, {"key2", "value2"}};
    std::string somethingResponse = greeter.SaySomething("Alice", 30, emails, properties);
    std::cout << "SaySomething response: " << somethingResponse << std::endl;

    return 0;
}
