/*****************************************
 *
 *@file   :  
 *@Brief  :  Write a program in C to compare two strings without using string library functions.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
char FirstString[50];
char SecondString[50];
int count1 = 0;
int count2 = 0;
int CheckResult;
int CheckCompare;
int Counter = 0;
char check = 0;
/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
int CheckFunctionLength(char String1[], char String2[]);

/*************** Decleration section end *********************/

int main()
{
	printf("Check the length of two strings: \n");
	printf("-------------------------------------- \n");
	printf("Input the 1st string : ");
	scanf("%s", FirstString);
	printf("Input the 2nd string : ");
	scanf("%s", SecondString);
	printf("-------------------------------------- \n");
	CheckResult = CheckFunctionLength(FirstString, SecondString);
	if(CheckResult)
	{
		while(FirstString[Counter] != '\0')
		{
			if(FirstString[Counter] == SecondString[Counter])
			{
				Counter++;
			}
			else
			{
				check = 1;
				break;
			}
		}
		if(1 == check)
		{
			printf("FirstString  : %s \n", FirstString);
			printf("SecondSrting : %s \n", SecondString);
			printf("Strings are not equal.\n");
		}
		else
		{
			printf("FirstString : %s \n", FirstString);
			printf("SecondSrting : %s \n", SecondString);
			printf("Strings are equal.\n");
		}
			
		
	}
	else
	{
		printf("FirstString : %s \n", FirstString);
		printf("SecondSrting : %s \n", SecondString);
		printf("Strings are not equal.\n");
	}
	
	
	return 0;
}

/*************** Defenation Variable section start *********************/
int CheckFunctionLength(char String1[], char String2[])
{
	while(String1[count1] != '\0')
	{
		count1++;
	}
	while(String2[count2] != '\0')
	{
		count2++;
	}
	if(count1 == count2)
	{
		return 1;
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
 *Ahmed Waheed                 Write a program in C to compare two strings without using string library functions.
 *****************************************************/

