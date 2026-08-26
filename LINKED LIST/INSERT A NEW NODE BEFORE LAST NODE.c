#include<stdio.h>
#include<stdlib.h>

typedef struct list {
    int data;
    struct list *next;
} sl;

int main() {
    sl *p, *new, *head, *t;
    int a,b,c,d;
    head = malloc(sizeof(sl));
    printf("ENTER FIRST VALUE TO INSERT \n");
    scanf("%d",&a);
    head->data = a;

    head->next = malloc(sizeof(sl));
    printf("ENTER SECOND VALUE TO INSERT \n");
    scanf("%d",&b);
    head->next->data = b;

    head->next->next = malloc(sizeof(sl));
    printf("ENTER THIRD VALUE TO INSERT \n");
    scanf("%d",&c);
    head->next->next->data = c;
    head->next->next->next = NULL;

    new = malloc(sizeof(sl));
    printf("ENTER VALUE TO INSERT BEFORE LAST NODE\n");
    scanf("%d",&d);
    new->data = d;

    p = head;

    while(p->next->next != NULL) {
        p = p->next;
    }

    new->next = p->next;
    p->next = new;

    t = head;
    while(t != NULL) {
        printf("%d ", t->data);
        t = t->next;
    }

    return 0;
}
OUTPUT :

ENTER FIRST VALUE TO INSERT 
10
ENTER SECOND VALUE TO INSERT 
20
ENTER THIRD VALUE TO INSERT 
30
ENTER VALUE TO INSERT BEFORE LAST NODE
25
10 20 25 30
