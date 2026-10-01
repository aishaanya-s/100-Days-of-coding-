#include <stdio.h>

int main() {
    char str[200];
    int start = 0, end = 0, i;

    fgets(str, sizeof(str), stdin);

    while (str[end] != '\0') {
        if (str[end] == ' ' || str[end] == '\n') {
            for (i = end - 1; i >= start; i--)
                printf("%c", str[i]);

            printf("%c", str[end]);
            start = end + 1;
        }

        end++;
    }

    return 0;
}