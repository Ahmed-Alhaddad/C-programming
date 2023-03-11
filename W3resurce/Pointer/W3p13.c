/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a program in C to count the number of vowels and consonants in a string using a pointer.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
#include <string.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
char Word[100] ;
	int CountWord = 0;
	char *PtrWord = Word;


	int countConstant = 0;
	int countSpace = 0;

/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/

/*************** Decleration section end *********************/

int main()
{
	
	printf("Input a string : ");
	scanf("%[^\n]", Word);

	while(*PtrWord != '\0')
	{
		if(*PtrWord == 'o' || *PtrWord == 'O' || *PtrWord == 'A' || *PtrWord == 'a' || *PtrWord == 'e' || *PtrWord == 'E' || *PtrWord == 'U' || *PtrWord == 'u' || *PtrWord == 'i' || *PtrWord == 'I')
		{
			countVowels++;
		}
		else if(*PtrWord == ' ')
		{
			countSpace++;
		}
		else
		{
			countConstant++;
		}
		PtrWord++;
	}
	printf("countVowels : %d \ncountConstant : %d \n", countVowels, countConstant);

	return 0;
}

/*************** Defenation Variable section start *********************/




/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            Write a program in C to count the number of vowels and consonants in a string using a pointer.
 *****************************************************/

