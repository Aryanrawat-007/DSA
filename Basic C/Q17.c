#include <stdio.h>
#include <string.h>

int special(char *p) {
    int count = 0, i;

    for (i = 0; *(p + i) != '\0'; i++) {
        if ((*(p+i) >= 'a' && *(p+i) <= 'z') ||
            (*(p+i) >= 'A' && *(p+i) <= 'Z') ||
            (*(p+i) >= '0' && *(p+i) <= '9')) {
            // Not a special character
        }
        else {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    int c;

    printf("ENTER A STRING:\n");
    fgets(str, sizeof(str), stdin);

  
    c = special(str);

    printf("TOTAL SPECIAL CHARACTERS IN STRING: %d\n", c);

    return 0;
}