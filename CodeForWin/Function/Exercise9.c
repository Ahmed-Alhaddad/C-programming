/*****************************************
 *
 *@file   :  
 *@Brief  :  Write a C program to print all perfect numbers between given interval using functions.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
int FiretNumber = 0;
int SecondNumber = 0;
int result = 0;
/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/

int Perfect(int Number);
/*************** Decleration section end *********************/

int main()
{
	int i = 0;
	printf("Please Enter the Firet Number : ");
	scanf("%d", &FiretNumber);
	printf("Please Enter the Second Number : ");
	scanf("%d", &SecondNumber);
	for(i = FiretNumber; i < SecondNumber; i++)
	{
		result = Perfect(i);
		if(0 != result)
		{
			printf("%d is Perfect Number\n", i);
		}
		else
		{
			
		}
	}
	return 0;
}

/*************** Defenation Variable section start *********************/

int Perfect(int Number)
{
	int counter = 0;
	int sum = 0;

	for(counter = 1; counter < Number; counter++)
	{
		
		if((Number % counter) == 0)
		{
			sum += counter;
		}
					
	}
	return (Number == sum);

}


/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            				Write a C program to print all perfect numbers between given interval using functions.
 *****************************************************/

