# xoogle3

[Bazel](https://bazel.build/) workspace for C++ with some batteries included,
intended to help folks who would like to use C++ in programming assignments
(e.g. coursework, interviews).

## Libraries

* [absl](https://abseil.io/)
* [gflags](https://github.com/gflags/gflags/tree/v2.2.2)
* [googletest](https://github.com/google/googletest)
* [nlohmann/json](https://github.com/nlohmann/json/tree/v3.9.1)
* [yhirose/cpp-httplib](https://github.com/yhirose/cpp-httplib/tree/v0.8.6)

## Get started

```
$ bazel run //examples/hello -- --logtostderr
```

You can also use [dazel](https://github.com/nadirizr/dazel) to run the examples
in a container. The repo contains a `.bazelrc` file that will map port `8080`.
This is useful for testing network servers.

```
(shell a)$ pip install dazel
(shell a)$ dazel run //examples/http -- --logtostderr
```
```
(shell b)$ curl localhost:8080
```
