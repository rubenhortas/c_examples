#include <stdio.h>

int main() {
    int lotto_numbers[] = { 4, 8, 15, 16, 23, 41 }; // Array with known values
    int chosen_numbers[5]; // Array with unknown values

    printf("First number: '%d'\n", lotto_numbers[0]); // Arrays are initialized to 0
    // return: First number: '4'

    printf("Last number: '%d'\n", lotto_numbers[5]);
    // return: Last number: '41'

    lotto_numbers[5] = 42;
    printf("Last number (fixed): '%d'\n", lotto_numbers[5]);
    // return: Last number (fixed): '42'

    // Assign values to the array
    for(int i = 0; i<5; i++) {
        chosen_numbers[i] = i*2;
    }

    printf("Chosen numbers: ");

    for(int i=0; i<5; i++) {
        printf("%d,", chosen_numbers[i]);
    }
    // return: Chosen numbers: ....

    printf("\n");
    return 0;
}

