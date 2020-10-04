# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.hello_world_message_box2.Debug:
/Users/yves/Projects/Examples/Examples_SDL2/build/hello_worlds/hello_world_message_box2/Debug/hello_world_message_box2.app/Contents/MacOS/hello_world_message_box2:
	/bin/rm -f /Users/yves/Projects/Examples/Examples_SDL2/build/hello_worlds/hello_world_message_box2/Debug/hello_world_message_box2.app/Contents/MacOS/hello_world_message_box2


PostBuild.hello_world_message_box2.Release:
/Users/yves/Projects/Examples/Examples_SDL2/build/hello_worlds/hello_world_message_box2/Release/hello_world_message_box2.app/Contents/MacOS/hello_world_message_box2:
	/bin/rm -f /Users/yves/Projects/Examples/Examples_SDL2/build/hello_worlds/hello_world_message_box2/Release/hello_world_message_box2.app/Contents/MacOS/hello_world_message_box2


PostBuild.hello_world_message_box2.MinSizeRel:
/Users/yves/Projects/Examples/Examples_SDL2/build/hello_worlds/hello_world_message_box2/MinSizeRel/hello_world_message_box2.app/Contents/MacOS/hello_world_message_box2:
	/bin/rm -f /Users/yves/Projects/Examples/Examples_SDL2/build/hello_worlds/hello_world_message_box2/MinSizeRel/hello_world_message_box2.app/Contents/MacOS/hello_world_message_box2


PostBuild.hello_world_message_box2.RelWithDebInfo:
/Users/yves/Projects/Examples/Examples_SDL2/build/hello_worlds/hello_world_message_box2/RelWithDebInfo/hello_world_message_box2.app/Contents/MacOS/hello_world_message_box2:
	/bin/rm -f /Users/yves/Projects/Examples/Examples_SDL2/build/hello_worlds/hello_world_message_box2/RelWithDebInfo/hello_world_message_box2.app/Contents/MacOS/hello_world_message_box2




# For each target create a dummy ruleso the target does not have to exist
