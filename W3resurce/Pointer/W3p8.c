/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a program in C to print all permutations of a given string using pointers
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
char GivenString[10];
char *PtrString = NULL;


/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/

/*************** Decleration section end *********************/

int main()
{
	int FCount = 0;
	int SCount = 0;
	printf("Please Enter your Data : ");
	scanf("%[^\n]", GivenString);
	PtrString = &GivenString[0];
	for(FCount = 0; FCount < 16; FCount++)
	{
		for(SCount = 0; SCount < 4; SCount++)
		{
			printf("%c", *PtrString);
			PtrString++;
		}
		
	}

	return 0;
}

/*************** Defenation Variable section start *********************/




/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            Write a program in C to print all permutations of a given string using pointers
 *****************************************************/

