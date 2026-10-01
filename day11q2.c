#include <stdio.h>

int main() {
    float costPrice, sellingPrice, difference, percentage;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        difference = sellingPrice - costPrice;
        percentage = (difference / costPrice) * 100;

        printf("Profit = %.2f\n", difference);
        printf("Profit percentage = %.2f%%\n", percentage);
    } else if (costPrice > sellingPrice) {
        difference = costPrice - sellingPrice;
        percentage = (difference / costPrice) * 100;

        printf("Loss = %.2f\n", difference);
        printf("Loss percentage = %.2f%%\n", percentage);
    } else {
        printf("No profit, no loss\n");
    }

    return 0;
}