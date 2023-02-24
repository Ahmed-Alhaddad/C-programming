/*****************************************
 *
 *@file   :  HIHP.c
 *@Brief  :  To print astrk as Hollow Full Pyramid
 *@Auther :  Ahmed Waheed
 *****************************************
 */
/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/
/*************** Globel Variable section start *******************/
	unsigned char raw=0;
	unsigned char cal=0;	
	unsigned char count=1; /*counter for astric from 1 to 6*/
	unsigned char cal2=0;	
/*************** Globel Variable section end *********************/

int main()
{

	
	for(raw=6; raw>=1; raw--)
	{
		for(cal=1; cal<=raw ; cal++) /*first culume to create space */
		{
			printf(" ");	
		}
		for(cal2=1; cal2<=count; cal2++) /*another calume to create astric pyramid*/
		{
			if(1==cal2 || count==cal2 || 1==raw)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
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
 *Ahmed Waheed           23/Oct/2022    To print astrk as Hollow Full Pyramid
 *****************************************************/
	
