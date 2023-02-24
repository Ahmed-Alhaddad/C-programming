/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to check whether a number is even or odd using functions.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
int Number;
int Result;

/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
int Check(int Number);
/*************** Decleration section end *********************/

int main()
{
	
	
	printf("Please Enter the number : ");
	scanf("%d", &Number);
	
	Result = Check(Number); 
	if(0 == Result)
	{
		printf("%d is even Number\n", Number);
	}
	else if(1 == Result)
	{
		printf("%d is odd Number\n", Number);
	}
	else
	{
		printf("Error\n");
	}
	return 0;
}

/*************** Defenation Variable section start *********************/
int Check(int Number)
{
	if(Number % 2 == 0)
	{
		return 0;
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
 *Ahmed Waheed            				Write a C program to check whether a number is even or odd using functions.
 *****************************************************/

