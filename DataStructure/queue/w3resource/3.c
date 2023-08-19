#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int Inserting(int *PtrQueue, int Data);
int removes(int *PtrQueue);
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
	Inserting(&ArrayQueue[0], 5);
	checking();
	Display(&ArrayQueue[0]);
	printf("\n");
	removes(&ArrayQueue[0]);
	Display(&ArrayQueue[0]);
	printf("\n");
	removes(&ArrayQueue[0]);
	Display(&ArrayQueue[0]);
	printf("\n");
	removes(&ArrayQueue[0]);
	Display(&ArrayQueue[0]);
	printf("\n");
	removes(&ArrayQueue[0]);
	Display(&ArrayQueue[0]);
	printf("\n");
	removes(&ArrayQueue[0]);
	Display(&ArrayQueue[0]);
	printf("\n");
	removes(&ArrayQueue[0]);
	Display(&ArrayQueue[0]);
	Inserting(&ArrayQueue[0], 1);
	Inserting(&ArrayQueue[0], 2);
	Inserting(&ArrayQueue[0], 3);
	Inserting(&ArrayQueue[0], 4);
	Inserting(&ArrayQueue[0], 5);
	Display(&ArrayQueue[0]);
	printf("\n");
	printf("\n");
	removes(&ArrayQueue[0]);
	Inserting(&ArrayQueue[0], 1);
	Display(&ArrayQueue[0]);
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
		if(rear != (MAX-1))
		{
			rear++;
			*(PtrQueue + rear) = Data;
			if(0 == rear)
			{
				front++;
			}
		}
		else if(rear == (front - 1))
		{
			rear++;
			*(PtrQueue + rear) = Data;
		}
	}
}

int removes(int *PtrQueue)
{
	
	if(NULL == PtrQueue)
	{
		return 1;
	}
	else
	{
		if((front == -1) || (front > rear))
		{
			rear = -1;
			front = -1;
			checking();
			
		}
		else
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
		if((rear == -1) && (front == -1))
		{
			checking();
		}
		else
		{
			for(i = front; i <= rear; i++)
			{
				printf("Queue[%d] : %d\n", i, *(PtrQueue + i));
			}
		}
	}
}

void checking()
{
	if((rear == -1) && (front == -1))
	{
		printf("Sorry the Queue is Empty\n");
	}
	else if((rear == (MAX - 1)) && (front == 0))
	{
		printf("Queue is FULL\n");
	}
	else
	{
		printf("Queue have data\n");
	}
}
