/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to find factorial of any number using recursion.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/

/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
int Factorial(int);
/*************** Decleration section end *********************/

int main()
{
	int Number = 0;
	int Result = 0;
	printf("Please Input the Number : ");
	scanf("%d", &Number);
	Result = Factorial(Number);
	printf("Factorial = %d\n", Result);

	return 0;
}

/*************** Defenation Variable section start *********************/
int Factorial(int a)
{
		
		if(a > 0)
		{
			return ( a * Factorial( a - 1 ));
		}
		else 
		{
			return 1;
		}
		
}




/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            Write a C program to find factorial of any number using recursion.
 *****************************************************/

