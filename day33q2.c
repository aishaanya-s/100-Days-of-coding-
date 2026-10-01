#include <stdio.h>

int main() {
    int a[100], n, value, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &value);

    i = n - 1;

    while (i >= 0 && a[i] > value) {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = value;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}