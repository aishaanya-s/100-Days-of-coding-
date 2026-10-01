#include <stdio.h>
#include <math.h>

int main() {
    int number, original, temp, digit;
    int digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;
    temp = number;

    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    temp = number;

    while (temp != 0) {
        digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp = temp / 10;
    }

    if (sum == original)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}