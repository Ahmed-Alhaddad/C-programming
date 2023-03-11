/*****************************************
 *
 *@file   :  Write a program in C to print a string in reverse using a pointer.
 *@Brief  :   
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
#include <string.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/


/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/

/*************** Decleration section end *********************/

int main()
{
	char Word[50];
	char *PtrWord = Word;
	int Count = 0;
	printf("Input a String : ");
	scanf("%[^\n]", Word);
	Count = strlen(Word);
	PtrWord = &Word[Count];
	printf("Reverse : ");
	for(Count ; Count >=0; Count--) 
	{
		printf("%c", *PtrWord);				
   		PtrWord--;							
    } 										
    printf("\n");							
    return 0; 								
}     										
    					  					

/*************** Defenation Variable section start *********************/




/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            Write a program in C to print a string in reverse using a pointer.
 *****************************************************/
/*
Others w3resource
#include <stdio.h>
int main()
{
    char str1[50];
    char revstr[50];
    char *stptr = str1;
    char *rvptr = revstr;
    int i=-1;
 	printf("\n\n Pointer : Print a string in reverse order :\n"); 
	printf("------------------------------------------------\n");	
    printf(" Input a string : ");
    scanf("%s",str1);
    while(*stptr)
    {
     stptr++;
     i++;
    }
    while(i>=0)
    {
     stptr--;
     *rvptr = *stptr;
     rvptr++;
     --i;
    }
    *rvptr='\0';
    printf(" Reverse of the string is : %s\n\n",revstr);
    return 0;
}
*/
