#include <stdio.h>
#include <stdlib.h>
int main()
{
	unsigned int * ptr = (unsigned int *) calloc(1 , sizeof (unsigned int));
	if(ptr == NULL)
	{
		printf("Error");
	}
	else
	{
		scanf("%d", ptr);
		printf("0 - %d \n",*ptr);
		
		scanf("%d", (ptr+ 1));
		printf("1 - %d \n",*(ptr+ 1));
		
		scanf("%d", (ptr+ 2));
		printf("2 - %d \n",*(ptr+ 2));
		
	}
	ptr = (unsigned int *)realloc(ptr, (sizeof(unsigned int)*2));
	if(ptr == NULL)
	{
		printf("Error");
	}
	else
	{
		printf("1 - %d \n",*(ptr+ 1));
		scanf("%d", (ptr+ 3));
		printf("3 - %d \n",*(ptr+ 3));
		scanf("%d", (ptr+ 4));
		printf("4 - %d \n",*(ptr+ 4));
	}
	free(ptr);
	printf("0 - %d \n",*ptr);
	return 0;
}
