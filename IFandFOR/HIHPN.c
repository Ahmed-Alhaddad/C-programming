/*****************************************
 *
 *@file   :  HIHP.c
 *@Brief  :  To print astrk as Hollow Inverted Half Pyramid Number
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
	for(raw=1; raw<=5; raw++)
	{
		printf("%i ", raw);
		for(cal=2; cal<=5; cal++)
		{
			if(1==raw )
			{
				printf("%i ", cal);
			}
			else if(count == cal)
			{
				printf("5 ");
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
 *Ahmed Waheed           29/Oct/2022    To print astrk as Hollow Inverted Half Pyramid Number
 *Ahmed Waheed           30/Oct/2022     Edite the bug to print the 5 number form right postion
 *****************************************************/
	
