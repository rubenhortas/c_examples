#include <stdio.h>

int main() {
    int x = 5;  // Binary: 0101
    int y = 3;  // Binary: 0011
    int z = 1;  // Binary: 0001

    /********************************************************************************
     * Bitwise Operators (Low-level)
     *******************************************************************************/

    printf("Bitwise operators:\n\n");
    printf("%d & %d = %d (AND)\n", x, y, x & y);     // output: 5 & 3 = 1
    printf("%d | %d = %d (OR)\n", x, y, x | y);      // output: 5 | 3 = 7
    printf("%d ^ %d = %d (XOR)\n", x, y, x ^ y);     // output: 5 ^ 3 = 6
    printf("~%d = %d (NOT/Complement)\n\n", x, ~x);  // output: ~5 = -6

    /********************************************************************************
     * Compound Bitwise Assignment Operators
     *
     * gcc adds support for %b and %B format specifiers to print integers in binary
     *******************************************************************************/

    printf("Compound bitwise assignment\n");
    printf("z = %04b\n", z);  // output: e = 0001

    z <<= 2;                                            // Left shift
    printf("Result of z after left shift: %04b\n", z);  // ouput: Result of z after left shift: 0100

    z >>= 2;                                            // Right shift
    printf("Result of z after left shift: %04b\n", z);  // ouput: Result of z after left shift: 0001

    z |= 2;                                     // Bitwise OR
    printf("Result of z after OR: %04b\n", z);  // ouput: Result of z after OR: 0011

    z ^= 1;                                      // Bitwise XOR
    printf("Result of z after XOR: %04b\n", z);  // output: Result of e after XOR:

    return 0;
}
