/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to find sum of all even or odd numbers in given range using recursion.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/

/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
int odd(int Number, int Limit);
int even(int Number, int Limit);
/*************** Decleration section end *********************/

int main()
{
	int Number = 0;
	int Limit = 0;
	printf("Please Enter The Start Number : "); 
	scanf("%d", &Number);
	printf("Please Enter The Limit Number : "); 
	scanf("%d", &Limit);
	if(Number % 2 != 0)
	{
		printf("Sum Odd : %d\n", odd(Number, Limit));
	}
	else
	{
		printf("Sum Odd : %d\n", odd((Number + 1), Limit));
	}
	if(Number % 2 == 0)
	{
		printf("Sum Odd : %d\n", even(Number, Limit));
	}
	else
	{
		printf("Sum Even : %d\n", even((Number + 1), Limit));
	}
	

	return 0;
}

/*************** Defenation Variable section start *********************/
int odd(int Number, int Limit)
{
	if((Number > Limit))
	{
		return 0;
	}
	else
	{
		return Number + odd(Number + 2, Limit); 
	}
	
}

int even(int Number, int Limit)
{
	if(Number > Limit)
	{
		return 0;
	}
	else
	{
		return Number + even(Number+2, Limit); 
	}
	 
}

/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            			Write a C program to find sum of all even or odd numbers in given range using recursion.
 *****************************************************/

