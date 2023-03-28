/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to find sum of digits of a given number using recursion.
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
int Sum(int);
/*************** Decleration section end *********************/

int main()
{
	int Number = 0;
	int Result = 0;
	printf("Please Input the Number : ");
	scanf("%d", &Number);
	Result = Sum(Number);
	printf("Sum = %d\n", Result);

	return 0;
}

/*************** Defenation Variable section start *********************/
int Sum(int a)
{
		check = a;
		if(a != 0)
		{
			return ((a = check % 10) + Sum(check = check/10));
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
 *Ahmed Waheed            Write a C program to find sum of digits of a given number using recursion.
 *****************************************************/

