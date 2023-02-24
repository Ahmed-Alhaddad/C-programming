#include <stdio.h>
#include <string.h>
char str[50];
int length = 0;
int main()
{
	printf("Input the string : ");
	scanf("%s", str);
	
	/*scanf("%[^\n]", str);
	length = strlen(str);
	*/
	while(str[length] != '\0')
	{
		length++;
	}
	printf("Length of the string is : %d\n", length);
	return 0;
}
