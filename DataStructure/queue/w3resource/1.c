#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int Inserting(int *PtrQueue, int Data);
int Display(int *PtrQueue);
void checking();

int front = -1;
int rear = -1;
int ArrayQueue[MAX];


int main()
{
	int Data = 0;
	checking();
	Inserting(&ArrayQueue[0], 1);
	Inserting(&ArrayQueue[0], 2);
	Inserting(&ArrayQueue[0], 3);
	Inserting(&ArrayQueue[0], 4);
	
	Display(&ArrayQueue[0]);
	checking();
	return 0;
}


int Inserting(int *PtrQueue, int Data)
{
	if(NULL == PtrQueue)
	{
		return 1;
	}
	else
	{
		rear++;
		*(PtrQueue + rear) = Data;
		if(0 == rear)
		{
			front++;
		}
		
	}
}
int Display(int *PtrQueue)
{
	int i = 0;
	if(NULL == PtrQueue)
	{
		return 1;
	}
	else
	{
		for(i = front; i <= rear; i++)
		{
			printf("Queue[%d] : %d\n", i, *(PtrQueue + i));
		}
	}
}

void checking()
{
	if((rear == -1) && (front == -1))
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
}
