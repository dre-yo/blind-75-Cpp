# Define variables
CXX = clang++
CXXFLAGS = -std=c++20 -Iexternal/googletest/googletest/include
LDFLAGS = -pthread
BUILD_DIR = build/
TEST_TARGET = test_executable
SRC = solution/$(file).cc
TESTS = tests/$(file)_test.cc

# Create the build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Rule to build the test executable
$(BUILD_DIR)$(TEST_TARGET): $(TESTS) $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)$(TEST_TARGET) $(TESTS) external/googletest/build/lib/libgtest.a external/googletest/build/lib/libgtest_main.a $(LDFLAGS)

# Build target to compile the tests
all: $(BUILD_DIR)$(TEST_TARGET)

# Rule to run the tests
test: $(BUILD_DIR)$(TEST_TARGET)
	./$(BUILD_DIR)$(TEST_TARGET)

# Clean up the build directory
clean:
	rm -rf $(BUILD_DIR)

# Phony targets
.PHONY: all clean test
