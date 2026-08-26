#include<stdio.h>
#include<stdlib.h>
typedef struct list{
    int data;
    struct list*next;
}sl;
 sl*insert(sl*ptr){
    sl*p=NULL;
    int x;
    p=(sl*)malloc(sizeof(sl));
    printf("ENTER DATA");
    scanf("%d",&x);
    p->data=x;
    p->next=ptr;
    ptr=p;
    return ptr;
 }
int main() {
    sl *t = NULL;
    int ch;

    while (1) {
        t = insert(t);

        printf("Do you want to insert another element? (1 = yes, 0 = no): ");
        scanf("%d", &ch);

        if (ch == 0)
            break;
    }

    printf("Linked list: ");

    sl *p = t;

    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }

    return 0;
}
