/*Code Readability*/
#include <stdio.h>
#include "Platform_Types.h"

uint32 ReturnFunction_1(void);
uint32 ReturnFunction_2(void);
uint32 ReturnFunction_3(void);
uint32 ReturnFunction_4(void);
//uint32 (*(*My_function(void))[4])(void);

typedef uint32 (*functionPtr)(void);
typedef functionPtr (*PtrArray4PF)[4];
PtrArray4PF My_function(void);


functionPtr PtrreturnFunction[4] = {ReturnFunction_1, ReturnFunction_2, 		      
									ReturnFunction_3,ReturnFunction_4};

int main()
{
	uint32 (*(*LocalMainPtr)[4])(void) = My_function();
	printf("%i \n", (*LocalMainPtr)[0]()	);
	printf("%i \n", (*LocalMainPtr)[1]()	);
	printf("%i \n", (*LocalMainPtr)[2]()	);
	printf("%i \n", (*LocalMainPtr)[3]()	);
	printf("||||||||||||||||||||||||||||||||||||||\n");
	printf("%i \n", (*PtrreturnFunction[0])()	);
	printf("%i \n", (*PtrreturnFunction[1])()	);
	printf("%i \n", (*PtrreturnFunction[2])()	);
	printf("%i \n", (*PtrreturnFunction[3])()	);
}

uint32 ReturnFunction_1(void)
{
	return 11;
}
uint32 ReturnFunction_2(void)
{
	return 22;
}
uint32 ReturnFunction_3(void)
{
	return 33;
}
uint32 ReturnFunction_4(void)
{
	return 44;
}
PtrArray4PF My_function(void)
{
	PtrArray4PF LocalPtr = &PtrreturnFunction;
	return (LocalPtr);
}
