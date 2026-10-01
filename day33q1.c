#include <stdio.h>

int main() {
    int arr[100], n, search;
    int left, right, middle;
    int found = 0, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    left = 0;
    right = n - 1;

    while (left <= right) {
        middle = (left + right) / 2;

        if (arr[middle] == search) {
            found = 1;
            printf("Element found at index %d\n", middle);
            break;
        } else if (search > arr[middle]) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    if (!found)
        printf("Element not found\n");

    return 0;
}