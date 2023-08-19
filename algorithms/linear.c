#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 10
#define NOT_FOUND -1
typedef unsigned int uint32;

uint32 array[MAX_LENGTH] = {1,2,3,4,5,6,7,8,9,10}; 
uint32 linearOside(uint32 AData[], uint32 Linght, uint32 Value);
uint32 linearTwoside(uint32 AData[], uint32 Lingth, uint32 Value);

int main()
{
	uint32 location = 0;
	location = linearOside(array, MAX_LENGTH, 5);
	printf("location : %d\n", location);
	location = linearOside(array, MAX_LENGTH, 55);
	if(NOT_FOUND == location)
	{
		printf("Element not found\n");
	}
	else{/*NOTHING*/}
	printf("-------------------------------------------------\n");
	location = linearTwoside(array, MAX_LENGTH, 5);
	printf("location : %d\n", location);
	location = linearTwoside(array, MAX_LENGTH, 55);
	if(NOT_FOUND == location)
	{
		printf("Element not found\n");
	}
	else{/*NOTHING*/}
	
	return 0;
}

uint32 linearOside(uint32 AData[], uint32 Lingth, uint32 Value)
{
	uint32 count = 0;
	for(count = 0; count < Lingth; count++)
	{
		if(Value == AData[count])
		{
			return count;
		}
		else{/*NOTHING*/}
	}
	return NOT_FOUND;
}
uint32 linearTwoside(uint32 AData[], uint32 Lingth, uint32 Value)
{
	uint32 left = 0;
	uint32 right = (Lingth - 1);
	for(left = 0; left < right;)
	{
		if(Value == AData[left])
		{
			return left;
		}
		else{/*NOTHING*/}
		if(Value == AData[right])
		{
			return right;
		}
		else{/*NOTHING*/}
		left++;
		right--;
	}
	return -1;
}
