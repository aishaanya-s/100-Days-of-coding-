#include <stdio.h>

int main() {
    float a, b, result;
    char operator;

    printf("Enter expression: ");
    scanf("%f %c %f", &a, &operator, &b);

    switch (operator) {
        case '+':
            result = a + b;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = a - b;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = a * b;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if (b != 0) {
                result = a / b;
                printf("Result = %.2f\n", result);
            } else {
                printf("Cannot divide by zero\n");
            }
            break;

        case '%':
            printf("Remainder = %d\n", (int)a % (int)b);
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}