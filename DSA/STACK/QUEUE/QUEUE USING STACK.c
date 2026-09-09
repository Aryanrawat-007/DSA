#include <stdio.h>

int stack1[100], stack2[100];
int top1 = -1, top2 = -1;

void enqueue(int x)
{
    if (top1 == 99)
    {
        printf("Queue is full\n");
        return;
    }

    top1++;
    stack1[top1] = x;

    printf("%d enqueued\n", x);
}

void dequeue()
{
    int x;

    if (top1 == -1 && top2 == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    /* Move stack1 to stack2 if stack2 is empty */
    if (top2 == -1)
    {
        while (top1 != -1)
        {
            top2++;
            stack2[top2] = stack1[top1];
            top1--;
        }
    }

    /* Remove front element */
    x = stack2[top2];
    top2--;

    printf("Element dequeued: %d\n", x);
}

void display()
{
    int i;

    if (top1 == -1 && top2 == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");

    /* stack2 contains front elements */
    for (i = top2; i >= 0; i--)
    {
        printf("%d ", stack2[i]);
    }

    /* stack1 contains newer elements */
    for (i = 0; i <= top1; i++)
    {
        printf("%d ", stack1[i]);
    }

    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    enqueue(40);

    display();

    dequeue();

    display();

    return 0;
}