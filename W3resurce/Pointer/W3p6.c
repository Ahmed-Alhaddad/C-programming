
/*****************************************
 *
 *@file   :  
 *@Brief  :    Write a program in C to find the maximum number between two numbers using a pointer.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
int num1;
int num2;
int *Pnum1 = &num1;
int *Pnum2 = &num2;


/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/

/*************** Decleration section end *********************/

int main()
{
	
	printf("Input the first number : ");
	scanf("%d", Pnum1);
	printf("Input the second number : ");
	scanf("%d", Pnum2);

	if(*Pnum1 > *Pnum2)
	{
		printf("%d is the macximum number.", *Pnum1);
	}
	else
	{
		printf("%d is the macximum number.", *Pnum2);
	}	
		


	return 0;
}

/*************** Defenation Variable section start *********************/




/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed             Write a program in C to find the maximum number between two numbers using a pointer.
 *****************************************************/

