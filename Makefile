# Define variables
CXX = g++
CXXFLAGS = -std=c++20
TARGET = test
SRC = contains_duplicate.cc

# Default target
all: $(TARGET)
	./$(TARGET)
	rm -f $(TARGET)

# Rule to build the executable
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Clean up the executable
clean:
	rm -f $(TARGET)
