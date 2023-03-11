/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a program in C to print all the alphabets using a pointer.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/


/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/

/*************** Decleration section end *********************/

int main()
{
	char Alphabets[26];
	char *PtrAlphabets = Alphabets;
	int Count = 0;
	for(Count = 0; Count < 26; Count++)
	{
		*PtrAlphabets = 'A' + Count;
		PtrAlphabets++;
	}
	PtrAlphabets = (PtrAlphabets - 26);
	for(Count = 0; Count < 26; Count++)
	{
		printf(" %c ", *PtrAlphabets);
		PtrAlphabets++;
	}
	
	

	return 0;
}

/*************** Defenation Variable section start *********************/




/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            Write a program in C to print all the alphabets using a pointer.
 *****************************************************/

