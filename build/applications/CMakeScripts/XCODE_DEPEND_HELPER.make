# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.application.Debug:
/Users/yves/Projects/Examples/Examples_SDL2/build/applications/application/Debug/application.app/Contents/MacOS/application:
	/bin/rm -f /Users/yves/Projects/Examples/Examples_SDL2/build/applications/application/Debug/application.app/Contents/MacOS/application


PostBuild.application.Release:
/Users/yves/Projects/Examples/Examples_SDL2/build/applications/application/Release/application.app/Contents/MacOS/application:
	/bin/rm -f /Users/yves/Projects/Examples/Examples_SDL2/build/applications/application/Release/application.app/Contents/MacOS/application


PostBuild.application.MinSizeRel:
/Users/yves/Projects/Examples/Examples_SDL2/build/applications/application/MinSizeRel/application.app/Contents/MacOS/application:
	/bin/rm -f /Users/yves/Projects/Examples/Examples_SDL2/build/applications/application/MinSizeRel/application.app/Contents/MacOS/application


PostBuild.application.RelWithDebInfo:
/Users/yves/Projects/Examples/Examples_SDL2/build/applications/application/RelWithDebInfo/application.app/Contents/MacOS/application:
	/bin/rm -f /Users/yves/Projects/Examples/Examples_SDL2/build/applications/application/RelWithDebInfo/application.app/Contents/MacOS/application




# For each target create a dummy ruleso the target does not have to exist
