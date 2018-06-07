# fitimage

CXXFLAGS = -Wall
LDFLAGS  = -lCCfits

.PHONY: all clean run

run: all
	./src/fitimage

all:
	make -C src CXXFLAGS=$(CXXFLAGS) LDFLAGS=$(LDFLAGS)

clean:
	make -C src clean
