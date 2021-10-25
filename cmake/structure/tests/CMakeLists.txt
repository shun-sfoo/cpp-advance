# Testing library
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)
# Adds googletest

enable_testing()

# Tests need to be added as executables first
add_executable(tdd_tests SoundexTest.cpp)

# I'm using C++11 in the test
target_compile_features(tdd_tests PRIVATE cxx_std_11)

# Should be linked to the main library, as well as the Catch2 testing library
target_link_libraries(tdd_tests PRIVATE modern_library gtest_main gmock_main)

include(GoogleTest)
gtest_discover_tests(tdd_tests)
