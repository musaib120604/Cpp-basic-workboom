CXX      ?= g++
CXXFLAGS ?= -std=c++17 -Wall -Wextra

SOURCES := $(wildcard src/*.cpp)
BINARIES := $(patsubst src/%.cpp,build/%,$(SOURCES))

.PHONY: all clean list
.SECONDARY:

all: $(BINARIES)

build:
	mkdir -p build

build/%: src/%.cpp | build
	$(CXX) $(CXXFLAGS) $< -o $@

# make run-<file name without .cpp>, e.g.  make run-01_hello_output
run-%: build/%
	./$<

list:
	@ls src | sed 's/\.cpp$$//'

clean:
	rm -rf build
