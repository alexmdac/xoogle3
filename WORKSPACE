load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository", "new_git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# https://github.com/gflags/gflags/tree/v2.2.2
git_repository(
    name = "com_github_gflags_gflags",
    remote = "https://github.com/gflags/gflags.git",
    tag = "v2.2.2"
)

# https://abseil.io/
http_archive(
  name = "com_google_absl",
  urls = ["https://github.com/abseil/abseil-cpp/archive/98eb410c93ad059f9bba1bf43f5bb916fc92a5ea.zip"],
  strip_prefix = "abseil-cpp-98eb410c93ad059f9bba1bf43f5bb916fc92a5ea",
)

# Needed for abseil
http_archive(
  name = "rules_cc",
  urls = ["https://github.com/bazelbuild/rules_cc/archive/262ebec3c2296296526740db4aefce68c80de7fa.zip"],
  strip_prefix = "rules_cc-262ebec3c2296296526740db4aefce68c80de7fa",
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
  tag = "v3.9.1",
  build_file_content = NLOHMANN_JSON_BUILD_FILE_CONTENT,
)
