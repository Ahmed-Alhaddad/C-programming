/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to find sum of all natural numbers between 1 to n using recursion.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/


/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
int Sum(int Number);
/*************** Decleration section end *********************/

int main()
{
	int Number = 0;
	printf("Please enter the Number : ");
	scanf("%d", &Number);
	printf("Sum of all natural numbers between 1 to %d = %d\n", Number, Sum(Number)); 


	return 0;
}

/*************** Defenation Variable section start *********************/
int Sum(int Number)
{
	if(1 == Number)
	{
		return 1;
	}
	else
	{
		return Number + Sum(Number - 1);
	}
}



/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            				Write a C program to find sum of all natural numbers between 1 to n using recursion.
 *****************************************************/

