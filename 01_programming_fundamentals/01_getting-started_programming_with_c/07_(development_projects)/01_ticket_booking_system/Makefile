# Compiler
CC = gcc

# Compilation flags
CFLAGS = -Wall -Iinclude -g

# Directories
SRC_DIR = src
MAIN_DIR = main

# Source files
SRCS = $(MAIN_DIR)/index.c $(SRC_DIR)/available_seats.c $(SRC_DIR)/ticket.c

# Name of the output executable
TARGET = run.exe

# Main rule to build the program
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

# Clean up compiled files
.PHONY: clean
clean:
	rm -f $(TARGET)
