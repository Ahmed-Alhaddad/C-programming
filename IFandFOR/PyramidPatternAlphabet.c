/*****************************************
 *
 *@file   :  PyramidPatternAlphabet.c
 *@Brief  :  to print
				A
				A B A 
				A B C B A
				A B C D C B A
				A B C D E D C B A
 *@Auther :  Ahmed Waheed
 *****************************************
 */
/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/
/*************** Globel Variable section start *******************/

unsigned char raw;
unsigned char cal_1;
unsigned char cal_2;

unsigned char count_1 = '@';
unsigned char count_2 = 'A';
unsigned char count_3 = 'A';
unsigned char count_4 = 'A';

/*************** Globel Variable section end *********************/

int main()
{
	for(raw = 1; raw <=5; raw++)
	{
		unsigned char count_0 = 'A';
		for(cal_1 = 1; cal_1 <= raw; cal_1++)
		{
			printf("%c ", count_0);
			count_0++;
		}
		if(raw >= 2)
		{
			printf("%c ", count_1);
			
		}
		if(raw >= 3)
		{
			printf("%c ", count_2);
			count_2++;
		}
		if(raw >= 4)
		{
			printf("%c ", count_3);
			count_3++;
		}
		if(raw >= 5)
		{
			printf("%c ", count_4);
			count_3++;
		}
		count_1++;
		printf("\n");
	}
	return 0;
}
/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed           Sep/3/2022           to print
												A
												A B A 
												A B C B A
												A B C D C B A
												A B C D E D C B A
 *****************************************************/
	
	
