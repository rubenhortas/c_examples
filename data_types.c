#include <stdio.h>
#include <stdbool.h>

int main() {
    int i = 40;
    double d = 3.6;
    float f = 1.3;
    char c = 'A';
    bool is_even = true;

    printf("int: '%d'\n", i);
    // return: int: '40'

    printf("double: '%f'\n", d);
    // return: double: '3.600000'

    printf("float (formatted): '%.2f'\n", f); // Two decimal places
    // return: float (formatted): '1.30'

    printf("char: '%c'\n", c);
    // return: char: 'A'

    printf("is_even: %d\n", is_even);
    // return: is_even: 1

    return 0;
}

