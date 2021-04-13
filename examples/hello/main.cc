#include <iostream>
#include "examples/hello/hello.h"
#include "gflags/gflags.h"

using namespace std;

DEFINE_string(whom, "c++", "whom to greet");
DEFINE_bool(json, false, "whether to return json");

int main(int argc, char *argv[]) { 
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  string greeting =
    FLAGS_json ? GetGreetingJson(FLAGS_whom) : GetGreeting(FLAGS_whom);
  cout << greeting << endl;
}
