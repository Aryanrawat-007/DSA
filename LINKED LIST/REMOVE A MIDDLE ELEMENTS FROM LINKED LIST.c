#include<stdio.h>
#include<stdlib.h>
typedef struct middle{
    int data;
    struct middle*next;
}m;
m*head;
void insert(int x){
     m*p;
     p=(m*)malloc(sizeof(m));
     p->data=x;
     p->next=NULL;
     if(head==NULL){
        head=p;
     }
     else{
        m*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=p;
     }
}
void delete_Middle_Elements(){
    m*slow=head;
    m*fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    m*temp=slow->next;
    slow->next=temp->next;
    free(temp);
}
void display(){
    m*temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    printf("BEFORE LINKED LIST \n");
    display();
    printf("AFTER LINKED LIST \n");
    delete_Middle_Elements();
    display();
    return 0;
}


OUTPUT: 
         BEFORE LINKED LIST 
            1 2 3 4 5 6 
         AFTER LINKED LIST 
            1 2 3 5 6 