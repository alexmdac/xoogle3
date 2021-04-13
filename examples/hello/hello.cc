#include "absl/strings/str_cat.h"
#include "examples/hello/hello.h"
#include "nlohmann/json.hpp"

std::string GetGreeting(const std::string& whom) {
  return absl::StrCat("hello, ", whom);
}

std::string GetGreetingJson(const std::string& whom) {
  nlohmann::json j;
  j["greeting"] = GetGreeting(whom);
  return j.dump();
}
