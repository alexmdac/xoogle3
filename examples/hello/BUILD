load("@rules_cc//cc:defs.bzl", "cc_test")

cc_library(
    name = "hello_lib",
    srcs = ["hello.cc"],
    hdrs = ["hello.h"],
    deps = [
        "@com_google_absl//absl/strings",
        "@com_github_nlohmann_json//:json",
    ],
)

cc_test(
  name = "hello_test",
  size = "small",
  srcs = ["hello_test.cc"],
  deps = [
      ":hello_lib",
      "@com_google_googletest//:gtest_main",
  ],
)

cc_binary(
    name = "hello",
    srcs = ["main.cc"],
    deps = [
        ":hello_lib",
        "@com_github_gflags_gflags//:gflags",
        "@com_github_google_glog//:glog",
    ],
)
