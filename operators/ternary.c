#include <stdbool.h>
#include <stdio.h>

int main() {
    int x = 10;
    int y = 3;
    int max = (x > y) ? x : y;

    printf("Conditional (ternary) operator\n\n");
    printf("Max of %d (x) and %d (y) is %d\n", x, y, max);  // output: Max of 15 (x) and 4 (y) is 15

    return 0;
}
