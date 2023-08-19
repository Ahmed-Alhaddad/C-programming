#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int front = -1;
int rear = -1;
int array[MAX];

void Add(int *Ptrarray, int Data);
void Delete(int *Ptrarray);
void Display(int *Ptrarray);


int main()
{
	Add(&array[0],1);
	Add(&array[0],2);
	Add(&array[0],3);
	Add(&array[0],4);
	Add(&array[0],5);
	printf("%d\n", front);
	printf("%d\n", rear);
	Display(&array[0]);
	
	

	printf("-----------------------------------------------------------\n");
	
	Display(&array[0]);
	printf("-----------------------------------------------------------\n");
	
	
	
	Delete(&array[0]);
	printf("1-%d\n", front);
	Delete(&array[0]);
	printf("2-%d\n", front);
	Delete(&array[0]);
	printf("3-%d\n", front);
	Delete(&array[0]);
	printf("4-%d\n", front);
	Delete(&array[0]);
	printf("5-%d\n", front);

	Delete(&array[0]);
	printf("%d\n", front);
	printf("%d\n", rear);
	Delete(&array[0]);
	printf("%d\n", front);
	printf("%d\n", rear);
	
	printf("-----------------------------------------------------------\n");
	
	Delete(&array[0]);
	printf("%d\n", front);
	printf("%d\n", rear);
	printf("-----------------------------------------------------------\n");
	Add(&array[0],1);
	Add(&array[0],2);
	Add(&array[0],3);
	Add(&array[0],4);
	Add(&array[0],5);
	Display(&array[0]);
	printf("-----------------------------------------------------------\n");
	Delete(&array[0]);
	Display(&array[0]);
	printf("-----------------------------------------------------------\n");
	Add(&array[0],2);
	
	Delete(&array[0]);
	Delete(&array[0]);
	Delete(&array[0]);
	
	Display(&array[0]);
	return 0;
}


void Add(int *Ptrarray, int Data)
{
	if(NULL == Ptrarray)
	{
		printf("Error!!");
		exit(0);
	}
	else
	{
		if(-1 == rear && -1 == front)
		{
			rear++;
			front++;
			Ptrarray[rear] = Data;
			Ptrarray[front] = Data;
		}
		else if((rear != -1) && (rear < (MAX - 1)))
		{
			rear++;
			Ptrarray[rear] = Data;
		}
		else if((front >= 1) && (front < (MAX -1)))
		{
			rear = (front - 1);
			Ptrarray[rear] = Data;
		}
		else{/*NOTHING*/};
	}
}
void Delete(int *Ptrarray)
{
	if(NULL == Ptrarray)
	{
		printf("Error!!");
		exit(0);
	}
	else
	{
		if(front != (MAX-1) && front != -1)
		{
			front++;

		}
		else if(front == (MAX-1))
		{
			front = -1;
			rear = -1;
			
		}
		else if(front == -1 && rear == -1)
		{
			printf("THE QUEUE IS EMPTY\n");
		}
		else{/*NOTHING*/};
	}
}
void Display(int *Ptrarray)
{
	int countfront = 0;
	int countrear = 0;
	if(NULL == Ptrarray)
	{
		printf("Error!!");
		exit(0);
	}
	else
	{
		if(rear > front)
			for(countfront = front; countfront <= rear; countfront++)
			{
				printf("Dispaly[%d] : |%d|\n", countfront, Ptrarray[countfront]);
						
			}
		
		else
		{
			if(rear < front)
			{
				for(countrear = 0; countrear <= rear; countrear++)
					{
						printf("Dispaly[%d] : |%d|\n", countrear, Ptrarray[countrear]);
								
					}
				for(countfront = front; countfront <= (MAX - 1); countfront++)
					{
						printf("Dispaly[%d] : |%d|\n", countfront, Ptrarray[countfront]);
								
					}
			}
			else
			{
				/**/
			}
			
		}
	}			
}
