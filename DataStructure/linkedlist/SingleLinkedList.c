#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
}linked;

/*int insertnode(linked *ptrhead, int value);*/
void printlinkedlist(linked *start);
int main()
{
	/*insertnode(linked *ptrhead, int value);*/
	linked *head;
	linked *one = NULL;
	linked *two = NULL;
	linked *three = NULL;
	
	one = (linked *)malloc(sizeof(linked));
	two  = (linked *)malloc(sizeof(linked));
	three = (linked *)malloc(sizeof(linked));
	head = one;
	one->data = 1;
	two->data = 2;
	three->data = 3;
	
	
	one->next = two;
	two->next = three;
	three->next = NULL;
	
	
	printlinkedlist(head);
	
	return 0;
}

void printlinkedlist(linked *start)
{
	while(NULL != start)
	{
		printf("%d \n", start->data);
		start = start->next;
		
	}
}









/*
int insertnode(linked *ptrhead, int value)
{
	linked *mylinked;
	if(NULL == ptrhear)
	{
		return 1;
	}
	else
	{
		ptrhead = &(mylinked->data);
		mylinked->next = &
}*/
