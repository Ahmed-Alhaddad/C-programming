

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
int num1;
int num2;
int sum;


/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
int SumCall(int *Pnum1, int *Pnum2);
/*************** Decleration section end *********************/

int main()
{
	printf("Trst Data:\n");
	printf("Input the first Number: ");
	scanf("%d", &num1);

	printf("Input the second Number: ");
	scanf("%d", &num2);

	sum = SumCall( &num1, &num2 );
	printf("The sum of %d and %d is %d \n", num1, num2, sum);


	return 0;
}

/*************** Defenation Variable section start *********************/


int SumCall(int *Pnum1, int *Pnum2)
{
	return ( *Pnum1 + *Pnum2);
}

/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            
 *****************************************************/

