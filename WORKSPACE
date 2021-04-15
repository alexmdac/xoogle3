load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository", "new_git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# https://github.com/gflags/gflags/tree/v2.2.2
git_repository(
    name = "com_github_gflags_gflags",
    remote = "https://github.com/gflags/gflags.git",
    commit = "e171aa2d15ed9eb17054558e0b3a6a413bb01067",
    shallow_since = "1541971260 +0000",
)

# https://github.com/google/glog
http_archive(
    name = "com_github_google_glog",
    sha256 = "62efeb57ff70db9ea2129a16d0f908941e355d09d6d83c9f7b18557c0a7ab59e",
    strip_prefix = "glog-d516278b1cd33cd148e8989aec488b6049a4ca0b",
    urls = ["https://github.com/google/glog/archive/d516278b1cd33cd148e8989aec488b6049a4ca0b.zip"],
)

# https://abseil.io/
http_archive(
  name = "com_google_absl",
  urls = ["https://github.com/abseil/abseil-cpp/archive/98eb410c93ad059f9bba1bf43f5bb916fc92a5ea.zip"],
  strip_prefix = "abseil-cpp-98eb410c93ad059f9bba1bf43f5bb916fc92a5ea",
  sha256 = "aabf6c57e3834f8dc3873a927f37eaf69975d4b28117fc7427dfb1c661542a87",
)

# Needed for abseil
http_archive(
  name = "rules_cc",
  urls = ["https://github.com/bazelbuild/rules_cc/archive/262ebec3c2296296526740db4aefce68c80de7fa.zip"],
  strip_prefix = "rules_cc-262ebec3c2296296526740db4aefce68c80de7fa",
  sha256 = "9a446e9dd9c1bb180c86977a8dc1e9e659550ae732ae58bd2e8fd51e15b2c91d",
)

# https://github.com/google/googletest
http_archive(
  name = "com_google_googletest",
  urls = ["https://github.com/google/googletest/archive/011959aafddcd30611003de96cfd8d7a7685c700.zip"],
  strip_prefix = "googletest-011959aafddcd30611003de96cfd8d7a7685c700",
)

# https://github.com/google/benchmark/tree/v1.5.2
git_repository(
  name = "com_github_google_benchmark",
  remote = "https://github.com/google/benchmark.git",
  tag = "v1.5.2",
)

# https://github.com/nlohmann/json/tree/v3.9.1
NLOHMANN_JSON_BUILD_FILE_CONTENT = """
cc_library(
  name = "json",
  hdrs = ["single_include/nlohmann/json.hpp"],
  strip_include_prefix = "single_include/",
  visibility = ["//visibility:public"],
)
"""
new_git_repository(
  name = "com_github_nlohmann_json",
  remote = "https://github.com/nlohmann/json",
  commit = "db78ac1d7716f56fc9f1b030b715f872f93964e4",
  shallow_since = "1596714569 +0200",
  build_file_content = NLOHMANN_JSON_BUILD_FILE_CONTENT,
)

# https://github.com/yhirose/cpp-httplib/tree/v0.8.6
YHIROSE_CPP_HTTPLIB_BUILD_FILE_CONTENT = """
cc_library(
  name = "httplib",
  hdrs = ["httplib.h"],
  include_prefix = "yhirose/httplib",
  visibility = ["//visibility:public"],
)
"""
new_git_repository(
  name = "com_github_yhirose_cpp_httplib",
  remote = "https://github.com/yhirose/cpp-httplib",
  commit = "faa5f1d8023746a3da9f275c51867ded2a672ee9",
  shallow_since = "1617653621 -0400",
  build_file_content = YHIROSE_CPP_HTTPLIB_BUILD_FILE_CONTENT,
)
