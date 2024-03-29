/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to generate nth Fibonacci term using recursion.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
int check;

/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
int Fibonacci( int, int );
/*************** Decleration section end *********************/

int main()
{
	int F = 0;
	int L = 0;
	int Result = 0;
	printf("Please Input the Number : ");
	scanf("%d", &L);
	Result = Fibonacci(F, L);
	printf("Fibonacci = %d\n", Result);

	return 0;
}

/*************** Defenation Variable section start *********************/
int Fibonacci(int a, int b)
{
		
		if(a <= b)
		{
			return ((a + 1) + Fibonacci((a + 2) , b));
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
 *Ahmed Waheed            Write a C program to generate nth Fibonacci term using recursion.
 *****************************************************/

