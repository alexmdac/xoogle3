#include "examples/hello/hello.h"

#include "gtest/gtest.h"

TEST(GetGreetingTest, ReturnsGreeting) {
  EXPECT_EQ(GetGreeting("world"), "hello, world");
  EXPECT_EQ(GetGreeting("c++"), "hello, c++");
}

TEST(GetGreetingJsonTest, ReturnsGreeting) {
  EXPECT_EQ(GetGreetingJson("world"), R"({"greeting":"hello, world"})");
  EXPECT_EQ(GetGreetingJson("c++"), R"({"greeting":"hello, c++"})");
}
