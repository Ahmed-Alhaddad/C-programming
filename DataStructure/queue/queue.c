#include<stdio.h>
#include<stdlib.h>
#define MAX 5

typedef struct{
	int arr[MAX];
	int front;
	int rear;
}queue;
void init(queue *q);
void Enqueue(queue *q, int data);
int Dequeue(queue *q);
void Print(queue *q);
int main()
{
	int data = 0;
	queue q;
	init(&q);
	Enqueue(&q, 1);
	Enqueue(&q, 2);
	Enqueue(&q, 3);
	Enqueue(&q, 4);
	Enqueue(&q, 5);
	Print(&q);
	data = Dequeue(&q);
	printf("%d \n", data);
	data = Dequeue(&q);
	printf("%d \n", data);
	data = Dequeue(&q);
	printf("%d \n", data);
	data = Dequeue(&q);
	printf("%d \n", data);
	data = Dequeue(&q);
	printf("%d \n", data);

	data = Dequeue(&q);
	printf("%d \n", data);

	return 0;
}

void init(queue *q)
{
	q->front = -1;
	q->rear = -1;
}
void Enqueue(queue *q, int data)
{
	if(q->rear == (MAX - 1))
	{
		printf("ENError\n");
		exit(1);
	}
	else
	{
		if(q->rear == 0)
		{
			q->rear = q->rear + 1;
			q->front = q->front + 1;
			q->arr[q->rear] = data;
		}
		else
		{		
			q->rear = q->rear + 1;
			q->arr[q->rear] = data;
		}
	}
	
	
}
int Dequeue(queue *q)
{
	int value = 0;
	value = q->arr[q->front];
	if(q->front == MAX)
	{
		printf("DEError\n");
		exit(1);
	}
	q->front = q->front + 1;
	return value;
}

void Print(queue *q)
{
	int i = 0;
	if(q->rear == -1)
	{
		printf("Queue is Empty");
	}
	for(i = 0; i <= (q->rear); i++)
	{
		printf("%d ", q->arr[i]);
	}
	printf("\n\n");
}
