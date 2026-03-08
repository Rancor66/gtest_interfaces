cmake_minimum_required(VERSION 3.20)
project(gtest_interfaces_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(interface_tests
    tests/interface_tests.cpp
)

target_include_directories(interface_tests PRIVATE include)
target_link_libraries(interface_tests PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(interface_tests)
