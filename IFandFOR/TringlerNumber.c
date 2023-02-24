/*****************************************
 *
 *@file   :  TringlerNumber.c
 *@Brief  :  To Print
 
							  1 
							1 2 1 
						  1 2 3 2 1 
						1 2 3 4 3 2 1 
					  1 2 3 4 5 4 3 2 1 

 *@Auther :  Ahmed Waheed
 *****************************************
 */
/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/
/*************** Globel Variable section start *******************/
unsigned char raw;
unsigned char cal1;
unsigned char cal2;
unsigned char cal3;
unsigned char Number;
/*************** Globel Variable section end *********************/

int main()
{
	printf("Please Enter The Number You want:");
	scanf("%i",&Number);
	for(raw = Number; raw >= 1; raw--)
	{
		for(cal1 = raw; cal1 >= 1; cal1--)
		{
			printf("  ");
		}
		for(cal2 = 1; cal2 <= ((Number + 1) - raw); cal2++)
		{
			printf("%i ", cal2);
		}
		for(cal3 = (Number - raw); cal3 >= 1; cal3--)
		{
			printf("%i ", cal3);
		}
		printf("\n");
	}
			
	return 0;
}
/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed 			4/Dec/2022			 To Print
 
													  1 
													1 2 1 
												  1 2 3 2 1 
												1 2 3 4 3 2 1 
											  1 2 3 4 5 4 3 2 1 
 *****************************************************/
	
