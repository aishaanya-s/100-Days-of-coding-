#include <stdio.h>

int main() {
    int arr[100], n, i, search, position = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            position = i;
            break;
        }
    }

    if (position != -1)
        printf("Element found at index %d\n", position);
    else
        printf("Element not found\n");

    return 0;
}