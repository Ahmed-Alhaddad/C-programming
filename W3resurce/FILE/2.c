#include<stdio.h>
int main()
{
	FILE *Text_File = fopen("File.txt","r");	
	char String;
	if(NULL != Text_File)
	{
		//fgets(String, 255, Text_File);
		//printf("The content of the file test.txt is  :\n %s", String);
		String = fgetc(Text_File);
		while(String != EOF)
		{
			printf("%c", String);	
			String = fgetc(Text_File);
		}
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
		printf("ERROR!! \n");	
	}
	return 0;
}

/*DONE*/
"Done"
