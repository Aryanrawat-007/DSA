#include <stdio.h>

int queue[100], front = -1, rear = -1;
int stack[100], top = -1;

void enqueue(int x)
{
    if (rear == 99)
    {
        printf("QUEUE IS FULL\n");
        return;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = x;
    }
}

int dequeue()
{
    int x;

    if (front == -1 || front > rear)
    {
        printf("QUEUE IS EMPTY\n");
        return -1;
    }

    x = queue[front];

    printf("REMOVED ELEMENT: %d\n", x);

    front++;

    if (front > rear)
    {
        front = -1;
        rear = -1;
    }

    return x;
}

int isempty()
{
    if (front == -1)
        return 1;
    else
        return 0;
}

void push(int val)
{
    if (top == 99)
    {
        printf("STACK IS FULL\n");
        return;
    }

    top++;
    stack[top] = val;
}

int pop()
{
    int x;

    if (top == -1)
    {
        printf("STACK IS EMPTY\n");
        return -1;
    }

    x = stack[top];

    printf("ELEMENT REMOVED: %d\n", x);

    top--;

    return x;
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("QUEUE IS EMPTY\n");
        return;
    }

    printf("QUEUE: ");

    for (i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

int main()
{
    int x;

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    printf("Before reversing:\n");
    display();

    /* Queue -> Stack */
    while (!isempty())
    {
        x = dequeue();
        push(x);
    }

    /* Stack -> Queue */
    while (top != -1)
    {
        x = pop();
        enqueue(x);
    }

    printf("\nAfter reversing:\n");
    display();

    return 0;
}
