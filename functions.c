#include <stdio.h>

/**
 * Function prototypes
 *
 * A function prototype is a statement that tells the compiler about the
 * function’s name, its return type, numbers, and data types of its parameters.
 */
void print_volume(int value);
int get_max_volume();
void set_volume(int *volume, int value);

int main() {
    int volume = 8;
    int max_volume = 0;

    print_volume(volume);
    // return: Volume is at 8

    max_volume = get_max_volume();
    printf("Max volume is %d\n", max_volume);
    // return: Max volume is 11

    set_volume(&volume, 11);
    print_volume(volume);
    // return: Volume is at 11

    return 0;
}

// void function does not return nothing
void print_volume(int value) { printf("Volume is at %d\n", value); }

// Return a value
int get_max_volume() { return 11; }

// Modify a value
void set_volume(int *volume, int value) { *volume = value; }
