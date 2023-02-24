/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to check whether a number is prime, Armstrong or perfect number using functions.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
int Number = 0;
int result = 0;
/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
int Prime(int Number);
int Armstrong(int Number);
int Perfect(int Number);
/*************** Decleration section end *********************/

int main()
{
	printf("Please Enter the Number : ");
	scanf("%d", &Number);
	result = Prime(Number);
	if(0 == result)
	{
		printf("%d is prime Number\n", Number);
	}
	else
	{
		printf("%d isn't prime Number\n", Number);
	}
	
	result = Armstrong(Number);
	if(0 == result)
	{
		printf("%d isn't Armstrong Number\n", Number);
	}
	else
	{
		printf("%d is Armstrong Number\n", Number);
	}
	
	result = Perfect(Number);
	if(0 == result)
	{
		printf("%d isn't Perfect Number\n", Number);
	}
	else
	{
		printf("%d is Perfect Number\n", Number);
	}
	
	return 0;
}

/*************** Defenation Variable section start *********************/
int Prime(int Number)
{
	int counter = 0;
	int flag = 0;
	for(counter = 2; counter < Number; counter++)
	{
		if(Number % counter == 0)
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
		}
	}
	return flag;
}

int Armstrong(int Number)
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
		return 1;
	}
	else
	{
		return 0;	
	}		
	
}

int Perfect(int Number)
{
	int counter = 0;
	int sum = 0;

	for(counter = 1; counter < Number; counter++)
	{
		
		if((Number % counter) == 0)
		{
			sum += counter;
		}
					
	}
	return (Number == sum);

}


/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            				Write a C program to check whether a number is prime, Armstrong or perfect number using functions.
 *****************************************************/

