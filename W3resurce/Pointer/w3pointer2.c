#include <stdio.h>
unsigned int m = 29;
unsigned int *ab = &m; 
int main()
{
	
	printf("Address of m : %p \n", &m);
	printf("Value of m : %i \n", m);
	
	printf("Now ab is assigned with the address of m \n");
	printf("Address of ab : %p \n", ab);
	printf("Value of ab : %i \n", *ab);
	
	m = 34;
	printf("The value of m assigned to 34 now \n");
	printf("Address of ab : %p \n", ab);
	printf("Value of ab : %i \n", *ab);
	
	*ab = 7;
	
	printf("The pointer variable ab is assinged with the value 7");
	printf("Address of m : %p \n", &m);
	printf("Value of m : %i \n", m);
	
	return 0;
}
