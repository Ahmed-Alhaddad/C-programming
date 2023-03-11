
/*****************************************
 *
 *@file   :  
 *@Brief  :    Write a program in C to add two numbers using pointers
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

	printf("Test Data:\n");
	printf("Input the first Number :");
	scanf("%d", &num1);
	printf("\nInput the first Number :");
	scanf("%d", &num2);
	printf("The Sum of the entered number is : %d \n", (*Pnum1 + *Pnum2));



	return 0;
}

/*************** Defenation Variable section start *********************/




/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed             Write a program in C to add two numbers using pointers
 *****************************************************/

