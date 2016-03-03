
LEVEL = ../../../..

BUILD_ARCHIVE := 1
LIBRARYNAME=addchecks
ifneq ($(OS),Cygwin)
ifneq ($(OS),MingW)
SHARED_LIBRARY := 1
LOADABLE_MODULE := 1
endif
endif


SOURCES = GEPChecks.cpp \
          CFIChecks.cpp \
          InvalidFreeChecks.cpp \
          RegisterBounds.cpp \
          RegisterRuntimeInitializer.cpp \
          RegisterStackObjPass.cpp \
          CompleteChecks.cpp \
          Terminate.cpp \
          #AlignmentChecks.cpp \
          #MonotonicLoopOpt.cpp \
          #ClearCheckAttributes.cpp \
          #insert.cpp

include $(LEVEL)/projects/safecode/Makefile.common

