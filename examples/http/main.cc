#include "gflags/gflags.h"
#include "glog/logging.h"
#include "yhirose/httplib/httplib.h"

DEFINE_string(host, "0.0.0.0", "server host");
DEFINE_int32(port, 8080, "server port");

int main(int argc, char *argv[]) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);

  httplib::Server svr;
  svr.Get("/", [](const httplib::Request &, httplib::Response &res) {
    LOG(INFO) << "got a request";
    res.set_content("Hello World!\n", "text/plain");
  });

  LOG(INFO) << "serving on host " << FLAGS_host << ", port " << FLAGS_port;
  svr.listen(FLAGS_host.c_str(), FLAGS_port);
}
