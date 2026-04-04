/***************************************************************************
 * Sizeof operator is crucial for memory
 **************************************************************************/

#include <stdio.h>

int main() {
    printf("Sizeof operator:\n\n");
    printf("Size of int: %zu bytes\n", sizeof(int));        // output: Size of int: 4 bytes (Size may vary by system)
    printf("Size of double: %zu bytes\n", sizeof(double));  // output: Size of double: 8 bytes

    return 0;
}
