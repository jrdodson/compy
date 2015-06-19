#
# Makefile for compy
# Dodson, Wolfrath 2015
#

CC= g++
CFLAGS= -c -g -Wall -I include/

SOURCES= $(shell find * -type f -name '*.cpp')
OBJECTS= $(SOURCES:.cpp=.o)

OUTPUT= main

LIBS=

# Are we compiling on a mac?

UNAME= $(shell uname)

ifeq ($(UNAME), "Darwin")
LIBS=
endif

all: $(CSOURCES) $(CPPSOURCES) $(OUTPUT)
	@echo "Done."

$(OUTPUT): $(OBJECTS)
	@echo "LD $@"
	@$(CC) $(OBJECTS) -o $@ $(LIBS)

.c.o:
	@echo "CC $<"
	@gcc $(CFLAGS) $< -o $@
	
.cpp.o:
	@echo "CC $<"
	@$(CC) $(CFLAGS) $< -o $@

clean:
	@-rm -rf $(OBJECTS) $(OUTPUT)

love:
	@echo "Not war?"
