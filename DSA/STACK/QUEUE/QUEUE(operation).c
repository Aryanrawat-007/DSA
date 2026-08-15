Design an algorithm and a program to implement queue using array. The program should
implement following queue operations:
a) Create() - create a queue
b) EnQueue(k) - insert an element k into the queue
c) DeQueue() - delete an element from the queue
d) IsEmpty() - check if queue is empty or not
e) Size() - finds the size of the queue


#include<stdio.h>
int queue[100],front=-1,rear=-1;
void enqueue(int x){
    if(rear==99){
        printf("QUEUE IS FULL");
    }
    else{
        if(front==-1){
            front=0;
        }
        rear++;
        queue[rear]=x;
       
    }
}
int dequeue(){
    if(front==-1 && front>rear){
        printf("QUEUE IS EMPTY");
    }
    else{
      printf("ELEMENTS REMOVED %d",queue[rear]);
      front++;
      if(front>rear){
        front=-1;
        rear=-1;
      }
    }
}
void isempty(){
    if(front==-1){
        printf("QUEUE IS EMPTY");
    }
    else{
        printf("QUEUE IS NON EMPTY");
    }
}
void size(){
    if(front==-1){
        printf("SIZE=0 \n");
    }
    else{
        printf("SIZE= %d\n",rear-front+1);
    }
}
int main(){
    int str[100],x,ch;
    do
    {
        printf("1.ENQUEUE \n 2.DEQUEUE \n 3.ISEMPTY \n 4.SIZE \n 5.EXIT\n");
        printf("ENTER A CHOICE");
        scanf("%d",&ch);
        switch(ch){
            case 1:
               printf("ENTER NUMBER TO INPUT IN QUEUE");
               scanf("%d",&x);
               enqueue(x);
               break;
            case 2:
                dequeue();
                break;
            case 3:
                isempty();
                break;
            case 4:
                size();
                break;
            case 5:
                printf("PROGRAM ENDED\n");
                break;

            default:
                printf("INVALID OPERATION\n");
        }
    } while (ch!=5);
    return 0;
}
