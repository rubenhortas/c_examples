#include <stdio.h>

int main() {
    int x = 10;

    printf("Compound assignment operators:\n\n");
    printf("x = %d", x);

    x += 5;                     // Equivalent to: x = x + 5
    printf("x += 5: %d\n", x);  // output: x += 5: 15

    x *= 2;                     // Equivalent to: x = x * 2
    printf("x *= 2: %d\n", x);  // output: x *= 2: 30

    return 0;
}
