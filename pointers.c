#include <stdio.h>
#include <stdlib.h>

/**
 * A pointer is a variable that stores the memory address of another variable.
 *
 * Operators:
 *  '*' Dereferencing pointer
 *  '&' Address operator
 *
 * Size of pointers:
 *  32bit system: 4 bytes
 *  64bit system: 8 bytes
 */

int do_something(int v);

int main() {
    int var = 10;

    int *ptr = &var;   // Pointer to an integer
    int *nptr = NULL;  // NULL pointer: Points to nothing (safe to check)
    void *vptr = NULL; // Void pointer
                       // Generic type, must be cast before dereferencing
    int *wptr = NULL;  // It contains a garbage value and points to an arbitrary
                       // memory location.

    printf("var address: '%p'\n", ptr);
    // output: var address: '0x7ffc53a53954'

    printf("Size of ptr: %zu bytes\n", sizeof(ptr));
    // output: Size of ptr: 8 bytes

    // Dereferencing pointer to access the value
    printf("Value of ptr: '%d'\n", *ptr);
    // output: Value of ptr: '10'

    /***************************************************************************
     * Dangling pointers
     *
     * A dangling pointer points to a memory address that has been deallocated.
     **************************************************************************/

    int *dptr = malloc(sizeof(int));

    free(dptr); // Memory is released
    // dptr is now a dangling pointer

    dptr = NULL; // Reset to NULL to avoid dangling access

    /***************************************************************************
     * Function pointers
     *
     * Variables that store the address of a function, allowing for dynamic
     * function calls and callbacks.
     **************************************************************************/

    // & is optional when assigning functions to pointers
    int (*fptr)(int) = do_something;

    printf("do_something result: '%d'\n", fptr(100));
    // output: do_something result: '0'

    /***************************************************************************
     * Multilevel pointers (Pointer to pointers)
     **************************************************************************/

    int *mlp1 = &var;
    int **mlp2 = &mlp1; // pointer to pointer

    printf("var: '%d'\n", var);
    // output: var: '10'

    printf("*mlp1: '%d'\n", *mlp1);
    // output: *mlp1: '10'

    printf("**mlp2: '%d'\n", **mlp2);
    // output: **mlp2: '10'

    return 0;
}

int do_something(int v) {
    (void)v; // Avoid "unused parameter" warning
    return 0;
}
