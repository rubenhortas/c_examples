/****************************************************************************************
 * Comma Operator
 *
 * Comma operator: It allows placing different expressions within the same instruction.
 ***************************************************************************************/

#include <stdio.h>

int main() {
    int x;
    int y;
    int result = (x = 20, y = 10, x + y);

    printf("Result of comma operator: %d\n", result);  // output: Result of comma operator: 30

    return 0;
}
