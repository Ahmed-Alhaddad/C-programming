/*****************************************
 *
 *@file   :  PyramidNumberAstric.c
 *@Brief  :  
 		To print    ********1********
					*******2*2*******
					******3*3*3******
					*****4*4*4*4*****
					****5*5*5*5*5****

 *@Auther :  Ahmed Waheed
 *****************************************
 */
/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/
/*************** Globel Variable section start *******************/

unsigned char raw;
unsigned char cal1;



/*************** Globel Variable section end *********************/

int main()
{
	unsigned char count_1 = 0;
	unsigned char count_2 = 0;
	unsigned char count = 18;
	
	count_1 = (count / 2);
	count_2 = (count / 2);
	for(raw = 1; raw <= 5; raw++)
	{
		for(cal1 = 1; cal1 < count; cal1++)
		{
			
			if(raw % 2 != 0)
			{
				if((cal1>= count_1) && (cal1<=count_2) && (cal1 % 2 != 0))
				{
					printf("%i", raw);
				}
				else
				{
					printf("*");
				}
			}
			else if(raw % 2 == 0)
			{
				if((cal1 >= count_1) && (cal1 <= count_2) && (cal1 % 2 == 0))
				{
					printf("%i", raw);
				}
				else
				{
					printf("*");
				}
			}
			else
			{
				printf("*");
			}
	
		}
			count_1--;
			count_2++;
			
		
		printf("\n");
	}
	
	return 0;
}
/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed           9-Dec-2022          To print       ********1********
															*******2*2*******
															******3*3*3******
															*****4*4*4*4*****
															****5*5*5*5*5****
 *****************************************************/
	
