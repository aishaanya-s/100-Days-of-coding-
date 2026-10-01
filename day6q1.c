#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("Even number\n");
    else
        printf("Odd number\n");

    return 0;
}