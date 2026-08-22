Given a string of opening and closing paranthesis, design an algorithm and a program to find the
length of the longest valid paranthesis substring. Valid paranthesis substring is a string which
contains balanced paranthesis.
Input Format:
The first line contains number of test cases, T.
For each test case, there will be string of paranthesis.
Output Format:
The output will have T number of lines. For each test case, output will be length of longest valid
paranthesis substring
Sample:
Input:
3
()())))
((()())(
(()()(()))()

Output:
4
6
12

    
#include<stdio.h>

int stack[100];
int top = -1;

void push(int ch)
{
    if(top == 99)
    {
        printf("Stack is full");
    }
    else
    {
        top++;
        stack[top] = ch;
    }
}

int pop()
{
    if(top == -1)
    {
        return -1;
    }
    return stack[top--];
}

int main()
{
    char str[100];
    int i, len;
    int max = 0;

    printf("ENTER EXPRESSION: ");
    scanf("%99s", str);

    push(-1);   // base index

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '(')
        {
            push(i);
        }
        else if(str[i] == ')')
        {
            pop();

            if(top == -1)
            {
                push(i);
            }
            else
            {
                len = i - stack[top];

                if(len > max)
                    max = len;
            }
        }
    }

    printf("LONGEST VALID PARENTHESES LENGTH = %d", max);

    return 0;
}
