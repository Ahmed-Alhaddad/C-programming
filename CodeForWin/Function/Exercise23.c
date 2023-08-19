/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to find sum of elements of array using recursion.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/


/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
int Sum_Of_Elem(int arr[], int start, int Length);
/*************** Decleration section end *********************/

int main()
{
	int start = 0;
	int Length = 3;
	int array[30];
	int i = 0;
	int Result = 0;
	for(i=0; i < Length;i++)
		scanf("%d", &array[i]);
		
	Result = Sum_Of_Elem(array, start, Length);
	printf("%d \n", Result);

	return 0;
}

/*************** Defenation Variable section start *********************/
int Sum_Of_Elem(int arr[], int start, int Length)
{
	if(start < Length)
	{
		return arr[start] + Sum_Of_Elem(arr, (start + 1), Length);
	}
	else
	{
		return 0;
	}
}



/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            Write a C program to find sum of elements of array using recursion.
 *****************************************************/

