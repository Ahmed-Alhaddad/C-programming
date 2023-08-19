#include<stdio.h>

#define MAX 5
int array[MAX] = {2, 5, 3, 1,4};


void SelectionSort(int array[], int length);
void Print(int array[], int length);
int main()
{
	SelectionSort(array, MAX);
	Print(array, MAX);
	return 0;
}

void SelectionSort(int array[], int length)
{
	int i=0;
	int j=0;
	int temp = 0;
	for(i = 0; i < MAX; i++)
	{
		j = i;
		temp = array[i];
		while(j != MAX && j < MAX)
		{
			if(array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				
			}
			j++;
		}
	}
}

void Print(int array[], int length)
{
	
	int i=0;
	for(i = 0; i < MAX; i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
}
