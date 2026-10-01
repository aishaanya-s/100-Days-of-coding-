#include <stdio.h>

int main() {
    int number, original, digit, i;
    int sum = 0, factorial;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0) {
        digit = number % 10;
        factorial = 1;

        for (i = 1; i <= digit; i++) {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        number = number / 10;
    }

    if (sum == original)
        printf("Strong number\n");
    else
        printf("Not a strong number\n");

    return 0;
}