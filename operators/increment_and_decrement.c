#include <stdio.h>

int main() {
    int x = 10;
    printf("Increment and decrement operators:\n\n");
    printf("Post-increment (x++): %d\n", x++);   // Returns value, then increments, output: Post-increment (x++): 10
    printf("x = %d\n", x);                       // x incremented, output: x = 11 (x incremented)
    printf("Post-decrement  (x--): %d\n", x--);  // Return value, then decrements, output: Post-decrement (x--): 10
    printf("x = %d\n", x);                       // x decremented, output: x = 10
    printf("Pre-increment (++x): %d\n", ++x);    // Increments, then returns value, output: Pre-increment (++x): 11
    printf("Pre-decrement (--x): %d\n", --x);    // Decrements, then returns value,  output: Pre-decrement (--x): 10

    return 0;
}
