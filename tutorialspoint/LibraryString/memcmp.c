#include <stdio.h>

char name1[30];
char name2[30];
int i;

int Mymemcmp(const void *str1, const void *str2, unsigned int length);
int main()
{
	i = Mymemcmp("Amed", "med", 5);
	printf("ReturnValue = %i \n", i);
	return 0;
}
int Mymemcmp(const void *str1, const void *str2, unsigned int length)
{
	unsigned char *tmp1 = (unsigned char *)str1;
	unsigned char *tmp2 = (unsigned char *)str2;
	int ReturnValue = 0;
	
	if((NULL == tmp1) || (NULL == tmp2))
	{
		printf("I think your code Have NULL\n");
	}
	else
	{
		if(*tmp1 == *tmp2)
		{
			ReturnValue = 0;
		}
		else
		{
			while(length)
			{
				if(*tmp1 != *tmp2)
				{
					ReturnValue = (*tmp1 < *tmp2) ? -1 : 1;
					break;
				}	
				else
				{
					length--;
					*tmp1++;
					*tmp2++;
				}
			}
		}
	}
	
	return ReturnValue;
}



/*
int Mymemcmp(const void *str1, const void *str2, unsigned int length)
{
	unsigned char *tmp1 = str1;
	unsigned char *tmp2 = str2;
	int ReturnValue = 0;
	
	if((NULL == tmp1) || (NULL == tmp2))
	{
		printf("I think your code Have NULL");
	}
	else
	{
		while(length)
		{
			if(*tmp1 == *tmp2)
			{
				ReturnValue = 0;
			}
			else
			{
				ReturnValue = (*tmp1 < *tmp2) ? -1 : 1;
				break;
			}	
			*tmp1++;
			*tmp2++;
			length--;
		}
	}
	
	return ReturnValue;
}
*/
