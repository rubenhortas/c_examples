#include <stdio.h>

int main() {
    int x = 15;
    int y = 4;
    int sum = x + y;         // Addition
    int difference = x - y;  // Subtraction
    int product = x * y;     // Multiplication
    int quotient = x / y;    // Division (Integer)
    int remainder = x % y;   // Modulo (Remainder)

    printf("Arithmetic operators:\n\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("x + y = %d\n", sum);                     // output: x + y = 19
    printf("x %% y = %d (Remainder)\n", remainder);  // output: x % y = 3 (Remainder)

    return 0;
}
