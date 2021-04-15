#include "examples/hello/hello.h"
#include "gflags/gflags.h"
#include "glog/logging.h"

DEFINE_string(whom, "c++", "whom to greet");
DEFINE_bool(json, false, "whether to return json");

int main(int argc, char *argv[]) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);
  std::string greeting =
      FLAGS_json ? GetGreetingJson(FLAGS_whom) : GetGreeting(FLAGS_whom);
  LOG(INFO) << greeting;
}
