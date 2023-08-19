#include<stdio.h>
#include<stdlib.h>
#define MAX 5

typedef struct
{
	int stack[MAX];
	int top;
}st;


void push(st *s, int data);
int pop(st *s);
void print(st *s);
void stackIsEmpty(st *s);

int CheckStackEmpty(st *s);
int CheckStackOverflow(st *s);

int main()
{
	st s;
	int data = 0;
	stackIsEmpty(&s);
	int ChooseNumber = 0;
	while(ChooseNumber != 5)
	{
		printf("\n1. Push\n");
		printf("2. Pop\n");
		printf("3. print the top Element\n");
		printf("4. Print all the element of the stack\n");
		printf("5. Quit\n");
		printf("\nPlease Enter Your Choice: \n");
		scanf("%d",&ChooseNumber);
		switch(ChooseNumber)
		{
			case 1:
				printf("Enter The element to be Pushed: ");
				scanf("%d", &data);
				push(&s, data);
				break;
			case 5:
				exit(0);
				break;
				
			default:
				printf("Please check your choice");
				break;
		}
	}
	return 0;
}

int CheckStackEmpty(st *s)
{
	if(s->top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int CheckStackOverflow(st *s)
{
	if(s->top == (MAX - 1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

void push(st *s, int data)
{
	if(CheckStackOverflow(s))
	{
		printf("Stack Overflow\n");
		return;
	}
	s->top = (s->top) + 1;
	s->stack[s->top] = data;
	
}
int pop(st *s)
{	
	int Value;
	if(CheckStackEmpty(s))
	{
		printf("Stack Empty\n");
		exit(1);
	}
	Value = s->stack[s->top];
	s->top = (s->top) - 1;
	return Value;
}
void print(st *s)
{
	int i = 0;
	if(CheckStackEmpty(s))
	{
		printf("Stack Empty\n");
		return;
	}
	for(i = (s->top) ; i >= 0; i--)
	{
		printf("|%d|\n", s->stack[i]);
	}
}
void stackIsEmpty(st *s)
{
	s->top = -1;
}
