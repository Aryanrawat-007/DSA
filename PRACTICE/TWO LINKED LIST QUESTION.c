#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head1=NULL;
struct node*head2=NULL;
void add_data1(int x){
    struct node*p=(struct node*)malloc(sizeof(struct node));
    struct node*temp=head1;
    if(p==NULL){
        printf("INVALID");
        return;
    }
    p->data=x;
    p->next=NULL;
    if(head1==NULL){
        head1=p;
        return;
    }
    else{
        struct node*temp=head1;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=p;
    }
}
void add_data2(int x){
    struct node*p=(struct node*)malloc(sizeof(struct node));
    struct node*temp=head2;
    if(p==NULL){
        printf("INVALID");
        return;
    }
    p->data=x;
    p->next=NULL;
    if(head2==NULL){
        head2=p;
        return;
    }
    else{
        struct node*temp=head2;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=p;
    }
}
void find_common_node(){
    struct node*temp=head1;
    struct node*p;
    while(temp!=NULL){
        p=head2;
        while(p!=NULL){
            if(temp->data==p->data){
                printf(" %d ",p->data);
            }
            p=p->next;
        }
        temp=temp->next;
    }

}
void add_linked_list(){
    struct node*temp=head1;
    struct node*p;
    int sum=0;
    while(temp!=NULL){
        sum+=temp->data;
        temp=temp->next;
    }
    temp=head2;
    while(temp!=NULL){
        sum+=temp->data;
        temp=temp->next;
    }
    printf("TOTAL SUM OF TWO LINKED LIST IS = %d",sum);
}
void accesding(){
    struct node*temp=head1;
    struct node*p;
    int x;
    while(temp!=NULL){
        p=temp->next;
        while(p!=NULL){
        if(temp->data>p->data){
            x=temp->data;
            temp->data=p->data;
            p->data=x;  
        }
        p=p->next;
        }
        temp=temp->next;
    }
}
void display(struct node*head){
    struct node*temp=head;
    while(temp!=NULL){
        printf(" %d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    add_data1(1);
    add_data1(4);
    add_data1(2);
    add_data1(3);
    
    add_data2(2);
    add_data2(4);
    add_data2(6);
    add_data2(8);

    printf(" First list: "); 
    display(head1); 
    printf("\n Second list: "); 
    display(head2);

    printf("\n COMMON NODE IN TWO LINKED LIST = ");
    find_common_node();

    printf("\n--- SUM OF LINKED LIST ---\n");
    add_linked_list();

    printf("\n LIST IN ASCENDING ORDER OF FIRST LIST: ");
    accesding();
    display(head1);
}



OUTPUT:

 First list:  1  4  2  3 
 Second list:  2  4  6  8 
 COMMON NODE IN TWO LINKED LIST =  4  2 
--- SUM OF LINKED LIST ---
TOTAL SUM OF TWO LINKED LIST IS = 30
 LIST IN ASCENDING ORDER OF FIRST LIST:  1  2  3  4 