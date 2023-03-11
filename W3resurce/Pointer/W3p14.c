/*****************************************
 *
 *@file   :  
 *@Brief  :   
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
	int Numbers[50] ;
	int *PtrNumbers = Numbers;
	int Elements = 0;
	printf("Please Enter the Number of Elements : ");
	scanf("%d", &Elements);
	int Count = 0;
	int Temp = 0;
	for(Count = 0; Count < Elements; Count++)
	{
		printf("element - %d : ", (Count + 1));
		scanf("%d", &Numbers[Count]);
	}
	Temp = Numbers[0];
	printf("\n");
	for(Count = 1; Count < Elements; Count++)
	{
		if(Temp > Numbers[Count])
		{
			Numbers[Count - 1] = Temp;
			Temp = Numbers[Count];
		}
	}
	for(Count = 0; Count < Elements; Count++)
	{
		printf("element - %d : %d \n", (Count + 1), *(PtrNumbers + Count));
	}
	return 0;
}

/*************** Defenation Variable section start *********************/




/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            
 *****************************************************/
