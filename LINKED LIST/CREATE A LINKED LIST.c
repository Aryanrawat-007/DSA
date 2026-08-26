#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*next;
};
int main(){
    struct node*p=NULL;
    struct node*q=NULL;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=10;
    p->next=NULL;
    q=(struct node*)malloc(sizeof(struct node));
    q->data=20;
    q->next=NULL;
    p->next=q;
    printf("%d",p->data);
    printf("\n%d",q->data);
    return 0;
}
