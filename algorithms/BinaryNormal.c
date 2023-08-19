#include <stdio.h>
#include <stdlib.h>

#define MAX 10
typedef signed int sint32;
int array[]={0,1,2,3,4,5,6,7,8,9};

sint32 BinarySearch(int array[], sint32 Start, sint32 End, sint32 Find);

int main()
{
	sint32 Ret = 0;
	Ret = BinarySearch(array, 0, MAX, 55);
	printf("Postion on the array is : %d\n", Ret);
	return 0;
}
sint32 BinarySearch(int array[], sint32 Start, sint32 End, sint32 Find)
{
	sint32 Check = 0;
	while(Start <= End)/*  <=  */
	{
		printf("Check: %d\n", Check);
		Check = Start + ((End -Start) / 2);
		if(Find == array[Check])
		{
			return Check;
		}
		else if(Find < array[Check])
		{
			End = Check - 1;
			
		}
		else
		{
			Start = Check + 1;
			
		}
	}
	return -1;
}

