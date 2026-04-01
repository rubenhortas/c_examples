/**
 * The most direct way to perform tests in C is using the assert(expression) macro.
 * If the expression is false (0), the program prints an error to stderr and aborts execution immediately.
 */

#include <assert.h>
#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    assert(sum(2, 2) == 4);
    assert(sum(-1, 1) == 0);

    printf("All test PASSED!\n");

    return 0;
}

// ouput (successful):
// All test PASSED!
//
// output (error):
// test: testing.c:15: main: Assertion `sum(-1, 1) == 8' failed.
// Aborted
