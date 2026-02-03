#include <stdbool.h>
#include <stdio.h>

int main() {
    /***********************
     * Arithmetic operators
     ***********************/

    int a = 15;
    int b = 4;

    int sum = a + b;        // Addition
    int difference = a - b; // Subtraction
    int product = a * b;    // Multiplication
    int quotient = a / b;   // Division (Integer)
    int remainder = a % b;  // Modulo

    printf("Arithmetic Operators\n");
    printf("%d + %d = %d\n", a, b, sum);
    // output: 15 + 4 = 19

    printf("%d %% %d = %d (Remainder)\n\n", a, b, remainder);
    // output: 15 % 4 = 3 (Remainder)

    /***********************
     * Relational operators
     ***********************/

    printf("Relational Operators\n");
    printf("%d == %d is %d\n", a, b, a == b); // Equal to
    // output: 15 == 4 is 0

    printf("%d != %d is %d\n", a, b, a != b); // Not equal to
    // output:15 != 4 is 1

    printf("%d >  %d is %d\n", a, b, a > b); // Greater than
    // output: 15 >  4 is 1

    printf("%d <= %d is %d\n\n", a, b, a <= b); // Less than or equal to
    // output: 15 <= 4 is 0

    /********************
     * Logical operators
     ********************/

    bool is_sunny = true; // true = 1
    bool is_warm = false; // false = 0

    printf("Logical operators\n");
    printf("Sunny AND Warm: %d\n", is_sunny && is_warm);
    // output: Sunny AND Warm: 0

    printf("Sunny OR Warm:  %d\n", is_sunny || is_warm);
    // output: Sunny OR Warm:  1

    printf("NOT Sunny:      %d\n", !is_sunny);
    // output: NOT Sunny:      0

    return 0;
}
