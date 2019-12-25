cmake_minimum_required(VERSION 3.15)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.8.0
)
FetchContent_MakeAvailable(googletest)

project(virtual-serial-port)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(GoogleTest)
add_executable(serial-tests tests/test_SerialPort.cpp)
gtest_discover_tests(serial-tests AUTO)

add_executable(virtual-serial-port source/SerialPort.h source/SerialPort.cpp)
