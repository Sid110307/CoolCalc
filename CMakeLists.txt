cmake_minimum_required(VERSION 3.20)
project(CoolCalc)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -Wno-unknown-pragmas")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(coolCalc ${PROJECT_SOURCE_DIR}/main.cpp)
