#include <stdio.h>

#define ARRAY_LEN(a) (sizeof(a) / sizeof((a)[0]))

// C does not allow passing an entire array as an argument,
// it's necessary to pass a pointer to the array as an argument.
// C makes this operation easier by making the invocation of an array name
// generate a pointer to its first element.
void print_arr_int(const int *arr, size_t n) {
    for(size_t i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if(i + 1 < n)
            putchar(' ');  // Write a single character to stdout
    }

    putchar('\n');
}

void print_arr_char(const char *arr, size_t n) {
    for(size_t i = 0; i < n; i++) {
        printf("%c", arr[i]);
    }

    putchar('\n');
}

int main() {
    size_t arr_len = 0;

    /***************************************************************************
     * Array initialization
     **************************************************************************/

    int values[3] = {1, 2, 3};
    arr_len = ARRAY_LEN(values);
    print_arr_int(values, arr_len);  // passing a pointer to the array: print_arr_int(&values[0], arr_len)
    // output: 1 2 3

    // When an array is initialized with fewer numbers that it can hold,
    // most compilers will fill the remaining spaces with zeros.
    int values2[10] = {1, 2, 3, 4, 5};
    arr_len = ARRAY_LEN(values2);
    print_arr_int(values2, arr_len);
    // output: 1 2 3 4 5 0 0 0 0 0

    // When we initialize an array of characters, we must reserve space for one more element,
    // for the null character '\0', which indicates the end of the string.
    char chars[17] = "Programming in C";
    arr_len = ARRAY_LEN(chars);
    print_arr_char(chars, arr_len);
    // output: Programming in C

    /***************************************************************************
     * 1D array
     **************************************************************************/

    int lotto_numbers[] = {4, 8, 15, 16, 23, 41};  // Array with known values
    int your_numbers[5];                           // Array with unknown values

    printf("First number: '%d'\n",
           lotto_numbers[0]);  // Arrays are initialized to 0
    // output: First number: '4'

    printf("Last number: '%d'\n", lotto_numbers[5]);
    // output: Last number: '41'

    lotto_numbers[5] = 42;
    printf("Last number (fixed): '%d'\n", lotto_numbers[5]);
    // output: Last number (fixed): '42'

    // Assign values to the array
    for(int i = 0; i < 5; i++) {
        your_numbers[i] = i * 2;
    }

    printf("Your numbers: ");

    for(int i = 0; i < 5; i++) {
        printf("%d ", your_numbers[i]);
    }
    // output: Your numbers: your_numbers

    printf("\n\n");

    /***************************************************************************
     * 2D array
     **************************************************************************/

    // array[rows][cols]
    int array_2d[2][2] = {{11, 12}, {21, 22}};

    printf("2D array:\n");

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", array_2d[i][j]);
        }

        printf("\n");
    }
    // output:
    // 2D array:
    // 11 12
    // 21 22

    printf("\n");

    /***************************************************************************
     * 3D array
     **************************************************************************/

    // array[x][rows][cols];
    int array_3d[2][3][2] = {{{111, 112}, {121, 122}, {131, 132}}, {{211, 212}, {221, 222}, {231, 232}}};

    printf("3D array:\n");

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 2; k++) {
                printf("%d ", array_3d[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    // output:
    // 3D array:
    // 111 112
    // 121 122
    // 131 132
    //
    // 211 212
    // 221 222
    // 231 232

    return 0;
}
