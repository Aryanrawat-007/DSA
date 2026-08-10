#include<stdio.h>
void calculate(float a,float b,float *product,float *quotient){

    *product= a*b;
    if(b!=0){
        *quotient=a/b;
    }
    else
       quotient=0;
}

int main(){
    float num1,num2,product,quotient;
    printf("ENTER NUMBER NUMBER 1:");
    scanf("%f",&num1);
    printf("ENTER NUMBER NUMBER 2:");
    scanf("%f",&num2);

    calculate(num1,num2,&product, &quotient);

    printf("PRODUCT OF THE NUMBER =%2f \n",product);
    if(num2!=0){
        printf("QUOTIENT=%2f \n",quotient);
    }
    else{
    printf("divison by zero is not possible \n");
    }
}