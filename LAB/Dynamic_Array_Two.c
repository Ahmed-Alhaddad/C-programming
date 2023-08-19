#include <stdio.h>
#include <stdlib.h>

unsigned int **ptr = NULL;
unsigned int raw;
unsigned int i;
unsigned int j;
unsigned int col;
int main()
{
	printf("Please Enter the Raw : ");
	scanf("%d", &raw);
	printf("Please Enter the Columes : ");
	scanf("%d", &col);
	ptr = (unsigned int **)malloc((raw * (sizeof (unsigned int *))));
	for(i = 0; i < raw; i++)
	{
			ptr[i] = (unsigned int *)malloc((col * (sizeof (unsigned int ))));
	}
	
	for(i = 0; i < raw; i++)
	{
		for(j = 0; j < col; j++)
		{
			ptr[i][j] = 55;
		}
	}
	
	for(i = 0; i < raw; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}

	for(i = 0; i < raw; i++)
	{
		free(ptr[i]);		
	}
	free(ptr);
	return 0;
}
