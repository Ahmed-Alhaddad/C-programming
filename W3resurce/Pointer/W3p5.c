#include <stdio.h>
int num1;
int num2;
int sum;
int SumCall(int *Pnum1, int *Pnum2);

int main()
{
printf("Trst Data:\n");
printf("Input the first Number: ");
scanf("%d", &num1);

printf("Input the second Number: ");
scanf("%d", &num2);

sum = SumCall( &num1, &num2 );
printf("The sum of %d and %d is %d \n", num1, num2, sum);

return 0;
}
int SumCall(int *Pnum1, int *Pnum2)
{
	return ( *Pnum1 + *Pnum2);
}
