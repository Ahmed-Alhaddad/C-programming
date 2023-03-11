/*****************************************
 *
 *@file   :  
 *@Brief  :    Write a program in C to print the elements of an array in reverse order.
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
	int Element[15];
	int *PtrElement = &Element[0];
	int NumElement = 0;
	int Count = 0;
	
	printf("Input the number of elements to store in the array (max 15) : ");
	scanf("%d", &NumElement);
	printf("Input %d number of elements in the array : \n", NumElement);
	for(Count = 0; Count < NumElement; Count++)
	{
		printf("element - %d : ", (Count + 1));
		scanf("%d", PtrElement);
		PtrElement++;
	}
	PtrElement = &Element[NumElement - 1];
	printf("The elements of array in reverse order are : \n");
	for(Count = NumElement ; Count > 0 ; Count--)
	{
		printf("element - %d : %d\n", Count, *PtrElement);
		PtrElement--;
	}
		
	return 0;
}

/*************** Defenation Variable section start *********************/




/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed             Write a program in C to print the elements of an array in reverse order.
 *****************************************************/

