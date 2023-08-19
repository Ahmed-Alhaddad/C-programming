#include <stdio.h>
#include <stdlib.h>
int main()
{
	unsigned int *const ptr = (unsigned int *)malloc((2 * sizeof (unsigned int)));
	if(ptr == NULL)
	{
		printf("Error");
	}
	else
	{
		scanf("%d", ptr);
		printf("1 - %d \n",*ptr);
		
		scanf("%d", (ptr+ 1));
		printf("1 - %d \n",*(ptr+ 1));
		
		scanf("%d", (ptr+ 2));
		printf("1 - %d \n",*(ptr+ 2));
		
	}
	return 0;
}
