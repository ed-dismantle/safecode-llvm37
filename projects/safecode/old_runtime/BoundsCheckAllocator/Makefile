LEVEL = ../..
LIBRARYNAME=poolalloc_splay_rt

#
# Build shared libraries on all platforms except Cygwin and MingW (which do
# not support them).
#
ifneq ($(OS),Cygwin)
ifneq ($(OS),MingW)
SHARED_LIBRARY=1
endif
endif

CXXFLAGS += -fno-exceptions

include $(LEVEL)/Makefile.common

