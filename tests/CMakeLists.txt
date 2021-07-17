cmake_minimum_required(VERSION 3.16)

set(This ExampleTests)

set(Sources
  ExampleTests.cpp
)

add_executable(${This} ${Sources})

# adding the googletest dependency
target_link_libraries(${This} PUBLIC
  gtest_main # target provided by googletest
  Example
)

add_test(
  NAME ${This}
  COMMAND ${This}
)

