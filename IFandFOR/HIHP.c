/*****************************************
 *
 *@file   :  HIHP.c
 *@Brief  :  To print astrk as Hollow Inverted Half Pyramid
 *@Auther :  Ahmed Waheed
 *****************************************
 */
/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/
/*************** Globel Variable section start *******************/
	unsigned char raw=0;
	unsigned char cal=0;
	unsigned char count=5; /*for line right*/
	
/*************** Globel Variable section end *********************/

int main()
{

	
	for(raw=1; raw<=6; raw++)
	{
		printf("* ");
		for(cal=1; cal<6; cal++)
		{
			if(1 == raw || cal==count )
			{
			    printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		count--;
		printf("\n");
	}
	return 0;
}
/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed           21/Oct/2022    To print astrk as Hollow Inverted Half Pyramid
 *
 *****************************************************/
	
