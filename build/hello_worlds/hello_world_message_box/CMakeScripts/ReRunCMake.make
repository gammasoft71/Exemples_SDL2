# Generated by CMake, DO NOT EDIT

TARGETS:= 
empty:= 
space:= $(empty) $(empty)
spaceplus:= $(empty)\ $(empty)

TARGETS += $(subst $(space),$(spaceplus),$(wildcard /Applications/CMake.app/Contents/share/cmake-3.18/Modules/FindPackageHandleStandardArgs.cmake))
TARGETS += $(subst $(space),$(spaceplus),$(wildcard /Applications/CMake.app/Contents/share/cmake-3.18/Modules/FindPackageMessage.cmake))
TARGETS += $(subst $(space),$(spaceplus),$(wildcard /Users/yves/Projects/Examples/Examples_SDL2/cmake_modules/FindSDL2TTF.cmake))
TARGETS += $(subst $(space),$(spaceplus),$(wildcard /Users/yves/Projects/Examples/Examples_SDL2/hello_worlds/hello_world_message_box/CMakeLists.txt))
TARGETS += $(subst $(space),$(spaceplus),$(wildcard /usr/local/lib/cmake/SDL2/sdl2-config-version.cmake))
TARGETS += $(subst $(space),$(spaceplus),$(wildcard /usr/local/lib/cmake/SDL2/sdl2-config.cmake))

/Users/yves/Projects/Examples/Examples_SDL2/build/CMakeFiles/cmake.check_cache: $(TARGETS)
	/Applications/CMake.app/Contents/bin/cmake -H/Users/yves/Projects/Examples/Examples_SDL2 -B/Users/yves/Projects/Examples/Examples_SDL2/build
