cmake_minimum_required(VERSION 3.15)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG master
)
FetchContent_MakeAvailable(googletest)

project(virtual-serial-port)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

enable_testing()

include(GoogleTest)
add_executable(serial-tests tests/test_SerialPort.cpp source/SerialPort.h source/SerialPort.cpp)
target_link_libraries(serial-tests gtest gtest_main)
gtest_discover_tests(serial-tests AUTO)

add_executable(virtual-serial-port source/SerialPort.h source/SerialPort.cpp)
