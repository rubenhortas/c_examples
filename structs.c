#include <stdio.h>
#include <string.h>

/**
 * A struct is a custom data type that groups related variables of different
 * types. It allows you to treat a collection of data as a single unit or
 * object.
 */
struct Car {
    char brand[20];
    char model[20];
    int year;
    float price;
};

int main() {
    // Declaring and initializing a struct variable
    struct Car myCar;

    // Assigning values using the dot (.) operator
    strcpy(myCar.brand, "Suzuki");
    strcpy(myCar.model, "Swift");
    myCar.year = 2018;
    myCar.price = 25000.50;

    // Accessing and printing struct members
    printf("Car Details:\n");
    printf("Brand: %s\n", myCar.brand);
    printf("Model: %s\n", myCar.model);
    printf("Year:  %d\n", myCar.year);
    printf("Price: $%.2f\n", myCar.price);
    /**
     * output:
     * Car Details:
     * Brand: Suzuki
     * Model: Swift
     * Year:  2018
     * Price: $25000.50
     */

    return 0;
}
