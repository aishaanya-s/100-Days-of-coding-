#include <stdio.h>

int main() {
    int a[10][10], rows, columns, sum = 0;

    scanf("%d %d", &rows, &columns);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}