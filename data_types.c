#include <stdio.h>

int main() {
    int i = 40;
    double d = 3.6;
    float f = 1.3;
    char c = 'A';

    printf("int: '%d'\n", i);
    printf("double: '%f'\n", d);
    printf("float (formatted): '%.2f'\n", f); // Two decimal places
    printf("char: '%c'\n", c);

  return 0;
}
