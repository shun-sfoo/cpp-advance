cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(
  soundex
  LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)

FetchContent_MakeAvailable(googletest)

enable_testing()

# set(CTEST_OUTPUT_ON_FAILURE on)

add_executable(
  soundex_test
  soundex.h
  SoundexTest.cpp
)

target_link_libraries(
  soundex_test
  gtest_main
  gmock_main
)

include(GoogleTest)
gtest_discover_tests(soundex_test)
