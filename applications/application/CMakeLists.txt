cmake_minimum_required(VERSION 3.1)

# Project
project(application)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

set(SOURCES
  src/application.cpp
)
source_group(src FILES ${SOURCES})

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
if (MSVC)
  set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /ENTRY:mainCRTStartup")
endif()

# Application properties
add_executable(${PROJECT_NAME} MACOSX_BUNDLE WIN32 ${SOURCES})
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})
