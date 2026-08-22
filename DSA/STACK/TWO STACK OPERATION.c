Design an algorithm and a program to implement two stacks by using only one array i.e. both the
stacks should use the same array for push and pop operation. Array should be divided in such a
manner that space should be efficiently used if one stack contains very large number of elements
and other one contains only few elements.
Input Format:
First line will take size of stack.
Second line will ask user whether it wants to push/pop in stack1 or stack2, then accordingly
perform operation.
Output Format:
Output will be the final contents of both stacks after performing all the operations


#include<stdio.h>
int stack[100];
int top1=-1,top2=99;
void push1(int x) {
	if(top1+1==top2) {
		printf("stack if full");
		return;
	}
	else {
		top1++;
		stack[top1]=x;
	}
}
void push2(int x) {
	if(top1+1==top2) {
		printf("stack full");
		return;
	}
	else {
		top2--;
		stack[top2]==x;
	}
}
void pop1(){
    if(top1==-1){
        printf("stack is empty");
        return ;
    }
    else{
        printf("delete elements %d",stack[top1--]);
        
    }
}
void pop2(){
    if(top2==99){
        printf("stack is empty");
        return;
    }
    else{
        printf("delete elements %d",stack[top2++]);
        
    }
}
int main()
{
    int ch, x;

    while(1)
    {
        printf("\n1.Push Stack1");
        printf("\n2.Push Stack2");
        printf("\n3.Pop Stack1");
        printf("\n4.Pop Stack2");
        

        printf("\nEnter Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter element : ");
                scanf("%d",&x);
                push1(x);
                break;

            case 2:
                printf("Enter element : ");
                scanf("%d",&x);
                push2(x);
                break;

            case 3:
                pop1();
                break;

            case 4:
                pop2();
                break;



            default:
                printf("Invalid Choice");
        }
    }
}
