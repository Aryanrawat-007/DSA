#include<stdio.h>
#define MAX 100
int queue[100],front=-1,rear=-1;
void enqueue(int x){
    if(rear+1%MAX==front){
        printf("QUEUE IS FULL");
        return;
    }
    else{
        if(front==-1){
            front=0;
            rear=0;
        }
        else{
            rear=(rear+1)%MAX;
        }
    }
    queue[rear]=x;
    printf("ELEMENTS ENTER SUCCESSFULLY\n");
}
void dequeue(){
    if(front==-1){
        printf("QUEUE IS EMPTY");
        return;
    }
    else{
        int x=queue[front];
        if(front==rear){
            front=-1;
            rear=-1;
        }
        front=(front+1)%MAX;
        printf("\nELEMENTS REMOVED SUCCESSFULLY \n");
    }
}
void display(){
    int i;
    if(front==-1){
        printf("QUEUE IS EMPTY");
        return;
    }
    
    printf("ELEMENTS OF QUEUE\n");
    i=front;
    while(1){
        printf("%d ",queue[i]);
        if(i==rear){
            break;
        }
        i=(i+1)%MAX;
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}