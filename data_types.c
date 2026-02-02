#include <stdio.h>
#include <stdbool.h>

int main() {
    const int five = 5; // A constant never changes its value

    int i = 40;
    double d = 3.6;
    float f = 1.3;
    char c = 'A';
    bool is_true = true;
    bool is_false = false;

    printf("five will always be %d\n", five);
    // return: five will always be 5

    printf("int: '%d'\n", i);
    // return: int: '40'

    printf("double: '%f'\n", d);
    // return: double: '3.600000'

    printf("float (formatted): '%.2f'\n", f); // Two decimal places
    // return: float (formatted): '1.30'

    printf("char: '%c'\n", c);
    // return: char: 'A'

    printf("is_true: %d\n", is_true);
    // return: is_true: 1

    printf("is_false: %d\n", is_false);
    // return: is_false: 0

    return 0;
}

