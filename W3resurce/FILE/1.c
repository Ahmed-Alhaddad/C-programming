#include<stdio.h>
int main()
{
	FILE *Text_File = fopen("File.txt","w");	
	
	if(NULL != Text_File)
	{
		fprintf(Text_File, "The file test.txt created successfully...!! \n");
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
