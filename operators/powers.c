/***************************************************************************
 * Powers
 *
 * In C, there is no Operator that allows us to calculate powers (raising a number to another).
 * In C, to raise a number to another, we have to use the "pow" function defined in the <math.h> header file.
 **************************************************************************/

#include <math.h>  // All math.h library functions accept double type as an argument and return double as a result
#include <stdio.h>

int main() {
    printf("Powers:\n\n");
    printf("2^3 = %f\n", pow(2, 3));  // output: 2^3 = 8.000000

    return 0;
}
