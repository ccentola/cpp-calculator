CXX := g++

SRC := $(wildcard src/*.cpp)
TESTS := $(wildcard test/*.cpp)
INCL_DIR := include/

TARGET_NAME := CPPCalculator
TARGET_NAME_TESTS := CPPCalculator-Test

$(TARGET_NAME):
	@mkdir build/
	@$(CXX) -I$(INCL_DIR) $(SRC) -o build/CPPCalculator

$(TARGET_NAME_TESTS):
	@mkdir build/test
	@$(CXX) $(TESTS) -o build/test/CPPCalculator-Test

all: $(TARGET_NAME) $(TARGET_NAME_TESTS)

clean:
	rm -rf -f build && rm -rf -f build/test