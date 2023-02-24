/*****************************************
 *
 *@file   :  PyramidPattern.c 
 *@Brief  :  to print
				1 
				1 2 1 
				1 2 3 2 1 
				1 2 3 4 3 2 1 
				1 2 3 4 5 4 3 2 1 
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
unsigned char number;

/*************** Globel Variable section end *********************/

int main()
{
	printf("Please Enter The Number You Want : ");
	scanf("%i", &number);
	for(raw = 1; raw <= number; raw++)
	{
		for(cal_1 = 1; cal_1 <= raw; cal_1++)
		{
			printf("%i ",cal_1);
		}
		for(cal_2 = raw - 1; cal_2 <= raw; cal_2--)
		{
			if(0 == cal_2)
			{
				printf("  ");
			}
			else
			{
				printf("%i ",cal_2);
			}
		}
		printf("\n");
	}
	return 0;
}
/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed           Sep/3/2022           to print
												1 
												1 2 1 
												1 2 3 2 1 
												1 2 3 4 3 2 1 
												1 2 3 4 5 4 3 2 1 
 *****************************************************/
	
	
	/*Other Salution*/
	
	
	/*****************************************
 *
 *@file   :  PyramidPattern.c 
 *@Brief  :  to print
				1 
				1 2 1 
				1 2 3 2 1 
				1 2 3 4 3 2 1 
				1 2 3 4 5 4 3 2 1 
 *@Auther :  Ahmed Waheed
 *****************************************
 */
/*************** Include section strat ***************************/
//#include <stdio.h>
/*************** Include section end *****************************/
/*************** Globel Variable section start *******************/
/*
unsigned char raw;
unsigned char cal_1;
unsigned char cal_2;

unsigned char count_1;
unsigned char count_2 = 1;
unsigned char count_3 = 1;
unsigned char count_4 = 1;

/*************** Globel Variable section end *********************/
/*
int main()
{
	for(raw = 1; raw <=5; raw++)
	{
		for(cal_1 = 1; cal_1 <= raw; cal_1++)
		{
			printf("%i ",cal_1);
		}
		if(raw >= 2)
		{
			printf("%i ", count_1);
			
		}
		if(raw >= 3)
		{
			printf("%i ", count_2);
			count_2++;
		}
		if(raw >= 4)
		{
			printf("%i ", count_3);
			count_3++;
		}
		if(raw >= 5)
		{
			printf("%i ", count_4);
			count_3++;
		}
		count_1++;
		printf("\n");
	}
	return 0;
}*/
/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed           Sep/3/2022           to print
												1 
												1 2 1 
												1 2 3 2 1 
												1 2 3 4 3 2 1 
												1 2 3 4 5 4 3 2 1 
 *****************************************************/
	
