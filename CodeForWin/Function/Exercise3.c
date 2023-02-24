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
int Number_1;
int Number_2;
int Maximum;
int Minimum;
/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
int CheckMax(int num1, int num2);
int CheckMin(int num1, int num2);
/*************** Decleration section end *********************/

int main()
{
	printf("Please Enter Number_1 : ");
	scanf("%d", &Number_1); 
	printf("Please Enter Number_2 : ");
	scanf("%d", &Number_2);
	Maximum = CheckMax(Number_1, Number_2);
	Minimum = CheckMin(Number_1, Number_2);
	printf("Maximum is : %i \n", Maximum);
	printf("Minimum is : %i \n", Minimum);
	return 0;
}

/*************** Defenation Variable section start *********************/
int CheckMax(int num1, int num2)
{
	return ((num1 > num2) ? num1 : num2);
}
int CheckMin(int num1, int num2)
{
	return ((num2 < num1) ? num2 : num1);
}


/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            
 *****************************************************/

