#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define MAX 10
typedef unsigned int uint32;
typedef signed int sint32;
uint32 array[MAX] = {0,1,2,3,4,5,6,7,8,9};

void Insertion(uint32 array[],uint32 length);
void print(uint32 array[],uint32 length);

int main()
{
	Insertion(array, MAX);
	return 0;
}

void Insertion(uint32 array[],uint32 length)
{
	uint32 i = 0;
	sint32 j = 0;
	uint32 key = 0;
	for(i = 1; i < MAX; i++)
	{
		key = array[i];
		j = i - 1;
		while(array[j] > key && (j >= 0))
		{
			array[j+1] = array[j];
			j--;
		print(array, MAX);
		}
		array[j + 1] = key;
		print(array, MAX);
	}
	printf("\n");
	print(array, MAX);
}
void print(uint32 array[],uint32 length)
{
	uint32 i = 0;
	for(i = 0; i < MAX; i++)
	{
		printf("->[%i]  ",array[i]);
	}
	printf("\n");
}
