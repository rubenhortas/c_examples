#include <stdio.h>

int main() {
    int i = 0;

    while(i < 5) {
        printf("%d,", i);
        i++;
    }

    printf("\n");

    return 0;
}

// output: 0,1,2,3,4,
