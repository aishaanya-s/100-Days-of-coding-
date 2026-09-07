//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main() {
    int num1, num2;
    float sum, difference, product, quotient;
    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    // Calculate sum
    sum = num1 + num2;
    // Calculate difference
    difference = num1 - num2;
    // Calculate product
    product = num1 * num2;
    // Calculate quotient
    quotient = (float)num1 / num2;
    // Display the results
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", difference);
    printf("Product = %.2f\n", product);
    printf("Quotient = %.2f\n", quotient);
    return 0;
}