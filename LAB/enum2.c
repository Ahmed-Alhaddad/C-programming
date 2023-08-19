#include <stdio.h>
enum Months {Jan = 1, Fab, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Des};
void Month_Switch(enum Months Month);


int main()
{
	
	Month_Switch(Jan);
	Month_Switch(Fab);
	Month_Switch(May);
}
void Month_Switch(enum Months Month)
{
	switch(Month)
	{
		case Jan:
			printf("January\n");
			break;
		case Fab:
			printf("Fabewary\n");
			break;
		default:
			printf("Invaled\n");
			break;
	}
}
