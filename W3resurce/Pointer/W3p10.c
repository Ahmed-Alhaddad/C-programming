/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a program in C to calculate the length of a string using a pointer.
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
	char *Length = NULL;
	char String[100] = "w3resource";
	int Count = 0;
	Length = String;
	while(*Length++ != '\0')
	{
		Count++;
	}
	printf("The Length of the given string w3resurce is : %d \n", Count);
	

	return 0;
}

/*************** Defenation Variable section start *********************/




/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            Write a program in C to calculate the length of a string using a pointer.
 *****************************************************/

