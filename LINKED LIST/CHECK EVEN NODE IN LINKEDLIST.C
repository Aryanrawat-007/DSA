#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head=NULL;
void add_data(int x){
    struct node*p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL){
        printf("Memory allocation failed\n");
       return;
    }
    printf("ELEMENTS ADD SUCCESFULLY %d \n",x);
    p->data=x;
    p->next=head;
    head=p;
}
void count_evennode(){
    int count=0;
    struct node*current=head;
    while(current!=NULL){
        if(current->data%2==0){
            count++;
        }
        current=current->next;
    }
    printf("no of even node=%d",count);
}
int main(){
    add_data(5);
    add_data(6);
    add_data(12);
    add_data(3);
    count_evennode();
    return 0;
}


OUTPUT:-
ELEMENTS ADD SUCCESFULLY 5 
ELEMENTS ADD SUCCESFULLY 6 
ELEMENTS ADD SUCCESFULLY 12 
ELEMENTS ADD SUCCESFULLY 3 
NUMBER OF EVEN NODE= 2