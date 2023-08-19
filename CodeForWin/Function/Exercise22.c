/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to display all array elements using recursion.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/


/*************** Globel Variable section end *********************/
int array[3];
/*************** Decleration section start *********************/
void Desplay(int arr[], int count);
/*************** Decleration section end *********************/

int main()
{
	
	int i=0;
	int count = 0;
	for(i=0; i<3; i++)
	{
		scanf("%d", &array[i]);
	}
	
	Desplay(array, count);

	return 0;
}

/*************** Defenation Variable section start *********************/
void Desplay(int arr[], int count)
{
	/*for(int j = 0; j<3; j++)
	printf("%d \n",arr[j]);*/
	if(count > 3)
	return ;
	
	printf("%d \n", arr[count]);
	
	Desplay(arr, count+1);
}

/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            Write a C program to display all array elements using recursion.
 *****************************************************/

