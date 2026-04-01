/**
 * Debug with conditional directives
 *
 * DEBUG is a standard convention used to enable or disable debugging-related blocks of code.
 *
 * Compile with debug: $ gcc -DDEBUG debug.c -o debug.out
 * Compile to release: $ gcc debug.c -o debug.out (DEBUG is omitted)
 */

#include <stdio.h>

int main() {
#ifdef DEBUG
    printf("> Debugging...\n");
#endif

    printf("Doing something important...\n");

    return (0);
}

// output (debug):
// > Debugging...
// Doing something important...
//
// output (release):
// Doing something important...
