/**
 * The arguments passed to "main" come from the command line.
 * The two default arguments are "argc" and "argv".
 *
 * - argc (argument count):
 *      It's an integer that indicates the number of arguments,
 *      including the program name.
 *
 * - argv (argument vector):
 *      It's a pointer to an array of character strings.
 *      Using the address stored in argv, it will be possible
 *      to access the arguments (the words typed on the command line)
 *      along with the program name.
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;

    printf("%d arguments:\n", argc);

    for(i = 0; i < argc; i++) {
        printf(" - %s\n", argv[i]);
    }
    return 0;
}
