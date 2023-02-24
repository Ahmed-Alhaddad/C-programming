/*****************************************
 *
 *@file   :  W3S7.c
 *@Brief  :   Write a program in C to count total number of alphabets, digits and special characters in a string
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
char String[50];
int CountLength = 0;
int CountAlphabets = 0;
int CountDigits = 0;
int CountSpecial = 0;
/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/

/*************** Decleration section end *********************/

int main()
{
	printf("Input the string :");
	scanf("%s", String);
	while(String[CountLength] != '\0')
	{
		if((String[CountLength] >= 'a' && String[CountLength] <= 'z') || (String[CountLength] >= 'A' && String[CountLength] <= 'Z') )
		{
			CountAlphabets++;
		}
		else if((String[CountLength] >= '0' && String[CountLength] <= '9') )
		{
			CountDigits++;
		}
		else
		{
			CountSpecial++;
		}
		CountLength++;
	}
	printf("Number of Alphabets in the string is          : %i\n", CountAlphabets);
	printf("Number of Digits in the string is   	  : %i\n", CountDigits);
	printf("Number of Special characters in the string is :  %i\n", CountSpecial);


	return 0;
}

/*************** Defenation Variable section start *********************/




/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            				Write a program in C to count total number of alphabets, digits and special characters in a string
 *****************************************************/

