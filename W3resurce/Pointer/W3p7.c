
/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a program in C to store n elements in an array and print the elements using a pointer.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
int arr[30];

int NumberOfArray;
int Counter;

/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/

/*************** Decleration section end *********************/



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
		
	}
	

	return 0;
}

/*************** Defenation Variable section start *********************/




/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            Write a program in C to store n elements in an array and print the elements using a pointer.
 *****************************************************/

