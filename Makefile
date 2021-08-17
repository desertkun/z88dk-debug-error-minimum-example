SOURCES := $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)

JUST_PRINT := $(findstring n,$(MAKEFLAGS))
ifneq (,$(JUST_PRINT))
CC = gcc
else
CC = zcc
CFLAGS = +zx -debug
EXAMPLE_FLAGS = -m -s -zorg=0 -create-app
endif

all: example__.bin

example__.bin: $(OBJECTS)
	$(CC) $(CFLAGS) $(EXAMPLE_FLAGS) -o example $(OBJECTS) -subtype=bin

clean:
	@rm -rf *.o
	@rm -rf *.map
	@rm -rf *.bin
	@rm -rf *.asm
	@rm -rf *.sym
	@rm -rf example

.PHONY: clean

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<


