#include <stdio.h>

int main() {
    char a[100], b[100];
    int count[256] = {0};

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    for (int i = 0; a[i] != '\0'; i++)
        if (a[i] != '\n')
            count[(unsigned char)a[i]]++;

    for (int i = 0; b[i] != '\0'; i++)
        if (b[i] != '\n')
            count[(unsigned char)b[i]]--;

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}