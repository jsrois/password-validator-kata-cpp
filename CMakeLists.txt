cmake_minimum_required(VERSION 3.7)
project(password_kata)

set(CMAKE_CXX_STANDARD 14)

set(source_files
        src/Password.cpp src/Password.h)
set(test_files
        test/main.test.cpp
        test/password.test.cpp)

add_executable(unit_tests
        ${source_files}
        ${test_files})

target_include_directories(unit_tests PRIVATE
        src
        test)