#include<stdio.h>
#include<stdlib.h>
FILE *o_file = NULL;
char string[255];
int main()
{
	o_file = fopen("Ahmed.txt", "r"); 
	if(NULL != o_file)
	{
		printf("Success \n");
		fgets(string, 13, o_file);
		if(NULL != string)
		{
			printf("%s \n", string);
		}
		else
		{
			printf("Error string\n");
		}
	}
	else
	{
		printf("Error \n");
	}
	if(0 == fclose(o_file))
	{
		printf("Done\n");
	}
	else
	{
		printf("Error to close\n");
	}
	return 0;
}
