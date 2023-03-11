/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to demonstrate how a function returns a pointer.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/


/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
int *demonstrate(int *, int *);
/*************** Decleration section end *********************/

int main()
{
	int Number_1 = 0;
	int Number_2 = 0;
	int *Result = 0;
	printf("input the first number : ");
	scanf("%d", &Number_1);
	printf("input the second number : ");
	scanf("%d", &Number_2);
	Result = demonstrate(&Number_1, &Number_2);
	printf("The Number %d is lager \n", *Result);
	return 0;
}

/*************** Defenation Variable section start *********************/
int *demonstrate(int *Num_1, int *Num_2)
{
	return (*Num_1 > *Num_2 ? Num_1 : Num_2) ;
}


/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            Write a C program to demonstrate how a function returns a pointer.
 *****************************************************/

