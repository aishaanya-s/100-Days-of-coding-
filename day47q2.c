#include <stdio.h>

int main() {
    char str[200], word[100], longest[100];
    int i = 0, j, maxLength = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        j = 0;

        while (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
            word[j++] = str[i++];

        word[j] = '\0';

        if (j > maxLength) {
            maxLength = j;

            for (int k = 0; k <= j; k++)
                longest[k] = word[k];
        }

        if (str[i] != '\0')
            i++;
    }

    printf("%s", longest);

    return 0;
}