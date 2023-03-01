/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to find all prime numbers between given interval using functions.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/


/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
int Prime(int Number);
void Print(int NumberFirst, int NumberSecond);
/*************** Decleration section end *********************/

int main()
{
	int NumberFirst = 0;
	int NumberSecond = 0;
	printf("First Number : ");
	scanf("%d", &NumberFirst);
	printf("Second Number : ");
	scanf("%d", &NumberSecond);
	printf("Prime Numbers between %d and %d are : ", NumberFirst, NumberSecond);
	Print(NumberFirst ,NumberSecond);
	printf("\n");

	return 0;
}

/*************** Defenation Variable section start *********************/
void Print(int NumberFirst, int NumberSecond)
{
	while(NumberFirst <= NumberSecond)
	{
		if(0 == Prime(NumberFirst))
		{
			printf("%d, ", NumberFirst);
		}
		else
		{
			
		}
		NumberFirst++;
		
	}

}
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

/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            			Write a C program to find all prime numbers between given interval using functions.
 *****************************************************/

