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
char *str_cat(char *dest, const char *src);
/*************** Decleration section end *********************/

int main()
{
	
	const char src_arr[] = "Ahmed";
	char dest_arr[11] = "check";
	printf("%s \n",str_cat(&dest_arr[0], &src_arr[0]));
	printf("%s \n", dest_arr);
	printf("%s \n", src_arr);
	return 0;
}

/*************** Defenation Variable section start *********************/

char *str_cat(char *dest, const char *src)
{
	int i = 0;
	int j = 0;
	if(dest != NULL && src != NULL)
	{
		while(dest[i] != '\0')
		{
			i++;
		}
		while(src[j] != '\0')
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

