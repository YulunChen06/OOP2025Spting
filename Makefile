# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++11
OBJ_DIR = obj
SRC_DIR = src
INC_DIR = inc

# Sources
SRC = main.cpp $(SRC_DIR)/mat_gen.cpp
OBJ = $(OBJ_DIR)/main.o $(OBJ_DIR)/Cylinder.o 

# Output executable
OUTPUT = Lab7

# Default target
all: clean $(OUTPUT)

# Linking the object files to create the executable
$(OUTPUT): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(OUTPUT) $(OBJ)

# Compile main.cpp
$(OBJ_DIR)/main.o: main.cpp
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c main.cpp -o $(OBJ_DIR)/main.o

# Compile Cylinder.cpp
$(OBJ_DIR)/Cylinder.o: $(SRC_DIR)/Cylinder.cpp
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $(SRC_DIR)/Cylinder.cpp -o $(OBJ_DIR)/Cylinder.o

# Clean object files and executable, excluding checker.o
clean:
	rm -f obj/Cylinder.o obj/Cylinder.d obj/main.o obj/main.d

.PHONY: all clean