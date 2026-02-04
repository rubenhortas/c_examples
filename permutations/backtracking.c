/*
 * Print all permutations with duplicates allowed
 *
 * Example extracted from:
 * http://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
 */

#include <stdio.h>
#include <string.h>

// Swap values at two pointers
void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/**
 * Print permutations of a stringParameters
 *
 * @a String
 * @l Left. Starting index of the string
 * @r Right. Ending index of the string.
 */
void permute(char *a, int l, int r) {
    int i;
    if (l == r)
        printf("%s\n", a);
    else {
        for (i = l; i <= r; i++) {
            swap((a + l), (a + i));
            permute(a, l + 1, r);
            swap((a + l), (a + i)); // Backtrack
        }
    }
}

int main() {
    char str[] = "ABC";
    int n = strlen(str);
    permute(str, 0, n - 1);
    return 0;
}
