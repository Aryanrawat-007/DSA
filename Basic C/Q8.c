#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];

    printf("ENTER STRING 1:\n");
    scanf("%s", str1);

    printf("ENTER STRING 2:\n");
    scanf("%s", str2);

    strcat(str1, " ");   // add space
    strcat(str1, str2);  // add second string

    printf("OUTPUT OF STRING: %s\n", str1);
    return 0;
}