/*****************************************
 *
 *@file   :  
 *@Brief  :   C library function - memchr()
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
#include <string.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
unsigned char Data[100];
unsigned int Length = 0;
char point = 0;

/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
void *My_memchr(const void *str, unsigned char c, unsigned int n);
/*************** Decleration section end *********************/

int main()
{
	unsigned char *check = NULL;
	printf("\nPlease Enter the point to begin with : ");
	scanf("%c", &point);
	
	printf("Please Enter the Data : ");
	scanf("%s",Data);
	
	
	
	check = My_memchr(&Data, point, strlen(Data));
	if(NULL == &check)
	{
		printf("WOW Error \n");
	}
	else
	{
		
		
			printf("%s\n", check);
			
		
		
	}

	return 0;
}

/*************** Defenation Variable section start *********************/
void *My_memchr(const void *str, unsigned char c, unsigned int n)
{
	unsigned char *Temp = (unsigned char *)str;
	unsigned char *TempR =NULL;
	
	if(NULL == Temp)
	{
		printf("There is NULL");
	}
	else
	{
		while(n)
		{
			if(*Temp == c)
			{
				return Temp;
				break;
			}	
			else
			{
				Temp++;
				n--;
			}
		}
	}
			
			
	
}



/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            				C library function - memchr()
 *****************************************************/

