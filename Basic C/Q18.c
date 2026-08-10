 /*#include<stdio.h>
#include<string.h>
void search(char*str,char ch){
    int i=0;
    while(*(str+i)!='\0'){
    if(*(str+i)==ch)
    return i;
      i++; 
    }
    return -1;

}

int main(){
    char str[100];
    char ch;
    int index;
    printf("ENTER A Sentence: \n");
    fgets(str,sizeof(str),stdin);

    printf("SEARCH CHARACTER:");
    scanf("%c",&ch);

    search(str,ch);

     if (index != -1)
        printf("%s\n", str + index); // pointer to index position
    else
        printf("Character not found\n");
    return 0;
}
    */



#include <stdio.h>
#include <string.h>

// UDF to return index of first occurrence of character
int findIndex(char *str, char ch)
{
    int i = 0;
    while (*(str + i) != '\0')
    {
        if (*(str + i) == ch)
            return i;
        i++;
    }
    return -1; // if character not found
}

int main()
{
    char str[100];
    char ch;
    int index;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // remove newline if present
    str[strcspn(str, "\n")] = '\0';

    printf("Search Character: ");
    scanf(" %c", &ch);

    index = findIndex(str, ch);

    if (index != -1)
        printf("%s\n", str + index); // pointer to index position
    else
        printf("Character not found\n");

    return 0;
}