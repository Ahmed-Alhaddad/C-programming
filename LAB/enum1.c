#include <stdio.h>

enum days {Sun = 1, Mon, Tue, Wed, Thu, Fri, Sat};
int main()
{
	enum days Day;
	for(Day = Sun; Day <= Sat; Day++)
	{
		printf("Day = %i\n", Day);
	}
	return 0;
} 
