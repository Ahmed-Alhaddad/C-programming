/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a program in C to swap elements using call by reference.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
int element_1 = 0;
int element_2 = 0;
int element_3 = 0;

/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
void Reference(int *Ele_1, int *Ele_2, int *Ele_3);
/*************** Decleration section end *********************/

int main()
{
	printf("Input the value of 1st element : ");
	scanf("%d", &element_1);
	printf("Input the value of 2st element : ");
	scanf("%d", &element_2);
	printf("Input the value of 3st element : ");
	scanf("%d", &element_3);
	
	Reference(&element_1, &element_2, &element_3);


	return 0;
}

/*************** Defenation Variable section start *********************/
void Reference(int *Ele_1, int *Ele_2, int *Ele_3)
{
	int temp = *Ele_1;
	
	printf("\nT : %d\n", temp);
	*Ele_1 = *Ele_3;
	
	*Ele_3 = *Ele_2;
	
	*Ele_2 = temp;
	
	printf("element 1 = %d \nelement 2 = %d \nelement 3 = %d \n", *Ele_1, *Ele_2, *Ele_3);
}



/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            Write a program in C to swap elements using call by reference.
 *****************************************************/

