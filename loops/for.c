#include <stdio.h>

int main() {
    for(int i = 0; i < 5; i++) {
        printf("%d,", i);
    }
    printf("\n");
    // output: 0,1,2,3,4,

    // Using comma operator
    for(int i = 0, j = 0; i < 5; i++, j = i * 10) {
        printf("i: %d, j: %d\n", i, j);
    }
    // output:
    // i: 0, j: 0
    // i: 1, j: 10
    // i: 2, j: 20
    // i: 3, j: 30
    // i: 4, j: 40
    //
    return 0;
}
