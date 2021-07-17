include_directories(${MyProject_SOURCE_DIR}/include)

file(GLOB SOURCES
  ../include/*.hpp
  *.cpp
)

add_library(Example Example.cpp)
add_executable(ExampleApp ${SOURCES})