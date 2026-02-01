# ==============================================================================
# COMPILER AND FLAGS
# ==============================================================================
CC = gcc
#  -g: Debug info
#  -fsanitize=address: ASan. Detect common memmory access errors
#  -std=c11: Standard ISO/IEC 9899:2011
#  -Os: Optimize for size
CFLAGS = -g -fsanitize=address -std=c11 -Os

# ==============================================================================
# FILES AND DIRECTORIES
# ==============================================================================
# Get all .c files in the current directory
SRCS = $(wildcard *.c)
# Transform file list from 'file.c' to 'file' (the executable name)
BINS = $(SRCS:.c=)

# ==============================================================================
# TARGETS
# ==============================================================================

# 'all' will build every executable
all: $(BINS)

# Rule to build each executable from its .c file
# %: is a pattern rule. $@ is the target, $< is the dependency
%: %.c
	$(CC) $(CFLAGS) -o $@.out $<

# Clean up binaries
clean:
	rm -f $(BINS)

# Prevent issues if a file has the same name as a rule
.PHONY: all clean
