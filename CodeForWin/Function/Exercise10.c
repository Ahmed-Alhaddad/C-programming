/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to find power of any number using recursion.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
static int Counter = 1;

/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
double Power(double Number, int base);
/*************** Decleration section end *********************/

int main()
{
	double Number = 0;
	int base = 0;
	printf("Please Enter The Power : ");
	scanf("%d", &base);
	printf("Please Enter The Number : ");
	scanf("%lf", &Number);
	printf("%.2lf ^ %d = %.2lf \n",Number, base, Power(Number, base));
	


	return 0;
}

/*************** Defenation Variable section start *********************/
double Power(double Number, int base)
{
	
	if(base == 0)
	{
		return 1;
	}
	else if(Number == 0)
	{
		return 0;
	}
	else
	{
		return Number * Power(Number, --base);
		
	}
}



/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            				Write a C program to find power of any number using recursion.
 *****************************************************/

