#ifndef _GPIO_H
#define _GPIO_H



typedef struct{
	unsigned int id;
	void (*ptr)(void);
}gpio_t_info;

void gpio_v1(gpio_t_info *gpio_obj);
void gpio_v2(gpio_t_info *gpio_obj);

#endif
