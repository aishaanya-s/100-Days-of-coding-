#include <stdio.h>

int main() {
    int number, digit;
    int product = 1;
    int found = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;

        if (digit % 2 != 0) {
            product = product * digit;
            found = 1;
        }

        number = number / 10;
    }

    if (found)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digit found\n");

    return 0;
}