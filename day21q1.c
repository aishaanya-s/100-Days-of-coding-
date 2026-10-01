#include <stdio.h>
#include <math.h>

int main() {
    int number, first, last, digits = 0;
    int divisor = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    last = number % 10;
    first = number;

    while (first >= 10) {
        first = first / 10;
        digits++;
        divisor = divisor * 10;
    }

    middle = (number % divisor) / 10;

    result = last * divisor + middle * 10 + first;

    printf("Number after swapping = %d\n", result);

    return 0;
}