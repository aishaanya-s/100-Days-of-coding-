#include <stdio.h>

int main() {
    char name[100];
    int i = 0, newWord = 1, lastSpace = -1;

    fgets(name, sizeof(name), stdin);

    while (name[i] != '\0') {
        if (name[i] == ' ')
            lastSpace = i;

        i++;
    }

    for (i = 0; i < lastSpace; i++) {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' '))
            printf("%c. ", name[i]);
    }

    for (i = lastSpace + 1; name[i] != '\0' && name[i] != '\n'; i++)
        printf("%c", name[i]);

    return 0;
}