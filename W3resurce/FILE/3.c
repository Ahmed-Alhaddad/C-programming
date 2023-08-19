#include<stdio.h>
int main()
{
	FILE *Text_File = fopen("File.txt","w");	
	
	if(NULL != Text_File)
	{
		fprintf(Text_File, "test line 1\ntest line 2\ntest line 3\ntest line 4  \n");
	}
	else
	{
		printf("ERROR!!\n");
	}
	if(EOF != fclose(Text_File))
	{
		printf("File has been closed \n");
	}
	else
	{
		printf("ERROR!!\n");	
	}
	return 0;
}

/*DONE*/
