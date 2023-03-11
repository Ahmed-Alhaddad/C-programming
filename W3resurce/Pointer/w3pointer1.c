
/*****************************************
 *
 *@file   :  
 *@Brief  :    Write a program in C to show the basic declaration of a pointer. 
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
int m;
int n;
int o;
int *z = NULL;


/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/

/*************** Decleration section end *********************/

int main()
{

	m = 10;
	z = &m;
	printf("z stores the address of m = %p\n", z);
	printf("*z stores the value of m = %d\n", *z);
	
	printf("m stores the address of m = %p\n", &m);
	printf("*n stores the address of n = %p\n", &n);

	printf("o stores the address of o = %p\n", &o);
	printf("&z stores the address of z = %p\n", &z);

	return 0;
}

/*************** Defenation Variable section start *********************/




/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed             Write a program in C to show the basic declaration of a pointer. 
 *****************************************************/

