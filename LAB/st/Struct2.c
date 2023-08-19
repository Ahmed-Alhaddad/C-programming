
#include "gpio.h"

gpio_t_info gpio_a;

void GPIO_Notificatio(void);

int main()
{
	gpio_a.id = 11;
	gpio_a.ptr = GPIO_Notificatio;
	
	gpio_v1(&gpio_a);
	gpio_v2(&gpio_a);
	
	return 0;
}

void GPIO_Notificatio(void)
{
	printf("GPIO Performed Request \n");
}
