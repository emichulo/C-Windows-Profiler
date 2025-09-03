cmake_minimum_required(VERSION 4.1)
project(test)

add_executable(main main.cpp menu.cpp profile.cpp)

set_target_properties(main PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_CURRENT_BINARY_DIR}
  RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_CURRENT_BINARY_DIR}
)