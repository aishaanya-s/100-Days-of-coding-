#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    scanf("%s", str);

    while (str[length] != '\0')
        length++;

    for (int start = 0; start < length; start++) {
        for (int end = start; end < length; end++) {
            for (int i = start; i <= end; i++)
                printf("%c", str[i]);

            printf("\n");
        }
    }

    return 0;
}