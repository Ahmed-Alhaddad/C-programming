/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to print all even or odd numbers in given range using recursion.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
int n = 0;
int m = 0;
/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
void odd(int ,int);
void even(int ,int);
/*************** Decleration section end *********************/

int main()
{
	scanf("%d", &n);
	scanf("%d", &m);
	odd(n, m);
	printf("\n");
	return 0;
}

/*************** Defenation Variable section start *********************/
void odd(int n, int m)
{
	
	if(n <= m)
	{
		printf("Even: %d \n", n+1);
		even(++n, m);
	}
	return ;
}

void even(int n, int m)
{
		
	if(n <= m)
	{
		printf("Odd: %d \n", n-1);
		odd(++n , m);
	}
	return ;
}



/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            				Write a C program to print all even or odd numbers in given range using recursion.
 *****************************************************/

