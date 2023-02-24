/*****************************************
 *@file   :  invertedhalfpyramid.c
 *@Auther :  Ahmed Waheed
 *@Brief  :  To print astrk of inverted half Pyrmid
 *****************************************
 */
/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/
/*************** Globel Variable section start *******************/
	unsigned char raw=0;
	unsigned char cal=0;
/*************** Globel Variable section end *********************/

int main()
{
	unsigned char raw=0;
	unsigned char cal=0;
	for(raw=1;raw<=6;raw++)
	{
		for(cal=6;cal>=raw;cal--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed           21/Oct/2022         print astrk of inverted half pyramid
 *
 *
 *
 */
	
