# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.hello_world_message_box.Debug:
/Users/yves/Projects/Examples/Examples_SDL2/build/hello_worlds/hello_world_message_box/Debug/hello_world_message_box.app/Contents/MacOS/hello_world_message_box:\
	/usr/local/lib/libSDL2_ttf.dylib\
	/usr/local/lib/libSDL2_ttf.dylib
	/bin/rm -f /Users/yves/Projects/Examples/Examples_SDL2/build/hello_worlds/hello_world_message_box/Debug/hello_world_message_box.app/Contents/MacOS/hello_world_message_box


PostBuild.hello_world_message_box.Release:
/Users/yves/Projects/Examples/Examples_SDL2/build/hello_worlds/hello_world_message_box/Release/hello_world_message_box.app/Contents/MacOS/hello_world_message_box:\
	/usr/local/lib/libSDL2_ttf.dylib\
	/usr/local/lib/libSDL2_ttf.dylib
	/bin/rm -f /Users/yves/Projects/Examples/Examples_SDL2/build/hello_worlds/hello_world_message_box/Release/hello_world_message_box.app/Contents/MacOS/hello_world_message_box


PostBuild.hello_world_message_box.MinSizeRel:
/Users/yves/Projects/Examples/Examples_SDL2/build/hello_worlds/hello_world_message_box/MinSizeRel/hello_world_message_box.app/Contents/MacOS/hello_world_message_box:\
	/usr/local/lib/libSDL2_ttf.dylib\
	/usr/local/lib/libSDL2_ttf.dylib
	/bin/rm -f /Users/yves/Projects/Examples/Examples_SDL2/build/hello_worlds/hello_world_message_box/MinSizeRel/hello_world_message_box.app/Contents/MacOS/hello_world_message_box


PostBuild.hello_world_message_box.RelWithDebInfo:
/Users/yves/Projects/Examples/Examples_SDL2/build/hello_worlds/hello_world_message_box/RelWithDebInfo/hello_world_message_box.app/Contents/MacOS/hello_world_message_box:\
	/usr/local/lib/libSDL2_ttf.dylib\
	/usr/local/lib/libSDL2_ttf.dylib
	/bin/rm -f /Users/yves/Projects/Examples/Examples_SDL2/build/hello_worlds/hello_world_message_box/RelWithDebInfo/hello_world_message_box.app/Contents/MacOS/hello_world_message_box




# For each target create a dummy ruleso the target does not have to exist
/usr/local/lib/libSDL2_ttf.dylib:
