/*****************************************
 *
 *@file   :  
 *@Brief  :   
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/


/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
char *str_cat(char *dest, const char *src, size_t n);
/*************** Decleration section end *********************/

int main()
{
	
	const char src_arr[50] = "Ahmed";
	char dest_arr[50] = "check";
	
	printf("%s \n",str_cat(&dest_arr[0], &src_arr[0], 6));
	printf("%s \n", dest_arr);
	printf("%s \n", src_arr);
	return 0;
}

/*************** Defenation Variable section start *********************/

char *str_cat(char *dest, const char *src, size_t n)
{
	int i = 0;
	int j = 0;
	if(dest != NULL && src != NULL)
	{
		while(dest[i] != '\0')
		{
			i++;
		}
		while(j < n)
		{
			dest[i] = src[j];
			i++; 
			j++;
		}
		dest[i] = '\0';
	}
	else
	{
		printf("Error");
	}
		return dest;

}


/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            
 *****************************************************/

