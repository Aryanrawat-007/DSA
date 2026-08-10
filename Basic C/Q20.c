#include<stdio.h>
int main(){
    typedef struct item{
        int itemcode;
        char name[30];
        int quantity;
        float rate;
    }I;
    I i;
    float cost;

    printf("ENTER ITEM CODE: \n");
    scanf("%d",&i.itemcode);
    
    printf("ENTER ITEM NAME: \n");
    scanf("%s",i.name);
    
    printf("ENTER ITEM QUANTITY: \n");
    scanf("%d",&i.quantity);
    
    printf("ENTER ITEM RATE: \n");
    scanf("%f",&i.rate);

     // Calculate cost
    if (i.quantity >= 0) {
        cost = i.quantity * i.rate;
        printf("TOTAL COST OF ITEM = %.2f\n", cost);
    } else {
        printf("Invalid quantity!\n");
    }
    
    return 0;



}