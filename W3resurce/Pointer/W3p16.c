/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a program in C to compute the sum of all elements in an array using pointers
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/


/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/

/*************** Decleration section end *********************/

int main()
{
	int Elements[10];
	int *PtrElements = Elements;
	int NumOfElements = 0;
	int Count = 0;
	int Sum = 0;
	printf("Input the number of elements to store in the array (max 10) : ");
	scanf("%d", &NumOfElements);
	printf("Input %d number of elements in the array :\n", NumOfElements);
	for(Count = 0; Count < NumOfElements; Count++)
	{
		printf("element - %d : ", (Count + 1)); 
		scanf("%d", &Elements[Count]);
		
	}
	for(Count = 0; Count < NumOfElements; Count++)
	{
		Sum += *PtrElements;
		PtrElements++;
	}
	printf("The sum of array is : %d\n", Sum);
	return 0;
}

/*************** Defenation Variable section start *********************/




/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            Write a program in C to compute the sum of all elements in an array using pointers
 *****************************************************/

