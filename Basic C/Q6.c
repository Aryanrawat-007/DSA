#include<stdio.h>
#include<string.h>
int main(){
 char str[100];
 int i,j;
 printf("ENTER A STRING : \n");
 fgets(str,sizeof(str),stdin);

 for(i=0;str[i]!='\0';i++){
    if(str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' ||str[i]=='a' ||str[i]=='e' || str[i]=='i' ||str[i]=='o' ||str[i]=='u' ){
        str[i]='X';
    }
    
 }
  printf("AFTER THE STRING : %s",str);
 return 0;
}