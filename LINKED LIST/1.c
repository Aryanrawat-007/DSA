#include<stdio.h>
#include<stdlib.h>
typedef struct list{
    int data;
    struct list*next;
}sl;

int main(){
    sl*p=NULL;
    sl*l=NULL;
    int ch,v;
    while(1){
        p=malloc(sizeof(sl));
        if(p!=NULL){
            printf("enter data");
            scanf("%d",&v);
            p->data=v;
            p->next=l;
            l=p;
            printf("do you want to continue press any number else enter 0 to exit");
            scanf("%d",&ch);
            if(ch==0){
                break;
            }
        }
    }
    p=l;
    while(p!=NULL){
        printf("%d",p->data);
        p=p->next;
    }
    return 0;
}