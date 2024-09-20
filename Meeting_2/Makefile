# Makefile for the Payslip program

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++11

# Source file
SRC = payslip.cpp

# Output executable name
OUTPUT = payslip

# Default target
all: $(OUTPUT)

# Rule to compile the source file into an executable
$(OUTPUT): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(OUTPUT) $(SRC)

# Clean up the generated files
clean:
	rm -f $(OUTPUT)

