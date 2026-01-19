#include<stdio.h>

int main() {
    /* int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old\n", age); */

    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);

    return 0;
}
