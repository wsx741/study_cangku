CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
INCLUDES = -I./include
SRC_DIR = ./src
BIN_DIR = ./bin
TARGET = $(BIN_DIR)/calculator

.PHONY: all clean mkdir

all: mkdir $(TARGET)

mkdir:
	mkdir -p $(BIN_DIR)

$(TARGET): $(SRC_DIR)/main.cpp $(SRC_DIR)/calculator.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) $^ -o $@

clean:
	rm -rf $(BIN_DIR)

run: all
	$(TARGET)