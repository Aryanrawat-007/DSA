#include <stdio.h>
#include <stdlib.h>

typedef struct middle {
    int data;
    struct middle *next;
} m;

m *head = NULL;

void insert(int x)
{
    m *p = (m *)malloc(sizeof(m));

    if (p == NULL)
        return;

    p->data = x;
    p->next = NULL;

    if (head == NULL)
    {
        head = p;
    }
    else
    {
        m *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = p;
    }
}

void display()
{
    m *temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

void mid()
{
    m *slow = head;
    m *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    if (slow != NULL)
        printf("Middle = %d\n", slow->data);
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);

    printf("Linked List: ");
    display();

    mid();

    return 0;
}