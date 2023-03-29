#include <stdio.h>
#include <string.h>
typedef union{
struct {
	unsigned char Pin0	:1;
	unsigned char Pin1	:1;
	unsigned char Pin2	:1;
	unsigned char Pin3	:1;
	unsigned char Pin4	:1;
	unsigned char Pin5	:1;
	unsigned char Pin6	:1;
	unsigned char Pin7	:1;
	};
	unsigned char AllPort;
}Port_t;
int main()
{
	Port_t port;
	port.Pin0 = 1;
	port.Pin1 = 1;
	port.Pin2 = 1;
	port.AllPort |= 0xE0;
	
	printf("%i\n", port.Pin0);
	printf("%i\n", port.Pin1);
	printf("%i\n", port.Pin2);
	printf("%i\n", port.AllPort);
	
	return 0;
}
	
