cmake_minimum_required(VERSION 3.1)

if (NOT CMAKE_MODULE_PATH)
  message(FATAL_ERROR "Use CMAKE_MODULE_PATH with your_project_path/cmake_modules value needed to find package SDL2_ttf")
endif()

# Solution
project(SDL2Examples)
add_subdirectory(applications)
add_subdirectory(hello_worlds)
