#include <stdio.h>

int main() {
    int a[100], n, value, position, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d %d", &value, &position);

    for (i = n; i >= position; i--)
        a[i] = a[i - 1];

    a[position - 1] = value;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}