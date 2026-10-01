#include <stdio.h>

int main() {
    int a[10][10], sum[10], rows, columns;

    scanf("%d %d", &rows, &columns);

    for (int i = 0; i < rows; i++) {
        sum[i] = 0;

        for (int j = 0; j < columns; j++) {
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
        printf("%d ", sum[i]);

    return 0;
}