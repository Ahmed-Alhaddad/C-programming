/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to print all Armstrong numbers between given interval using functions.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
int FirstNumber = 0;
int LastNumber = 0;
int result = 0;
/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/

int Armstrong(int Number);
/*************** Decleration section end *********************/

int main()
{
	int i = 0;
	printf("Please Enter the First Number  : ");
	scanf("%d", &FirstNumber);
	printf("Please Enter the Last Number  : ");
	scanf("%d", &LastNumber);
	for(i = FirstNumber; i < LastNumber; i++)
	{
		result = Armstrong(i);
		if(0 == result)
		{
			printf("%d is Armstrong Number\n", i);
		}
		else
		{
			
		}
	}
	
	return 0;
}

/*************** Defenation Variable section start *********************/

int Armstrong(int Number)
{
	if(Number > 1 && Number < 10)
	{
		return 1;
	}
	else
	{
		int Power = 0;
		int flag = 0;
		int counter = 0;
		int Test = Number;
		int check = 0;
		int check1 = 1;
		int sum = 0;
		while(Test)
		{
			Test = Test / 10;
			Power++;
		}
		Test = Number;
		while(Test)
		{
			check = Test;
			check %= 10;
			for(counter = 0; counter < Power; counter++)
			{
				check1 *= check;
				
			}
			
			sum += check1;
			Test = Test / 10;
			check1=1;
		}
		if(sum == Number)
		{
			return 0;
		}
		else
		{
			return 1;	
		}		
	}
}

/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            				Write a C program to print all Armstrong numbers between given interval using functions.
 *****************************************************/

