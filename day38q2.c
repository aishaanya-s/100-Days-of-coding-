#include <stdio.h>

int main() {
    int a[10][10], n, symmetric = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] != a[j][i])
                symmetric = 0;

    if (symmetric)
        printf("Symmetric matrix");
    else
        printf("Not a symmetric matrix");

    return 0;
}