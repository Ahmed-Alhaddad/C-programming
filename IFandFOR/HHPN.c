/*****************************************
 *
 *@file   : HPN.c (Half Prymaid Number) 
 *@Brief  :  To print Hollow Half Pyramid Number
 *@Auther :  Ahmed Waheed
 *****************************************
 */
/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/
/*************** Globel Variable section start *******************/
unsigned char raw = 0;
unsigned char cal = 0;

/*************** Globel Variable section end *********************/

int main()
{
	for(raw = 1; raw <= 5; raw++)
	{
		for(cal = 1; cal <= raw; cal++)
		{
			if((cal < raw) && (cal > 1) && (raw >2) && (raw < 5) )
			{
				printf("  ");
			}
			else
			{
				printf("%i ",cal);
			}	
		}
		count++;
		printf("\n");
	}

	return 0;
}
/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed           31/Oct/2022          To print Hollow Half Pyramid Number
 *****************************************************/
	
