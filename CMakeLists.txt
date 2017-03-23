cmake_minimum_required(VERSION 3.7)
project(uninitialized)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp 1.cpp 2.cpp 3.cpp 4.cpp 5.cpp 6.cpp 7.cpp 8.cpp 9.cpp)
add_executable(uninitialized ${SOURCE_FILES})
target_compile_options(uninitialized PRIVATE "-Wall" "-Wextra")