#include <stdio.h>
#include <string.h>
char str[50];
int length;
int counter;
int main()
{
	printf("Input the string : ");
	scanf("%[^\n]", str);
	length = strlen(str);
	printf("%d\n", length);
	printf("The characters of the string are : ");
	for(counter = (length); counter >= 0; counter--)
	{	
		printf("%c  ", str[counter]);
	}
	printf("\n");
	return 0;
}	
