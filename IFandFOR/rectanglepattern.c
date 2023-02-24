/**
*****************************************************
* @File      : rectanglepattern.c
* @author    : Ahmed Waheed
* @brief     : To print a solid and hollow rectangle usings atars
*****************************************************
**/

/* **************** Includes Section Start ****************** */
#include <stdio.h>
/* **************** Includes Section End   ****************** */

/* **************** Globel Variables Section Start ********** */
unsigned char row=0;
unsigned char col=0;
/* **************** Globel Variables Section End ************ */

/* **************** main Section Start ********************** */
int main()
{
    for(row=1;row<=3;row++)                       /* Loop for the Row */ 
    {
        for(col=1;col<=5;col++)			  /* Loop for the Col */
	{
	    printf("* ");                         /* Print the * with one space in col */
	}
	printf("\n");                             /* print new line for the next row */
    }

						/* Output should be Soild Rectangle
							* * * * *
							* * * * *
							* * * * *
						*/


    printf("\n");
    for(row=1;row<=3;row++)					 /* Loop for the Row */
    {
        for(col=1;col<=5;col++)					/* Loop for the Col */
	{
	    if(1==row || 3==row || 1==col || 5==col)              /* Condtion first or last Row print or first and last Col print (*) */
	    {
	        printf("* ");
	    }
	    else						/* Else print space */		
	    {
                printf("  ");
	    }
	}
	printf("\n");                               /* Orint new line for the next row */
    } 
   						/* Output should be Hollow Rectangle
                                                        * * * * *
                                                        *       *
                                                        * * * * *
                                                */

}
/* **************** main Section End ************************ */

/**
 **************************************************************************************************************************
 User               Date                                                  Brief
 **************************************************************************************************************************
 Ahmed Waheed     19/Oct/2022                 Print Rectanler Pattern in two deffrint type one Soild and Hollow Rectangle 
**/
