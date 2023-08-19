
#include <stdio.h>
#include <stdlib.h>
#include "gpio.h"



void gpio_v1(gpio_t_info *gpio_obj)
{
	printf("GPIO Pin Number %i in ON \n", gpio_obj->id);
	gpio_obj->ptr();

}
void gpio_v2(gpio_t_info *gpio_obj)
{
	printf("GPIO Pin Number %i in OFF \n", gpio_obj->id);
	gpio_obj->ptr();

}
