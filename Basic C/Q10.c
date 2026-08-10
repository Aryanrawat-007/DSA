#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char str1[10];
    printf("ENTER A STRING : \n");
    scanf("%s",str1);
    t=strlen(str1);
    printf("NO OF OCCURANCE IN A STRING %d",t);
    return 0;
}