#include <stdio.h>

int main() {
    int lottoNumbers[] = { 4, 8, 15, 16, 23, 41 }; // Array with known values
    int chosenNumbers[5]; // Array with unknown values

    printf("First number: '%d'\n", lottoNumbers[0]); // Arrays are initialized to 0
    // return: First number: '4'

    printf("Last number: '%d'\n", lottoNumbers[5]);
    // return: Last number: '41'

    lottoNumbers[5] = 42;
    printf("Last number (fixed): '%d'\n", lottoNumbers[5]);
    // return: Last number (fixed): '42'

    // Assign values to the array
    for(int i = 0; i<5; i++) {
        chosenNumbers[i] = i*2;
    }

    printf("Chosen numbers: ");

    for(int i=0; i<5; i++) {
        printf("%d,", chosenNumbers[i]);
    }
    // return: Chosen numbers: ....

    printf("\n");
    return 0;
}

