/*****************************************
 *
 *@file   :  
 *@Brief  :    Write a program in C to find the factorial of a given number using pointers. 
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
int *Fact = NULL;


/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/

/*************** Decleration section end *********************/

int main()
{
	int Number = 0;
	int Count = 0;
	int FNum = 1;
	printf("Input a number : ");
	scanf("%d", &Number);
	Fact = &FNum;
	
	for(Count = 1; Count <= Number; Count++)
	{	
		*Fact = *Fact * Count;
	}	
	printf("Total : %d\n", *Fact);

	return 0;
}

/*************** Defenation Variable section start *********************/




/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed             Write a program in C to find the factorial of a given number using pointers. 
 *****************************************************/

