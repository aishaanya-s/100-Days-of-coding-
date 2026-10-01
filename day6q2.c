#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number >= 0) {
        if (number == 0)
            printf("Zero\n");
        else
            printf("Positive number\n");
    } else {
        printf("Negative number\n");
    }

    return 0;
}