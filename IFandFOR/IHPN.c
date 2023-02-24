/*****************************************
 *@file   :  IHPN.c
 *@Auther :  Ahmed Waheed
 *@Brief  :  To print inverted half Pyrmid Number
 *****************************************
 */
/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/
/*************** Globel Variable section start *******************/
	unsigned char raw=0;
	unsigned char cal=0;
	unsigned char count=1;
/*************** Globel Variable section end *********************/

int main()
{
	for(raw=1;raw<=5;raw++)
	{
		for(cal=5;cal>=raw;cal--)  
		{
			printf("%i ", count);
			count++;
		}
		count=1;
		printf("\n");
	}
	return 0;
}
/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed           28/Oct/2022         To print inverted half Pyrmid Number
 *
 *
 *
 */
	
