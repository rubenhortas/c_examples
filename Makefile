# ==============================================================================
# COMPILER AND FLAGS
# ==============================================================================
CC = gcc
# -g: Debug info
# -fsanitize=address: ASan. Detect common memory access errors
# -std=c23: Standard ISO/IEC 9899:2024
# -Os: Optimize for size
CFLAGS = -g -fsanitize=address -std=c23 -Os

# ==============================================================================
# FILES AND DIRECTORIES
# ==============================================================================

# Output directory for Binaries
BIN_DIR = bin

# Find all .c files in the current directory and subdirectories
# shell find is more robust than wildcard for recursion
SRCS = $(shell find . -name "*.c")

# Transform 'dir/file.c' into 'bin/dir/file.out'
# This maintains the folder structure but within $(BIN_DIR)
BINS = $(patsubst ./%.c, $(BIN_DIR)/%.out, $(SRCS))

# =================================================================================
# TARGETS
# ====================================================================================

# 'all' builds all executables
all: $(BINS)

# Rule to build each executable
# $(BIN_DIR)/%.out: The target
# %.c: The dependency
$(BIN_DIR)/%.out: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ $<

# Clean binaries and the output directory
clean:
	rm -rf $(BIN_DIR)

.PHONY: all clean
