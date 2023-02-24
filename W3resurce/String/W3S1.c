#include <stdio.h>
char Str[50];

int main()
{
	printf("Iput the string :");
	scanf("%[^\n]", Str);
	printf("The string you entered is : %s \n", Str);
	

	return 0;
}

