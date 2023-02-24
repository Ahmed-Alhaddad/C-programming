#include <stdio.h>

int num1;
int num2;
int *Pnum1 = &num1;
int *Pnum2 = &num2;


int main()
{
	printf("Input the first number : ");
	scanf("%d", Pnum1);
	printf("Input the second number : ");
	scanf("%d", Pnum2);

	if(*Pnum1 > *Pnum2)
	{
		printf("%d is the macximum number.", *Pnum1);
	}
	else
	{
		printf("%d is the macximum number.", *Pnum2);
	}	
		
return 0;
}
