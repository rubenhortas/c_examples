#include<stdio.h>

/*
 * Function prototypes
 *
 * A function prototype is a statement that tells the compiler about the function’s name,
 * its return type, numbers, and data types of its parameters.
 */
void printVolume(int value);
int getMaxVolume();
void setVolume(int *volume, int value);

int main() {
    int volume = 8;
    int maxVolume = 0;

    printVolume(volume);

    maxVolume = getMaxVolume();
    printf("Max volume is %d\n", maxVolume);

    setVolume(&volume, 11);
    printVolume(volume);

    return 0;
}

// void function does not return nothing
void printVolume(int value) {
    printf("Volume is at %d\n", value);
}

// Return a value
int getMaxVolume(){
    return 11;
}

// Modify a value
void setVolume(int *volume, int value) {
    *volume = value;
}

