cmake_minimum_required(VERSION 4.1)
project(test)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_executable(main main.cpp menu.cpp profile.cpp)