#include <stdio.h>

int main() {
    char name[100];
    int newWord = 1;

    fgets(name, sizeof(name), stdin);

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            newWord = 1;
        else if (newWord) {
            printf("%c", name[i]);
            newWord = 0;
        }
    }

    return 0;
}