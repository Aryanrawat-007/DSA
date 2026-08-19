#include<stdio.h>
int queue[100],front=0,rear=-1;
void enqueue(int str){
    if(rear==99){
        printf("QUEUE IS FULL");
    }
    else{
        if(front==-1){
            front=0;
        }
        rear++;
        queue[rear]=str;
    }
}
int dequeue(){
    int x;
    if(front==-1 || front>rear){
        printf("QUEUE IS EMPTY");
    }
    else{
        x=queue[front];
        front++;
        if(front>rear){
            front=-1;
            rear=-1;
        }
    }
    return x;
}
int reversequeue(){
    int left=front;
    int right=rear;
    int temp;
    temp=queue[left];
    queue[left]=queue[right];
    queue[right]=temp;
    left++;
    right--;
}
int main(){
    int str[100],n;
    printf("ENTER NUMBER");
    scanf("%d",&n);
    printf("enter elements ");
    for(int i=0;i<n;i++){
        scanf("%d",&str[i]);
        enqueue(str[i]);
    }
    reversequeue();
     printf("\nDEQUEUED ELEMENTS:\n");
    for(int i=0;i<n;i++){
     int ch= dequeue();
    printf("%d ",ch);
    }
    return 0;
}