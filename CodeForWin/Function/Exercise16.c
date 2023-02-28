/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to check whether a number is palindrome or not using recursion.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/


/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
int ReverseFirst(int NumberFirst, int Count1);
int ReverseSecond(int NumberSecond, int Count2);
/*************** Decleration section end *********************/

int main()
{
	int NumberFirst = 0;
	int NumberSecond = 0;
	int Check1 = 0;
	int Check2 = 0;
	int Test = 0;
	int Count1 = 0;
	int Count2 = 0;
	int Result1 = 0;
	int Result2 = 0;
	printf("Please Input the First Number To Reverse : ");
	scanf("%d", &NumberFirst);
	printf("Please Input the Second Number To Reverse : ");
	scanf("%d", &NumberSecond);
	Test = NumberFirst;
	
	while(NumberFirst != 0)
	{
		Check1 = NumberFirst % 10;
		NumberFirst /= 10;
		Count1++;

	}
	NumberFirst = Test;
	Test = NumberSecond;
	
	while(NumberSecond != 0)
	{
		Check2 = NumberSecond % 10;
		NumberSecond /= 10;
		Count2++;

	}
	NumberSecond = Test;
	if(Count1 == Count2)
	{
		Result1 = ReverseFirst(NumberFirst, Count1);
		Result2 = ReverseSecond(NumberSecond, Count2);
		printf("%d", Result2 );
		if(Result1 == Result2)
		{
			printf(":/");
		}
		else
		{
			printf(":");
		}
	}
	
	return 0;
}

/*************** Defenation Variable section start *********************/

int ReverseFirst(int NumberFirst, int Count1)
{
	if(Count1 == 0)
	{
		printf("\n");
	}
	else
	{
		printf("%d", NumberFirst % 10 );
		return ReverseFirst((NumberFirst / 10), --Count1);
	}
}

int ReverseSecond(int NumberSecond, int Count2)
{
	if(Count2 == 0)
	{
		printf("\n");
	}
	else
	{
		printf("%d", NumberSecond % 10 );
		return ReverseSecond((NumberSecond / 10), --Count2);
	}
}

/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            			Write a C program to check whether a number is palindrome or not using recursion.
 *****************************************************/

