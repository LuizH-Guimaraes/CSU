#include <stdio.h>
#include <stdlib.h>
#include <iostream> 
#include <filesystem>
#include <string>
#include <vector>

#include <unistd.h>
#include <signal.h>
#include <future>
#include <thread>

using namespace std;
namespace fs = filesystem;

int variables = 0;
int clk = 0;

void my_handler(int s){
   printf("[%d] Sorry, to leave this system you need to write the command 'exit'\n",s);
}

int timer(){
   int clk = 0;
   while(clk < 10){
      system("clear");
      cout << ("Clock started:\n");
      printf("Timer: %d\n", clk);
      sleep(1);
      clk++;
   }
   return clk;
}

void async_timer(){
   int clk = 0;
   cout << ("Clock started:\n");
   while(clk < 10){
      sleep(1);
      clk++;
   }
   printf("Timer: %d\n", clk);
   // std::future<int> future_result = std::async(timer);
   // int result = future_result.get();
   // cout << result;
}

bool startsWith(string fullString, string startString) {
    return fullString.compare(0, startString.length(), startString) == 0;
}

void set_env(string varname, string varvalue){
   if(setenv(varname.c_str(), varvalue.c_str(), 1) != 0){
      cout << "Failed to set environment variable\n";
   }else{
      cout <<"Environment variable " << varvalue << " set to " << varname << "\n";
      variables++;
   }
}

vector<string> split(string fullString, string delimiter) {
   vector<string> tokens;
   string aux = "";
   size_t pos = 0;
   size_t size = delimiter.length();
   while(pos <= fullString.length()){
      if(pos + size <= fullString.length() && startsWith(fullString.substr(pos, pos+size), delimiter)){// found the delimiter
         if(aux != ""){
            tokens.push_back(aux);
         }
         aux = "";
         pos+= (size);
      }else{
         aux = aux + fullString[pos];
         pos++;
      }
   }
   if(aux != ""){
      tokens.push_back(aux);
   }
   return tokens;
}

int main () {
   string line = "";
   signal (SIGINT,my_handler);

   getline(cin, line);

   // fs::path currentPath = fs::current_path();
   while(line != "exit"){


      if( !startsWith(line, "command") && line.length() > 2 &&  line.substr(line.length()-1) == "&"){
         //Do the processes in background.
         std::thread t(async_timer);
         t.detach();
      }
      else if(startsWith(line, "timer")){
         timer();
      }
      else if(startsWith(line, "pwd")){
         fs::path currentPath = fs::current_path();
         cout << currentPath << endl;
      }
      else if(startsWith(line, "ls")){
         fs::path currentPath = fs::current_path();
         for (const auto & entry : fs::directory_iterator(currentPath))
            cout << entry.path().string().substr(currentPath.string().length() + 1, entry.path().string().length()) << endl;
      }
      else if(startsWith(line, "cd ")){
         fs::path currentPath = fs::current_path();
         fs::current_path(currentPath.string() + "/" + line.substr(3, line.length()));
         cout << line.substr(3, line.length()) << endl;
      }
      else if(startsWith(line, "echo")){
         cout << (line.substr(5, line.length())) << endl;
      }
      else if(startsWith(line, "clear")){
         system("clear");
      }
      else if(startsWith(line, "setenv")){
         string setenv = line.substr(7, line.length());
         vector<string> tokens = split(setenv, " ");
         if(tokens.size() != 2){
            cout << "Sorry Invalid number of arguments" << endl;
         }else{
            set_env(tokens[0], tokens[1]);
         }
      }
      else if(startsWith(line, "env")){
         extern char** environ;
         char** end = environ;
         while (*end != nullptr) { ++end; }

         for(int i = variables; i > 0; i--){
            cout << *(end - i) << endl;
         }
      }
      else if(startsWith(line, "kill")){
         int pid = stoi(line.substr(5, line.length()));
         cout << "Kill process started - it will be done in 10s\n";
         sleep(10);// It counts for 10s
         int result = kill(pid, -9);

         if (result == 0) {
            std::cout << "Sent SIGTERM signal to process " << pid << std::endl;
         } else {
            std::cerr << "Failed to send SIGTERM signal to process " << pid << std::endl;
         }
      }
      else if(startsWith(line, "command:")){
         string command = line.substr(9, line.length());
         cout << command << endl;
         system(command.c_str());
      }
      else{
         cout << "Sorry command not found!";
      }
      getline(cin, line);
   }
   cout << "Thank you for using this app!";
   return(0);
}