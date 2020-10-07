cmake_minimum_required(VERSION 3.1)

# Project
project(hello_world_message_box)
#set(CMAKE_MODULE_PATH project_path/cmake_modules)

find_package(SDL2 REQUIRED)
if (NOT CMAKE_MODULE_PATH)
  message(FATAL_ERROR "Use CMAKE_MODULE_PATH with your_project_path/cmake_modules value needed to find package SDL2_ttf")
endif()
find_package(SDL2TTF REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS} ${SDL2TTF_INCLUDE_DIR})

set(SOURCES
  src/hello_world_message_box.cpp
)
source_group(src FILES ${SOURCES})

set(RESOURCES
  ../../resources/Cantarell-Regular.ttf
  ../../resources/SegoeUI.ttf
  ../../resources/SFNS.ttf
)
source_group(resources FILES ${RESOURCES})

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
if (MSVC)
  set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /ENTRY:mainCRTStartup")
endif()

foreach(RESOURCE ${RESOURCES})
  configure_file(${CMAKE_CURRENT_SOURCE_DIR}/${RESOURCE} ${CMAKE_CURRENT_BINARY_DIR}/${RESOURCE} COPYONLY)
  set_property(SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/${RESOURCE}" PROPERTY MACOSX_PACKAGE_LOCATION "Resources")
endforeach()

# Application properties
add_executable(${PROJECT_NAME} MACOSX_BUNDLE WIN32 ${SOURCES} ${RESOURCES})
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES} ${SDL2TTF_LIBRARY})
