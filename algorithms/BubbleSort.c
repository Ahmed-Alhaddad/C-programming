#include<stdio.h>
#include<stdlib.h>

#define MAX 5
typedef unsigned int unint32;
typedef signed int sint32;
unint32 array[MAX] = {1, 2, 2, 4, 5};
void Bubble(unint32 *array);
int main()
{
	Bubble(&array[0]);

	return 0;	
}
void Bubble(unint32 *array)
{
	unint32 i = 0;
	unint32 j = 0;
	unint32 temp = 0;
	unint32 count = 1;
	for(i = 0; i < MAX; i++)
	{
		printf("s \n");
		
		for(j = 0; j < (MAX - i - 1); j++)
		{
			if(array[j] >= array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			else if((i == 0) && (array[j] < array[j + 1]))
			{
				count++;
				printf("c->%i \n", count);
			}
			else{/*Nothing*/}
		}
		if((i==0) && (count == (MAX - i - 1)))
		{
			for(i = 0; i < MAX; i++)
			{
				printf("[%i] \n", array[i]);
			}
			exit(0);
		}
		else{/*Nothing*/}
	}
	for(i = 0; i < MAX; i++)
	{
		printf("<%i> \n", array[i]);
	}
}
