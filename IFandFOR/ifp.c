/*****************************************
 *
 *@file   :  HIHP.c
 *@Brief  :  To print astrk as Inverted Full Pyramid
 *@Auther :  Ahmed Waheed
 *****************************************
 */
/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/
/*************** Globel Variable section start *******************/
	unsigned char raw=0;
	unsigned char cal=0;	
	unsigned char count=1; /*counter for astric from 6 to 1*/
	unsigned char cal2=0;	
/*************** Globel Variable section end *********************/

int main()
{

	
	for(raw=1; raw<=6; raw++)
	{
		for(cal=1; cal<=raw ; cal++) /*first culume to create space */
		{
			printf(" ");	
		}
		for(cal2=6; cal2>=count; cal2--) /*another calume to create astric inverred pyramid*/
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
 *Ahmed Waheed           22/Oct/2022    To print astrk as Inverted Full Pyramid

 *****************************************************/
	
