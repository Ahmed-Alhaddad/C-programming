/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to find maximum and minimum elements in array using recursion.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/


/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
int Max_Number(int arr[], int i,int length);
/*************** Decleration section end *********************/

int main()
{
	int array[30];
	int result1 = 0;
	int result2 = 0;
	int n = 0;
	int i = 0;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	result1 = Max_Number(&array[0],0,n);
	printf("Max = %d \n", result1);
	return 0;
}
/*************** Defenation Variable section start *********************/
int Max_Number(int arr[], int i,int length)
{
	if(i < length)
	{
		if(arr[0] < arr[i])
		{
			arr[0] = arr[i];
		}
		
		Max_Number(arr, (i+1),length);			
	}
	return arr[0];
}


/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            Write a C program to find maximum and minimum elements in array using recursion.
 *****************************************************/

