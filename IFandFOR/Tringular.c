#include <stdio.h>

unsigned char raw;
unsigned char cal_1;
unsigned char cal_2;
unsigned char cal_3;

int main()
{
	for(raw = 0; raw < 5; raw++)
	{
		for(cal_1 = 5; cal_1 > raw; cal_1--)
		{
			printf(" ");
		}
		for(cal_2 = 0; cal_2 < raw; cal_2++)
		{
			printf("*");
		}
		for(cal_3 = 1; cal_3 < raw; cal_3++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(raw = 0; raw < 5; raw++)
	{
		for(cal_1 = 0; cal_1 < raw; cal_1++)
		{
			printf(" ");
		}
		for(cal_2 = 5; cal_2 > raw; cal_2--)
		{
			printf("*");
		}
		for(cal_3 = 4; cal_3 > raw; cal_3--)
		{
			printf("*");
		}
		printf("\n");
	}

return 0;
}
		
