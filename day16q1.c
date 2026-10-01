#include <stdio.h>

int main() {
    int number, binary[32], i = 0, j;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    while (number > 0) {
        binary[i] = number % 2;
        number = number / 2;
        i++;
    }

    printf("Binary = ");

    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");

    return 0;
}