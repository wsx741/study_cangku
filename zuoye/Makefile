CXX = g++
CXXFLAGS = -Wall -std=c++11
INCLUDES = -I./include
SRC_DIR = ./src
OBJ_DIR = ./obj
BIN_DIR = ./bin

# 查找所有源文件，但排除main_bread.cpp、main_discount.cpp和main_observer.cpp
SOURCES = $(filter-out $(SRC_DIR)/main_bread.cpp,$(filter-out $(SRC_DIR)/main_discount.cpp,$(filter-out $(SRC_DIR)/main_observer.cpp,$(wildcard $(SRC_DIR)/*.cpp))))
BREAD_SOURCES = $(filter-out $(SRC_DIR)/main.cpp,$(filter-out $(SRC_DIR)/calculator.cpp,$(filter-out $(SRC_DIR)/main_discount.cpp,$(filter-out $(SRC_DIR)/main_observer.cpp,$(wildcard $(SRC_DIR)/*.cpp)))))
DISCOUNT_SOURCES = $(filter-out $(SRC_DIR)/main.cpp,$(filter-out $(SRC_DIR)/main_bread.cpp,$(filter-out $(SRC_DIR)/calculator.cpp,$(filter-out $(SRC_DIR)/main_observer.cpp,$(wildcard $(SRC_DIR)/*.cpp)))))
OBSERVER_SOURCES = $(filter-out $(SRC_DIR)/main.cpp,$(filter-out $(SRC_DIR)/main_bread.cpp,$(filter-out $(SRC_DIR)/calculator.cpp,$(filter-out $(SRC_DIR)/main_discount.cpp,$(wildcard $(SRC_DIR)/*.cpp)))))
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SOURCES))
BREAD_OBJECTS = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(BREAD_SOURCES))
DISCOUNT_OBJECTS = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(DISCOUNT_SOURCES))
OBSERVER_OBJECTS = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(OBSERVER_SOURCES))
TARGET = $(BIN_DIR)/calculator
BREAD_TARGET = $(BIN_DIR)/bread
DISCOUNT_TARGET = $(BIN_DIR)/discount
OBSERVER_TARGET = $(BIN_DIR)/observer

# 默认目标
all: $(TARGET) $(BREAD_TARGET) $(DISCOUNT_TARGET) $(OBSERVER_TARGET)

# 链接计算器程序
$(TARGET): $(OBJECTS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(OBJECTS) -o $@
	
# 链接面包测试程序
$(BREAD_TARGET): $(BREAD_OBJECTS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(BREAD_OBJECTS) -o $@

# 链接折扣系统程序
$(DISCOUNT_TARGET): $(DISCOUNT_OBJECTS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(DISCOUNT_OBJECTS) -o $@

# 链接观察者模式程序
$(OBSERVER_TARGET): $(OBSERVER_OBJECTS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(OBSERVER_OBJECTS) -o $@

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

# 运行折扣系统程序
run_discount: $(DISCOUNT_TARGET)
	$(DISCOUNT_TARGET)

# 运行观察者模式程序
run_observer: $(OBSERVER_TARGET)
	$(OBSERVER_TARGET)

.PHONY: all clean run run_bread run_discount run_observer