#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], combined[200];

    scanf("%s", a);
    scanf("%s", b);

    if (strlen(a) != strlen(b)) {
        printf("Not rotation");
        return 0;
    }

    strcpy(combined, a);
    strcat(combined, a);

    if (strstr(combined, b) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}