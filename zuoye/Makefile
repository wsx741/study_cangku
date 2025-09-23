CXX = g++
CXXFLAGS = -Wall -std=c++11
INCLUDES = -I./include
SRC_DIR = ./src
OBJ_DIR = ./obj
BIN_DIR = ./bin

# 查找所有源文件，但排除main_bread.cpp
SOURCES = $(filter-out $(SRC_DIR)/main_bread.cpp,$(wildcard $(SRC_DIR)/*.cpp))
BREAD_SOURCES = $(filter-out $(SRC_DIR)/main.cpp,$(filter-out $(SRC_DIR)/calculator.cpp,$(wildcard $(SRC_DIR)/*.cpp)))
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SOURCES))
BREAD_OBJECTS = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(BREAD_SOURCES))
TARGET = $(BIN_DIR)/calculator
BREAD_TARGET = $(BIN_DIR)/bread

# 默认目标
all: $(TARGET) $(BREAD_TARGET)

# 链接计算器程序
$(TARGET): $(OBJECTS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(OBJECTS) -o $@
	
# 链接面包测试程序
$(BREAD_TARGET): $(BREAD_OBJECTS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(BREAD_OBJECTS) -o $@

# 编译源文件
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# 清理编译产物
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

# 运行计算器程序
run: $(TARGET)
	$(TARGET)

# 运行面包测试程序
run_bread: $(BREAD_TARGET)
	$(BREAD_TARGET)

.PHONY: all clean run run_bread