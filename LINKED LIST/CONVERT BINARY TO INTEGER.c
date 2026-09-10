#include <stdio.h>
#include <stdlib.h>

typedef struct binary {
    int data;
    struct binary *next;
} b;

b *head = NULL;

void insert(int x)
{
    b *p;

    p = (b *)malloc(sizeof(b));

    p->data = x;
    p->next = NULL;

    if (head == NULL)
    {
        head = p;
    }
    else
    {
        b *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = p;
    }
}

int coversion()
{
    b *p = head;
    int total = 0;

    while (p != NULL)
    {
        total = total * 2 + p->data;
        p = p->next;
    }

    return total;
}

void display()
{
    b *temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main()
{
    insert(1);
    insert(0);
    insert(1);
    insert(1);
    display();
    printf("Decimal = %d\n", coversion());
    return 0;
}