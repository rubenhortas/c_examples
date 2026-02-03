#include <stdio.h>

int main() {
    /************
     * 1D array
     ***********/

    int lotto_numbers[] = {4, 8, 15, 16, 23, 41}; // Array with known values
    int chosen_numbers[5];                        // Array with unknown values

    printf("First number: '%d'\n",
           lotto_numbers[0]); // Arrays are initialized to 0
    // return: First number: '4'

    printf("Last number: '%d'\n", lotto_numbers[5]);
    // return: Last number: '41'

    lotto_numbers[5] = 42;
    printf("Last number (fixed): '%d'\n", lotto_numbers[5]);
    // return: Last number (fixed): '42'

    // Assign values to the array
    for (int i = 0; i < 5; i++) {
        chosen_numbers[i] = i * 2;
    }

    printf("Chosen numbers: ");

    for (int i = 0; i < 5; i++) {
        printf("%d,", chosen_numbers[i]);
    }
    // return: Chosen numbers: ....

    printf("\n\n");

    /************
     * 2D array
     ***********/

    // array[rows][cols]
    int array_2d[2][2] = {{11, 12}, {21, 22}};

    printf("2D array:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", array_2d[i][j]);
        }

        printf("\n");
    }
    /**
     * return:
     * 2D array:
     * 11 12
     * 21 22
     */

    printf("\n");

    /************
     * 3D array
     ***********/

    // array[x][rows][cols];
    int array_3d[2][3][2] = {{{111, 112}, {121, 122}, {131, 132}},
                             {{211, 212}, {221, 222}, {231, 232}}};

    printf("3D array:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", array_3d[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    /**
     * return:
     * 3D array:
     * 111 112
     * 121 122
     * 131 132
     *
     * 211 212
     * 221 222
     * 231 232
     */

    return 0;
}
