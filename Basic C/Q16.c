#include <stdio.h>
#include <string.h>

void palindro(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;
    int flag = 1;

    while (start < end) {
        if (*start != *end) {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if (flag == 1)
        printf("THE STRING IS PALINDROME\n");
    else
        printf("THE STRING IS NOT A PALINDROME\n");
}

int main() {
    char str[100];   // Allocate memory properly

    printf("ENTER A STRING: ");
    fgets(str,sizeof(str),stdin);

    palindro(str);   // Function call

    return 0;
}