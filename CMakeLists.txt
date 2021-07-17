cmake_minimum_required(VERSION 3.16)

# Project name in the top-level CMakeLists
set(This Example)

project(${This} C CXX)

# C/CPP standards
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON) # useful for mixed libraries

enable_testing()

# dependencies
add_subdirectory(googletest)

set(Headers
  Example.hpp
)

set(Sources
  Example.cpp
)

# When running googletest, Google Test gonna be the main program and the code
# will be pulled as a library
add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(tests)
