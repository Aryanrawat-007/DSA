#include<stdio.h>
#include<stdlib.h>
typedef struct list{
    int data;
    struct list*next;
}sl;
int main(){
    sl*p,*head=NULL,*del,*temp;
    int i,n,x;
    printf("ENTER NUMBER");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("ENTER DATA");
        scanf("%d",&x);
        p=malloc(sizeof(sl));
        p->data=x;
        p->next=NULL;
        if(p==NULL){
            printf("invalid");
            return 1;
        }
        if(head==NULL){
        head=p;
        }
        else{
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=p;
        }
        
    }
    temp=head;
    while(temp!=NULL &&temp->next!=NULL){
        del=temp->next;
        temp->next=del->next;
        free(del);
        temp=temp->next;
    }
    temp = head;

    printf("After deleting alternate nodes: ");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;
}
 OUTPUT:
ENTER NUMBER 5
ENTER DATA 10
ENTER DATA 20
ENTER DATA 30
ENTER DATA 40
ENTER DATA 50
After deleting alternate nodes: 10 -> 30 -> 50 -> NULL
