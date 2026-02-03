#include <stdio.h>

int max(int num1, int num2);

int main() {
    int num1 = 2;
    int num2 = 64;

    printf("Max (%d, %d): %d\n", num1, num2, max(num1, num2));
    // output: Max (2, 64): 64

    return 0;
}

int max(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}
