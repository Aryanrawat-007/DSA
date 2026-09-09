#include<stdio.h>
int queue[100],front=-1,rear=-1;
void enq(int val){
    if(rear+1%100==front){
        printf("QUEUE IS FULL");
    }
    else{
        if(front==-1){
            front=0;
            rear=0;
        }
        else{
            rear=(rear+1)%100;
        }
    }
    queue[rear]=val;
    printf("ELEMENTS ENTER SUCCESFULL");
}

int main(){
    int val;
    printf("ENTER VALUE");
    scanf("%d",&val);
    enq(val);
    return 0;
}