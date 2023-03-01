/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to print all strong numbers between given interval using functions.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/


/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
int Prime(int Number);
void Print(int NumberFirst, int NumberSecond);
int Stronge(int Number);
/*************** Decleration section end *********************/

int main()
{
	int NumberFirst = 0;
	int Result = 0;
	int NumberSecond = 0;
	printf("First Number : ");
	scanf("%d", &NumberFirst);
	printf("Second Number : ");
	scanf("%d", &NumberSecond);
	printf("Prime Numbers between %d and %d are : \n", NumberFirst, NumberSecond);

	for(int i = NumberFirst; i < NumberSecond; i++)
	{
		Result = Stronge(i);
		if(i == Result)
		{
			
			printf("Yes : %d\n", Result);
		}
		else
		{
		
		}
	}
	return 0;
}

/*************** Defenation Variable section start *********************/

int Stronge(int Number)
{
	int Count = 0;
	int check = Number;
	int sum = 0;
	int Test = Number;
	int i = 0;
	int Mult = 1;
	while(Test != 0)
	{
		Test = Number / 10;
		Number = Test % 10;
		
		Count++;
	}

	Number = check;
	Test = Number;
	
	while(Test != 0)
	{
		Mult = 1;
		Number = Test % 10;
			
		while(Number != 0)
		{
			Mult *= Number;
			Number--;
		}
		Test = Test / 10;
		
		sum += Mult;
	}
	
	
	return sum;
}

/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            			Write a C program to print all strong numbers between given interval using functions.
 *****************************************************/

