#include <math.h>  // All math.h library functions accept double type as an argument and return double as a result
#include <stdbool.h>
#include <stdio.h>

int main() {
    /***************************************************************************
     * Arithmetic & Assignment Operators
     **************************************************************************/

    int a = 15;
    int b = 4;

    int sum = a + b;         // Addition
    int difference = a - b;  // Subtraction
    int product = a * b;     // Multiplication
    int quotient = a / b;    // Division (Integer)
    int remainder = a % b;   // Modulo (Remainder)

    printf("Arithmetic Operators\n");
    printf("%d + %d = %d\n", a, b, sum);
    // output: 15 + 4 = 19

    printf("%d %% %d = %d (Remainder)\n\n", a, b, remainder);
    // output: 15 % 4 = 3 (Remainder)

    /***************************************************************************
     * Powers
     *
     * In C, there is no Operator that allows us to calculate powers (raising a number to another).
     * In C, to raise a number to another, we have to use the "pow" function defined in the <math.h> header file.
     **************************************************************************/

    printf("2^3 = %f\n", pow(2, 3));
    // output: 2^3 = 8.000000

    /***************************************************************************
     * Increment and Decrement Operators
     **************************************************************************/

    int c = 10;
    printf("Increment and Decrement Operators\n");

    printf("Post-increment (c++): %d\n", c++);
    // output: Post-increment (c++): 10 (Returns value, then increments)

    printf("Pre-decrement (--c): %d\n\n", --c);
    // output: Pre-decrement (--c): 10 (Decrements, then returns value)

    /***************************************************************************
     * Relational & Logical Operators
     **************************************************************************/

    bool is_sunny = true;  // true = 1
    bool is_warm = false;  // false = 0

    printf("Relational and Logical Operators\n");
    printf("%d == %d is %d\n", a, b, a == b);  // Equal to
    // output: 15 == 4 is 0

    printf("%d != %d is %d\n", a, b, a != b);  // Not equal to
    // output: 15 != 4 is 1

    printf("Sunny AND Warm: %d\n", is_sunny && is_warm);  // Logical AND
    // output: Sunny AND Warm: 0

    printf("NOT Sunny:      %d\n\n", !is_sunny);  // Logical NOT
    // output: NOT Sunny:      0

    /***************************************************************************
     * Compound Assignment Operators
     **************************************************************************/

    int d = 10;
    printf("Compound Assignment Operators\n");

    d += 5;  // Equivalent to: d = d + 5
    printf("d += 5: %d\n", d);
    // output: d += 5: 15

    d *= 2;  // Equivalent to: d = d * 2
    printf("d *= 2: %d\n\n", d);
    // output: d *= 2: 30

    /***************************************************************************
     * Conditional (Ternary) Operator
     **************************************************************************/

    int max = (a > b) ? a : b;
    printf("Conditional (Ternary) Operator\n");
    printf("Max of %d and %d is %d\n\n", a, b, max);
    // output: Max of 15 and 4 is 15

    /***************************************************************************
     * Bitwise Operators (Low-level)
     **************************************************************************/

    int x = 5;  // Binary: 0101
    int y = 3;  // Binary: 0011

    printf("Bitwise Operators\n");
    printf("%d & %d = %d (AND)\n", x, y, x & y);     // output: 5 & 3 = 1
    printf("%d | %d = %d (OR)\n", x, y, x | y);      // output: 5 | 3 = 7
    printf("%d ^ %d = %d (XOR)\n", x, y, x ^ y);     // output: 5 ^ 3 = 6
    printf("~%d = %d (NOT/Complement)\n\n", x, ~x);  // output: ~5 = -6

    /***************************************************************************
     * Compound Bitwise Assignment Operators
     *
     * gcc adds support for %b and %B format specifiers to print integers in binary
     **************************************************************************/

    int e = 1;
    printf("Compound Bitwise Assignment\n");
    printf("e = %04b\n", e);  // output: e = 0001

    e <<= 2;  // Left shift
    printf("Result of e after left shift: %04b\n", e);
    // ouput: Result of e after left shift: 0100

    e >>= 2;  // Right shift
    printf("Result of e after left shift: %04b\n", e);
    // ouput: Result of e after left shift: 0001

    e |= 2;  // Bitwise OR
    printf("Result of e after OR: %04b\n", e);
    // ouput: Result of e after OR: 0011

    e ^= 1;  // Bitwise XOR
    printf("Result of e after XOR: %04b\n\n", e);
    // output: Result of e after XOR:

    /***************************************************************************
     * Sizeof Operator (Crucial for Memory)
     **************************************************************************/

    printf("Sizeof Operator\n");
    printf("Size of int: %zu bytes\n", sizeof(int));
    // output: Size of int: 4 bytes (Size may vary by system)

    printf("Size of double: %zu bytes\n\n", sizeof(double));
    // output: Size of double: 8 bytes

    /***************************************************************************
     * Comma Operator
     *
     * Comma operator: It allows placing different expressions within the same instruction.
     **************************************************************************/

    int result = (a = 20, b = 10, a + b);
    printf("Result of comma operator: %d\n", result);
    // output: Result of comma operator: 30

    return 0;
}
