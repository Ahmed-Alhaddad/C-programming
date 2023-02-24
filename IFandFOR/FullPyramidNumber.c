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
	unsigned char raw;
	unsigned char cal;	
	unsigned char countOne = 1; /*counter for astric from 1 to 5*/
	unsigned char cal2;
	unsigned char CopyCal2; /*Copy the number calume Two To this varible to using on calume Three*/	
	unsigned char countThree; /*count cal2*/
	unsigned char cal3;	
    unsigned char countTwo = 5; /*Counter for first calume to dicrese it*/
/*************** Globel Variable section end *********************/

int main()
{
	for(raw = 1; raw <= 5 ; raw++)
	{
		for(cal = countTwo; cal >= 1; cal--)
		{
			printf("  ");	
		}
		for(cal2 = raw; cal2 <= countOne; cal2++)
		{
			printf("%i ", cal2);
			countThree++;
		}
		CopyCal2 = cal2;
	
		for(cal3 = (cal2 - 2); cal3 < cal2; cal3--)
		{
			
			if((0 == cal3) || (1 == cal3) || ((2 == cal3) && (3 == raw)) || ((cal3 <= 3) && (4 == raw)) || ((cal3 <= 4) && (5 == raw)))
			{
				printf("  ");
			}
			else 
			{
				printf("%i ", cal3);
				
			}
		}

		
		countOne+=2;
		countTwo--;
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
	
