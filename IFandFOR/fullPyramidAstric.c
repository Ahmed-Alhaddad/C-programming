/*****************************************
 *
 *@file   :  HIHP.c
 *@Brief  :  To print astrk as Full Pyramid
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
			printf("* ");
		}
		count++;
	printf("\n");
	}
	return 0;
}
/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed           21/Oct/2022    To print astrk as Full Pyramid

 *Ahmed Waheed           22/Oct/2022    change the solution from 3 calume to 2 calume and edite 					 same varuable name

 *****************************************************/
	
