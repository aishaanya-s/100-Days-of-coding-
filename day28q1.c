#include <stdio.h>

int main() {
    int n, number, i, isPrime;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers are: ");

    for (number = 2; number <= n; number++) {
        isPrime = 1;

        for (i = 2; i < number; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", number);
        }
    }

    return 0;
}