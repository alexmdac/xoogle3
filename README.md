# xoogle3

Bazel workspace for C++ with some batteries included.

* [absl](https://abseil.io/)
* [gflags](https://github.com/gflags/gflags/tree/v2.2.2)
* [googletest](https://github.com/google/googletest)
* [nlohmann/json](https://github.com/nlohmann/json/tree/v3.9.1)

When adding a new feature, add a test in `//examples` and run all
the tests there: `bazel test //examples/...`.
