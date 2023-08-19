#include<stdio.h>
#include <stdlib.h>
#define MAX 5
int stack_arr[MAX];
int top = -1;

void push(int );
int pop();
void print();
int main()
{
    int data = 0;
    push(2);
    push(9);
    push(5);
    push(4);
    data = pop();
    printf("|%d| \n\n", data);
    print();
    printf("%d ",data);
    printf("%d ",stack_arr[4]);
}

void push(int data)
{
    if(top == MAX - 1)
    {
        printf("Stack is full");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
}

int pop()
{	
    int value = 0;
    value = stack_arr[top];
    if(top == -1)
    {
        printf("Stack Underflow");
        exit(1);
    }
    top = top - 1;
    return value;
}

void print()
{
    int i = 0;
    
    if(top == -1)
    {
        printf("Stack Underflow");
        return;
    }
    for(i = top; i >= 0; i--)
    {
        printf("|%d|\n", stack_arr[i]);
    }
    
}
