/**
 * static Declarations (static)
 *
 * The static keyword has two distinct meanings depending on where it is used:
 *
 * 1. Static at File Level (Internal Linkage)
 *
 * When used outside of a function, it limits the scope of the variable or function to that file only.
 * Other files cannot see it, even if they use extern.
 *
 * Purpose: Encapsulation and avoiding name conflicts between files.
 *
 * 2. Static Inside a Function (Block Scope)
 *
 * When used inside a function, the variable is initialized only once and retains its value between function calls.
 * It lives for the entire duration of the program.
 *
 * Purpose: To maintain state without using a global variable.
 */

#include <stdio.h>

// This variable cannot be accessed by other files using 'extern'.
// It's private to this translation unit.
static int file_private_id = 555;

void incrment() {
    // This variable is initialized only once when the program starts.
    // It does not get destroyed when the function ends.
    static int counter = 0;

    counter++;
    printf("This function has been called %d times\n", counter);
}

int main() {
    incrment();  // output: 1
    incrment();  // output: 2
    incrment();  // output: 3

    return 0;
}
