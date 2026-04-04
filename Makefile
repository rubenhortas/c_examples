# ==============================================================================
# COMPILER AND FLAGS
# ==============================================================================
CC = gcc
CFLAGS = -g -fsanitize=address -std=c23 -Os
BIN_DIR = bin

# ==============================================================================
# FILES AND DIRECTORIES
# ==============================================================================

# Find ALL .c files
# shell find is more robust than wildcard for recursion
ALL_SRCS = $(shell find . -name "*.c")

# Identify the specific files for the 'extern' example
EXTERN_DIR = ./storage_class_specifiers/extern
EXTERN_SRCS = $(EXTERN_DIR)/main.c $(EXTERN_DIR)/file_a.c

# Filter out the extern files from the general list
# This prevents the Makefile from trying to compile file_a.c individually
STANDALONE_SRCS = $(filter-out $(EXTERN_SRCS), $(ALL_SRCS))

# Define the output binaries
# Standalone files become bin/path/file.out
STANDALONE_BINS = $(patsubst ./%.c, $(BIN_DIR)/%.out, $(STANDALONE_SRCS))

# The extern project becomes one single binary
EXTERN_BIN = $(BIN_DIR)/storage_class_specifiers/extern/extern_demo.out

# ==============================================================================
# TARGETS
# ==============================================================================

# 'all' builds all executables
all: $(STANDALONE_BINS) $(EXTERN_BIN)

# Rule for all standalone files
$(BIN_DIR)/%.out: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ $<

# Specific rule for the linked 'extern' project
$(EXTERN_BIN): $(EXTERN_SRCS)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ $(EXTERN_SRCS)

clean:
	rm -rf $(BIN_DIR)

.PHONY: all clean
