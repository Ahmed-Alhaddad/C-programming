/*****************************************
 *
 *@file   :  HFPN.c
 *@Brief  :  Hollow Full Pyraimd numbers   
     1 
    1 2 
   1   3 
  1     4 
 1 2 3 4 5 

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
	unsigned char count = 1;
/*************** Globel Variable section end *********************/

int main()
{
	for(raw = 5; raw >= 1; raw--)
	{
		for(cal1 = 1; cal1 <= raw ; cal1++)
		{
			printf(" ");
		}
		for(cal2 = 1; cal2 <= count; cal2++)
		{
			if(cal2 == 1)
			{
				printf("%i ", cal2);
			}
			else if((raw == 1) || (cal2 == count))
			{
				printf("%i ",cal2);
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
 *Ahmed Waheed           7/Oct/2022           To print Hollow Full Pyraimd numbers .
 *****************************************************/
	
