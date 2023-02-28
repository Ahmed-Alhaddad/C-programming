/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to find reverse of any number using recursion.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/


/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
void Reverse(int Number, int Count);
/*************** Decleration section end *********************/

int main()
{
	int Number = 0;
	int Check = 0;
	int Test = 0;
	int Count = 0;
	printf("Please Input the Number To Reverse : ");
	scanf("%d", &Number);
	Test = Number;
	
	while(Number != 0)
	{
		Check = Number % 10;
		Number /= 10;
		Count++;

	}
	Number = Test;
	Reverse(Number, Count);


	return 0;
}

/*************** Defenation Variable section start *********************/


void Reverse(int Number, int Count)
{
	if(Count == 0)
	{
		printf("\n");
	}
	else
	{
		printf("%d ", Number % 10 );
		Reverse((Number / 10), --Count);
		
	}
	return ;
		
}

/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            			Write a C program to find reverse of any number using recursion.
 *****************************************************/

