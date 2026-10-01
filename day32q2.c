#include <stdio.h>

int main() {
    long long number;
    int frequency[10] = {0};
    int digit, i, maximum = 0, answer = 0;

    printf("Enter an integer: ");
    scanf("%lld", &number);

    if (number == 0) {
        frequency[0] = 1;
    }

    while (number != 0) {
        digit = number % 10;

        if (digit < 0)
            digit = -digit;

        frequency[digit]++;
        number = number / 10;
    }

    for (i = 0; i < 10; i++) {
        if (frequency[i] > maximum) {
            maximum = frequency[i];
            answer = i;
        }
    }

    printf("Most frequent digit = %d\n", answer);

    return 0;
}