cc_binary(
    name = "http",
    srcs = ["main.cc"],
    deps = [
        "@com_github_gflags_gflags//:gflags",
        "@com_github_google_glog//:glog",
        "@com_github_yhirose_cpp_httplib//:httplib",
    ],
    linkopts = ["-lpthread"],
)
