/**
 * extern (external declarations):
 *
 *  The "extern" keyword is used to declare a variable or function that is defined in another source file.
 *  It tells the compiler: "This exists somewhere else, don't worry about it for now; the linker will find the actual
 *  address later"
 *
 *  Purpose: To share global variables or functions across multiple files.
 *
 *  Compile with: gcc main.c file_a.c -o extern_demo.out
 */

#include <stdio.h>

// "extern" tells the compiler "global_counter" is defined in another file.
// It does not allocate new memory, it refers to the existing one.
extern int global_counter;

// Functions are 'extern' by default, but you can explicitly declare them
extern void print_hello();

int main() {
    print_hello();
    printf("Counter value: %d\n", global_counter);  // Accesses file_a's variable
    return 0;
}
