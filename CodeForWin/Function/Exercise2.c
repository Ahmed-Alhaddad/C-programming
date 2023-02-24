/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to find diameter, circumference and area of circle using functions.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>

/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/
#define PI 3.14
double Radius;
double D;
double C;
double A;
/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
double Diameter(double radius);
double Circumference(double radius);
double Area(double radius);
/*************** Decleration section end *********************/

int main()
{
	printf("Please Enter the Radius : ");
	scanf("%lf", &Radius);
	D = Diameter(Radius);
	C = Circumference(Radius);
	A = Area(Radius);
	printf("The Diameter is : %.2lf \n", D);
	printf("The Circumference is : %.2lf \n", C);
	printf("The Area is : %.2lf \n", A);
	
	return 0;
}

/*************** Defenation Variable section start *********************/
double Diameter(double radius)
{
	return (2 * radius);
}
double Circumference(double radius)
{
	return (2 * PI * radius);
}
double Area(double radius)
{
	return (PI * radius * radius);
}



/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            			Write a C program to find diameter, circumference and area of circle using functions.
 *****************************************************/

