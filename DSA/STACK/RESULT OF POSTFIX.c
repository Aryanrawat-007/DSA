Given an expression in the form of postfix representation, design an algorithm and a program to find result of this expression. 
INPUT= 2 3 1 * + 4 - 
OUTPUT= 1

#include<stdio.h>
int stack[100],top=-1;
void push(int x){
    stack[++top]=x;
}
int pop(){
    return stack[top--];
}
int main(){
    int i,a,b,result;
    char str[100];
    printf("ENTER EXPRESSION");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++){
        if(str[i]>='0' && str[i]<='9'){
            push(str[i]-'0');
        }
        else{
            b=pop();
            a=pop();

            switch(str[i]){
                case '+':
                    result= a + b;
                    break;
                case '-':
                    result =a - b;
                    break;
                case '*':
                    result=a*b;
                    break;
                case '/':
                    result=a/b;
                    break;    
            }
            push(result);
        }
        
    }
    printf("%d ",pop());
    return 0;
}
