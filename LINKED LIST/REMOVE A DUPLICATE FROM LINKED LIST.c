#include <stdio.h>
#include <stdlib.h>

typedef struct remove {
    int data;
    struct remove *next;
} r;

r *head = NULL;

void insert(int x) {
    r *p = (r *)malloc(sizeof(r));

    p->data = x;
    p->next = NULL;

    if (head == NULL) {
        head = p;
    }
    else {
        r *temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = p;
    }
}

void removeduplicate() {
    r *p = head;

    if (p == NULL)
        return;

    while (p->next != NULL) {
        if (p->data == p->next->data) {
            r *temp = p->next;
            p->next = p->next->next;
            free(temp);
        }
        else {
            p = p->next;
        }
    }
}

void display() {
    r *temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main() {
    insert(1);
    insert(1);
    insert(2);
    insert(3);
    insert(3);
    printf("BEFORE LINKED LIST \n");
    display();

    removeduplicate();
    printf("AFTER LINKED LIST \n");
    display();

    return 0;
}



OUTPUT:
  BEFORE LINKED LIST 
     1 1 2 3 3 
AFTER LINKED LIST 
     1 2 3 