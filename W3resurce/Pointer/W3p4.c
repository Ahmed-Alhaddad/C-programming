#include <stdio.h>
int num1;
int num2;
int *Pnum1 = &num1;
int *Pnum2 = &num2;
int main()
{
printf("Test Data:\n");
printf("Input the first Number :");
scanf("%d", &num1);
printf("\nInput the first Number :");
scanf("%d", &num2);
printf("The Sum of the entered number is : %d \n", (*Pnum1 + *Pnum2));

return 0;
}
