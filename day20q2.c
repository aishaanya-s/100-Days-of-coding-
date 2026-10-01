#include <stdio.h>

int main() {
    long long binary, result = 0, place = 1;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        digit = binary % 10;

        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        result = result + digit * place;
        place = place * 10;
        binary = binary / 10;
    }

    printf("1's complement = %lld\n", result);

    return 0;
}