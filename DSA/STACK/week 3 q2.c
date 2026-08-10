#include<stdio.h>
char stack[100];
int top=-1;
void push(char ch){
    if(top==99){
        printf("stack is full");
    }
    else{
        top++;
        stack[top]=ch;
    }
}
char pop( ){
    if(top==-1){
        return '\0';
    }
        return stack[top--];
    }
    

int main(){
    char str[100],ch;
    int i;

    printf("Enter expression: ");
    scanf("%s", str);

    for(i=0;str[i]!='\0';i++){
        if(str[i]=='(' || str[i]=='[' || str[i]=='{' ){
            push(str[i]);
        }
        else{
            ch=pop();
            if((str[i]==')' && ch!='(')||
               (str[i]==']' && ch!='[')||
               (str[i]=='}' && ch!='{')){
                printf("UNBALANCED");
                return 0;
               }
        }
    }
    if(top==-1){
        printf("BALANCED");
    }
    else{
        printf("NOT BALANCED");
    }
    return 0;
}