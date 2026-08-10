#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int t,i,j;
    printf("ENTER A STRING :\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        t=str[i];
        str[i]=str[j];
        str[j]=t;
    }
    printf("STRING AFTER REVERSE %s\n",str);
    return 0;
}

