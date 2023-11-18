#!/usr/bin/make

# Extensions can be set here.
CXX_EXTENSION = cc
# Some use .h
HEADER_EXTENSION = hh
INTERNAL_HEADER_EXTENSION = ih
PCH_EXTENSION = ih.gch

## No editing below this line unless you know what you're doing. ##

# The '@' suppresses echoing of a command.
# So to see the executed commands:
# make VERBOSE=yes
# or set VERBOSE=yes in the environment
ifeq ($(VERBOSE),yes)
    QUIET ?=
else
    QUIET ?= @
endif


# Recursive wildcard to find all files in the current directory and subdirs.
# Using a $(shell find...) would also work, but depend on the find utility.
rwildcard=$(foreach d,$(wildcard $(1:=/*)),$(call rwildcard,$d,$2) $(filter $(subst *,%,$2),$d))

# Simply list all files we can find.
ALL_FILES := $(patsubst ./%,%,$(call rwildcard,.,*))

# Anything with a CXX_EXTENSION is a C++ file.
SOURCES = $(filter %.$(CXX_EXTENSION),$(ALL_FILES))
# Get object names by replacing the extension.
OBJECTS = $(patsubst %.$(CXX_EXTENSION),%.o,$(SOURCES))

# To detect a main() function in a source file.
# Not bulletproof, but KISS.
MAIN_REGEX = int[[:space:]]+main[[:space:]]*\(

# Anything that mentions a main function is a program source.
PROG_SOURCES := $(shell grep -El '$(MAIN_REGEX)' $(SOURCES))
PROG_OBJECTS = $(patsubst %.$(CXX_EXTENSION),%.o,$(PROG_SOURCES))
PROGS = $(patsubst %.$(CXX_EXTENSION),%,$(PROG_SOURCES))
TESTPROGS = $(filter tests/%,$(PROGS))

# Sources that aren't program sources, are non-program sources.
NONPROG_SOURCES = $(filter-out $(PROG_SOURCES),$(SOURCES))
NONPROG_OBJECTS = $(patsubst %.$(CXX_EXTENSION),%.o,$(NONPROG_SOURCES))

# From every internal header we can build a precompiled (internal) header.
INTERNAL_HEADERS = $(filter %.$(INTERNAL_HEADER_EXTENSION),$(ALL_FILES))

PRECOMPILED_HEADERS = $(patsubst %,%.gch,$(INTERNAL_HEADERS))

# The name of our convenience library.
CONVLIB = libproj.a
# Always link against the convenience library.
LDFLAGS += -L. -lproj

###

# Default target: to make all programs.
all: $(PROGS)

# All programs need the convenience library.
$(PROGS): $(CONVLIB)

# To create an executable program is called: 'Linking'.
$(PROGS): ACTION = Linking
$(CONVLIB): ACTION = Gathering
$(OBJECTS): ACTION = Compiling
$(PRECOMPILED_HEADERS): ACTION = Pre-compiling

# When compiling a precompiled header, specify that it's a header.
$(PRECOMPILED_HEADERS): CXXFLAGS += -x c++-header

# A rule actually says two things:
# 1. To build any of the target, i.e. $(CONVLIB),
#    we need the prerequisites, i.e. $(NONPROG_OBJECTS)
# 2. If any of the preprequisites are newer than the target,
#    we need to rebuild the target.
$(CONVLIB): $(NONPROG_OBJECTS)
	@echo "    [ $(ACTION) $@ <- $^ ]"
	$(QUIET) ar rcs $@ $^
# In the recipe of the rule,
# $@ is the target, i.e. $(CONVLIB)
# $^ is the list of preprequisites, i.e. $(NONPROG_OBJECTS)

# Pattern rule:
# If any program object file is newer than the program itself,
# we rebuild the program, by linking the object file against the convenience library.
$(PROGS): %: %.o
	@echo "    [ $(ACTION) $@ <- $^ ]"
	$(QUIET) $(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $< $(LDFLAGS)

# If the source is newer than its object, we compile it.
$(OBJECTS): %.o: %.$(CXX_EXTENSION)
	@echo "    [ $(ACTION) $@ <- $< ]"
	$(QUIET) $(CXX) $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<

# To work without precompiled headers:
# make PCH=no
# or set PCH=no in the environment
ifneq ($(PCH),no)

    # Before compiling any of the objects, rebuild all precompiled headers.
    # (This is a waste when making only one object, but it keeps the Makefile simpler.)
    $(OBJECTS): %.o: $(PRECOMPILED_HEADERS)

    # Each internal header shall become a precompiled header.
    $(PRECOMPILED_HEADERS): %.$(PCH_EXTENSION): %.$(INTERNAL_HEADER_EXTENSION)
	@echo "    [ $(ACTION) $@ <- $< ]"
	$(QUIET) $(CXX) $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<

endif

# Clean everything except the programs.
mostlyclean:
	$(QUIET) rm -f $(DEP_FILES) $(PRECOMPILED_HEADERS) $(OBJECTS) $(CONVLIB)

# Remove everything Make created.
clean: mostlyclean
	$(QUIET) rm -f $(PROGS)

# Even if some jerk creates a file called: 'clean', 'make clean' keeps working.
.PHONY: clean mostlyclean test

# To work without generated dependencies:
# make DEP=no
# or set DEP=no in the environment
ifneq ($(DEP),no)

    # Use generated dependencies, for header include detection.
    DEPFLAGS = -fpch-deps -MQ $@ -MMD -MP -MF $<.dep
    CXXFLAGS += $(DEPFLAGS)

    # For cleanup and inclusion by Make.
    DEP_FILES = $(patsubst %,%.dep,$(SOURCES) $(INTERNAL_HEADERS))

    # Only include generated dependencies if actually found.
    -include $(DEP_FILES)

endif
