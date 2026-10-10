#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node*head=NULL;
void add_element(int x){
    struct node*p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL){
        printf("INVALID INPUT");
        return;
    }
    p->data=x;
    p->next=NULL;
    if(head==NULL){
        head=p;
    }
    else{
        struct node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=p;
    }
}
void middle(){
    struct node*fast=head;
    struct node*slow=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    printf(" \n MIDDLE ELEMENTS OF LINKED LIST %d ",slow->data);
    
}
void find_elements(int k){
    struct node*temp=head;
    while(temp!=NULL){
        if(temp->data==k){
            printf(" \n ELEMENTS FOUND IN LINKED LIST \n");
            return;
        }
        else{
            printf("\n ELEMENTS NOT FOUND IN LINKED LIST \n");
        }
        temp=temp->next;
    }
}
void reverse(){
    struct node*prev=NULL;
    struct node*curr=head;
    struct node*next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}
void delete_element(int x){
    struct node*temp=head;
    struct node*p;
    if(head==NULL){
        printf("invalid");
        return;
    }
    // IF FIRST ELEMENTS OF LINKED LIST IS THE DELETE ELEMENTS
    if(head->data==x){
        p=head;
        head=head->next;
        free(p);
        return;
    }
    while(temp!=NULL){
        if(temp->next->data==x){
            p=temp->next;
            temp->next=p->next;
            free(p);
            printf("ELEMENTS DELETE \n");
            return;
        }
        temp=temp->next;
    }
}
void find_even_elements(){
    int count=0;
    struct node*temp=head;
    while(temp!=NULL){
        if(temp->data%2==0){
            count++;
        }
        temp=temp->next;
        
    }
    printf("NO OF EVEN ELEMENTS IN LINKED LIST= %d ",count);
}
void find_odd_elements(){
    int count=0;
    struct node*temp=head;
    while(temp!=NULL){
        if(temp->data%2!=0){
            count++;
        }
        temp=temp->next;
        
    }
    printf("NO OF ODD ELEMENTS IN LINKED LIST= %d ",count);
}
void delete_first_elements(){
    struct node*temp;
    temp=head;
    head=head->next;
    free(temp);
}
void delete_last_elements(){
    struct node*temp=head;
    struct node*p;
    if(head==NULL){
        printf("INVALID");
        return;
    }
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
}
void delete_node_from_user(int position)
{
    struct node *temp = head;
    struct node *p;
    if(head == NULL || position < 1){
        printf("INVALID POSITION\n");
        return;
    }
    if(position == 1){
        head = head->next;
        free(temp);
        printf("NODE DELETED SUCCESSFULLY\n");
        return;
    }
    for(int i = 1; i < position - 1 && temp != NULL; i++){
        temp = temp->next;
    }
    if(temp == NULL || temp->next == NULL){
        printf("INVALID POSITION\n");
        return;
    }
    p = temp->next;
    temp->next = p->next;
    free(p);
    printf("NODE DELETED SUCCESSFULLY\n");
}
void delete_nth_from_end(int n){
    struct node*fast=head;
    struct node*slow=head;
    struct node*p;
    if(head==NULL){
        printf("INVALID");
        return;
    }
    // Move fast pointer n step ahead
    for(int i=0;i<n;i++){
        if(fast==NULL){
            printf("INVALID");
            return;
        }
        fast=fast->next;
    }

    //if deleting the first node
    if(fast==NULL){
        p=head;
        head=head->next;
        free(p);
        return;
    }
    //Move both pointer 
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    //Delete the required node
    p=slow->next;
    slow->next=p->next;
    free(p);
}
void convert_binary_to_decimal(){
    struct node*temp=head;
    int total=0;
    while(temp!=NULL){
        total=2*total+temp->data;
        temp=temp->next;
    }
    printf("DECIMAL NUMBER = %d",total);
}
void find_no_of_minimum_number(int k){
    struct node*temp=head;
    int count=0;
    while(temp!=NULL){
        if(temp->data<k){
            count++;
        }
        temp=temp->next;
    }
    printf("NUMBER OF ELEMNETS WHICH IS SMALLER THAN KEY= %d ",count);
}
void number_of_elements_divisible_by_key(int key){
    struct node*temp=head;
    int count=0;
    while(temp!=NULL){
        if(temp->data%key==0){
            count++;
            printf(" %d ",temp->data);
        }
        temp=temp->next;
    }
    printf("\n NUMBER OF ELEMENTS WHICH IS DIVISIBLE BY KEY = %d ",count);
}
// K will be given to you and upto k you have to reverse the linked list
void reverse_upto_key(int key){
    struct node*prev=NULL;
    struct node*curr=head;
    struct node*next=NULL;
    while(curr!=NULL && curr->data!=key){
        curr=curr->next;
    }
    if(curr==NULL){
        printf("KEY NOT FOUND");
        return;
    }
    curr=head;
    struct node*tail=head;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        if (prev->data == key) 
        break;
        
    }
    tail->next=curr;
        head=prev;
}
// Sum of last n nodes from a single linked list
void sum_last_N_node(int n){
    int sum=0;
    struct node*fast=head;
    struct node*slow=head;
    if (n <= 0){
    return;
    }
    // Move fast n steps ahead
    for(int i=0;i<n;i++){
        if(fast==NULL){
            printf("INVALID");
            return;
        }
        fast=fast->next;
    }
    // Move both pointers
    while(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    // Calculate sum
    while(slow!=NULL){
        sum+=slow->data;
        slow=slow->next;
    }
    printf("SUM OF LAST Nth NODE = %d ",sum);
}
void display(){
    struct node*temp=head;
    while(temp!=NULL){
        printf(" %d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    add_element(1);
    add_element(2);
    add_element(3);
    add_element(4);
    add_element(5);
    add_element(6);
    add_element(7);
    add_element(8);
    add_element(9);
    printf("\n THE LINKED LIST IS \n");
    display();
    printf("\n FOR MIDDLE ELEMENTS IN LINKED LIST \n");
    middle();
    printf("\n FOR FINDING THE ELEMENTS WHETHER IN LINKED LIST \n");
    find_elements(3);
    printf("\n FOR REVERSE AN LINKED LIST \n");
    reverse();
    display();
    printf(" \n FOR DELETE AN ELEMENTS IN LINKED LIST \n");
    delete_element(2);
    display();
    printf("\n FOR FINDING EVEN NUMBER IN LINKED LIST \n");
    find_even_elements();
    printf("\n FOR FINDING ODD NUMBER IN LINKED LIST \n");
    find_odd_elements();
    printf("\n FIRST ELEMENTS REMOVED \n");
    delete_first_elements();
    display();
    printf("\n DELETE LAST ELEMENTS IN LINKED LIST \n");
    delete_last_elements();
    display();
    printf("\n DELETE ELEMENTS FROM USER \n ");
    delete_node_from_user(2);
    display();
    printf("\n DELETE ANY NODE FROM THE Nth NODE FROM LAST \n");
    delete_nth_from_end(2);
    display();
    printf("\n FIND HOW MANY NUMBER IS SMALLER THAN 6 \n");
    find_no_of_minimum_number(6);
    printf("\n FIND THE NUMBER OF ELEMENTS WHICH IS DIVISIBLE BY KEY = 2 \n");
    number_of_elements_divisible_by_key(2);
    printf("\n REVERSE THE LINKED LIST FROM KEY ELEMENTS = 5 \n");
    reverse_upto_key(5);
    display();
    printf(" \n SUM OF LAST Nth NODE FROM A SINGLE LINKED LIST \n ");
    sum_last_N_node(3);
    return 0;
}





OUTPUT:

 THE LINKED LIST IS 
 1  2  3  4  5  6  7  8  9 
 FOR MIDDLE ELEMENTS IN LINKED LIST 
 
 MIDDLE ELEMENTS OF LINKED LIST 5 
 FOR FINDING THE ELEMENTS WHETHER IN LINKED LIST 

 ELEMENTS NOT FOUND IN LINKED LIST 

 ELEMENTS NOT FOUND IN LINKED LIST 
 
 ELEMENTS FOUND IN LINKED LIST 

 FOR REVERSE AN LINKED LIST 
 9  8  7  6  5  4  3  2  1  
 FOR DELETE AN ELEMENTS IN LINKED LIST 
ELEMENTS DELETE 
 9  8  7  6  5  4  3  1 
 FOR FINDING EVEN NUMBER IN LINKED LIST 
NO OF EVEN ELEMENTS IN LINKED LIST= 3 
 FOR FINDING ODD NUMBER IN LINKED LIST 
NO OF ODD ELEMENTS IN LINKED LIST= 5 
 FIRST ELEMENTS REMOVED 
 8  7  6  5  4  3  1 
 DELETE LAST ELEMENTS IN LINKED LIST 
 8  7  6  5  4  3 
 DELETE ELEMENTS FROM USER 
 NODE DELETED SUCCESSFULLY
 8  6  5  4  3 
 DELETE ANY NODE FROM THE Nth NODE FROM LAST 
 8  6  5  3 
 FIND HOW MANY NUMBER IS SMALLER THAN 6 
NUMBER OF ELEMNETS WHICH IS SMALLER THAN KEY= 2 
 FIND THE NUMBER OF ELEMENTS WHICH IS DIVISIBLE BY KEY = 2 
 8  6 
 NUMBER OF ELEMENTS WHICH IS DIVISIBLE BY KEY = 2 
 REVERSE THE LINKED LIST FROM KEY ELEMENTS = 5 
 5  6  8  3  
 SUM OF LAST Nth NODE FROM A SINGLE LINKED LIST 
 SUM OF LAST Nth NODE = 17 