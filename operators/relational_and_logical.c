#include <stdbool.h>
#include <stdio.h>

int main() {
    int x = 15;
    int y = 4;
    bool is_sunny = true;  // true = 1
    bool is_warm = false;  // false = 0

    printf("Relational and Logical operators:\n\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("x == y is %d\n", x == y);  // Equal to, output: 15 == 4 is 0
    printf("x != y is %d\n", x != y);  // Not equal to, output: 15 != 4 is 1

    printf("It's sunny: %d\n", is_sunny);                 // It's sunny: 1
    printf("It's warm: %d\n", is_warm);                   // It's warm: 0
    printf("Sunny AND Warm: %d\n", is_sunny && is_warm);  // Logical AND, output: Sunny AND Warm: 0
    printf("NOT Sunny:      %d\n", !is_sunny);            // Logical NOT, output: NOT Sunny:      0

    return 0;
}
