SOURCES := $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)

all: example__.bin

example__.bin: $(OBJECTS)
	zcc +zx -m -debug -create-app -o example $(OBJECTS) -subtype=bin

clean:
	@rm -rf *.o
	@rm -rf *.map
	@rm -rf *.bin
	@rm -rf example

.PHONY: clean

%.o: %.c
	zcc +zx -debug -c -o $@ $<


