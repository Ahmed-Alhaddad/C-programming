#include <stdio.h>
int arr[30];
/*int *Parr = arr;*/
int NumberOfArray;
int Counter;
int main()
{
	printf("Input the number of elements to store in the array :");
	scanf("%d", &NumberOfArray);
	printf("Input 5 number of elements in the array :\n");
	for(Counter = 0; Counter < NumberOfArray; Counter++)
	{
		printf("element - %d : ", Counter);
		scanf("%d", &arr[Counter]);
	}
	printf(" The elements you entered are :  \n");
	for(Counter = 0; Counter < NumberOfArray; Counter++)
	{
		printf("element - %d : %d\n", Counter, *(arr + Counter));
		//Parr++;
	}
	

	return 0;
}
