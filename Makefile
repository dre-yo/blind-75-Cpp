# Define variables
CXX = g++
CXXFLAGS = -std=c++20
TARGET = $(basename $(SRC))
SRC = $(file).cc

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

# Phony target to avoid confusion with files named 'file'
.PHONY: all clean
