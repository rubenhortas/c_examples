#include <stdio.h>

int global_counter = 100;  // Global variable with external linkage by default

void print_hello() {
    printf("Hello from file_a!\n");
}
