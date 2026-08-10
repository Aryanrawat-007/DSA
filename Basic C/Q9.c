#include<stdio.h>
#include<string.h>
    int(compare(char str1[],char str2[])){
        int i=0;
        while(str1[i] !='\0'  && str2[i]!= '\0'){
            if (str1[i] != str2[i]){
                return 0; // NOT EUQAL
            }
            i++;
        }
         if(str1[i]=='\0'  && str2[i] == '\0'){
             return 1;
         }
         else {
            return 0;
         }
    }
    int main(){
    int flag=0;
   char str1[10],str2[20];
   printf("ENTER STRING 1: \n");
   scanf("%s",str1);
   printf("ENTER STRING 2: \n");
   scanf("%s",str2);
    flag=strcmp(str1,str2);
     if(flag==0){
            printf("THE STRING IS EQUAL");
        }
        else
        printf("THE STRING IS NOT EQUAL");

    return 0;

}