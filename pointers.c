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
    int *ptr = &var;  // Pointer to an integer
    int *nptr = NULL; // null pointer. It does not point to any memory location.
    void *vptr; // void pointer. It can point to any type and can be casted
                // to any type.
    int *wptr;  // wild pointer. It has not been initialized with something yet

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
     * A daingling pointer points to a memory address that has ben released.
     **************************************************************************/

    int *dptr = (int *)malloc(sizeof(int));

    free(dptr); // Memory release
    // dptr is now a dangling pointer

    dptr = NULL; // Removing dangling pointer

    /***************************************************************************
     * Function pointers
     *
     * Pointers that stores the address of a function, allowing functions to be
     * passed as arguments and invoked dynamically.
     **************************************************************************/

    int (*fptr)(int) = &do_something;

    printf("do_something result: '%d'\n", fptr(100));
    // output: do_something result: '0'

    /***************************************************************************
     * Multilevel pointers
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

int do_something(int v) { return 0; }
