#include <stdio.h>

int main() {
    int a[10][10], b[10][10], rows, columns;

    scanf("%d %d", &rows, &columns);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }

    return 0;
}