/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to find GCD (HCF) of two numbers using recursion.
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
int GCD(int, int);
/*************** Decleration section end *********************/

int main()
{
	int num1 = 0;
	int num2 = 0;
	int Result = 0;
	
	printf("Please Input the Number 1 : ");
	scanf("%d", &num1);
	printf("Please Input the Number 2 : ");
	scanf("%d", &num2);
	
	Result = GCD(num1, num2);
	printf(" num1 : %i\n num2 : %i\n GCD = %d\n ", num1, num2, Result);

	return 0;
}

/*************** Defenation Variable section start *********************/
int GCD(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return GCD(b, (a%b));
	}
	
	 
}




/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed         Write a C program to find GCD (HCF) of two numbers using recursion.
 *****************************************************/

