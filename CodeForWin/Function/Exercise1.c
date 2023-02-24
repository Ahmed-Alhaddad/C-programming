/*****************************************
 *
 *@file   :  Exercise1.c
 *@Brief  :   Write a C program to find cube of any number using function.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
int Number;

/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
int Cube(int number);
/*************** Decleration section end *********************/

int main()
{
	int Result = 0;
	printf("Please Enter the number : ");
	scanf("%i", &Number);
	Result = Cube(Number);
	printf("The Cube of %i : %i\n", Number, Result);


	return 0;
}

/*************** Defenation Variable section start *********************/
int Cube(int number)
{
	return (number * number * number);
	
}
	



/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            			Write a C program to find cube of any number using function.
 *****************************************************/

