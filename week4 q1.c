// without recursion
/*
#include<stdio.h>
int stack[100];
int top=-1,x;
void push(char str){
    if(top==99){
        printf("stack is full");
    }
    else{
        top++;
        stack[top]=str;
    }
}
int pop(){
    if(top==-1){
        return '\0';
    }
    return stack[top--];
}
int main(){
    char str[100];
    int i;
    printf("ENTER");
    scanf("%99s", str);
    for(i=0;str[i]!='\0';i++){
        push(str[i]);
    }
    
    printf("reversed string");
    while(top!=-1){
        printf("%c",pop());
    }

    return 0;
}
    */


    //with recursion

       #include<stdio.h>

void reverse(char str[],int i)
{
    if(str[i]=='\0')
        return;

    reverse(str,i+1);

    printf("%c",str[i]);
}

int main()
{
    char str[100];

    printf("Enter String: ");
    scanf("%99s",str);

    printf("Reverse = ");

    reverse(str,0);

    return 0;
}