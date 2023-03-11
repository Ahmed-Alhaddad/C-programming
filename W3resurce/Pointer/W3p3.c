
/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
int m = 300;
float fx = 300.600006;
char cht = 'z';

int *Ptrm = &m;
float *Ptrfx = &fx;
char *Ptrcht = &cht;

/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/

/*************** Decleration section end *********************/

int main()
{

	printf("Pointer : Demonstrate the use of & and * operator : \n");
	printf("--------------------------------------------------------\n");
	printf("m = %i \nfx = %f\ncht = %c\n", m, fx, cht);
	
	printf("Using & Operator: \n");               
	printf("--------------------------------------------------------\n");
	printf("Address of m = %p \n Address of fx = %p\n Address of cht = %p\n", &m, &fx, &cht);   
	                
    printf("Using & and * Operator: \n");               
	printf("--------------------------------------------------------\n");
	printf("Value of m = %i \n Value of fx = %f\n Value of cht = %c\n", *(&m), *(&fx), *(&cht));
	
	printf("Using only pointer variable :\n----------------------------------\n ");
	printf("Address of m = %p \n Address of fx = %p\n Address of cht = %p\n", Ptrm, Ptrfx, Ptrcht);
	                   
    printf("Using only pointer variable :\n----------------------------------\n ");
	printf("Value at Address of m = %i \n Value at Address of fx = %f\n Value at Address of cht = %c\n", *Ptrm, *Ptrfx, *Ptrcht);
	

	return 0;
}

/*************** Defenation Variable section start *********************/




/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.
 *****************************************************/

