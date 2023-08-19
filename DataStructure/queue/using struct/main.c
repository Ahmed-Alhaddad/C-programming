#include<stdio.h>
#include<stdlib.h>


typedef struct{
	void **element;
	int size;
	int front;
	int rear;
}queue;

createqueue();
enqueue();
dequeue();
isfull();
isempty();


int main()
{
	queue MyQueue;
	createqueue(queue MyQueue);

    return 0;
}

createqueue()	
{
/*We will create the pointer inside createqueue function we pass the size and if create function status*/
	queue *MyQueue
	/* Create queue object in the heap to hold the queue information */
	MyQueue = (queue *) malloc (sizeof(queue));
	if(NULL == MyQueue)
	{
		return 1;
		MyQueue = NULL;
	}
	/* Create array of <void *> to hold the addresses of the Queue elements */
	else
	{
		
	
}
enqueue()
{

}
dequeue()
{

}
isfull()
{

}
isempty()
{

}
