/*****************************************
 *
 *@file   :  W3S5.c
 *@Brief  :  Write a program in C to count the total number of words in a string. 
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
char Word[50];
int count = 0;


/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/

/*************** Decleration section end *********************/

int main()
{
	printf("please Input the string: ");
	scanf("%[^\n]",Word);
	while(Word[count] != '\0')
	{
		count++;
	}
	printf("Total number of words in the string is : %i\n",count);
	


	return 0;
}

/*************** Defenation Variable section start *********************/




/***************Defination Variable section end *********************/

/**************************************************
 *User               Date                Brief
 **************************************************
 *Ahmed Waheed            	Write a program in C to count the total number of words in a string. 
 *****************************************************/

