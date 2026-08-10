#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char ch;
    fp=fopen("Aryan.txt","w+"); //write + read= w+
    if(fp==NULL){
        printf("IT CANNOT BE OPEN:");
        exit(1);
    }
    printf("CONTENT OF THE FILE:");
   
    // Write into file
    while((ch = getchar()) != EOF){
        fputc(ch, fp);
    }

    rewind(fp);  // go to beginning

    printf("\nCONTENT OF THE FILE:\n");

    // Read from file
    while((ch = fgetc(fp)) != EOF){
        printf("%c", ch);
        
    }

    fclose(fp);

    return 0;
}