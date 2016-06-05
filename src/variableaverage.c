/*
 * variableaverage.c
 *
 *  Created on: 04.06.2016
 *      Author: Michael
 */
#include <stdio.h>
#include <stdarg.h>

float average(char *name, int num, ...);

int main(void)
{
	setbuf(stdout, NULL);

	float x;
	x = average("Michu",10,1,2,3,4,5,6,7,8,9,10);
	printf("\nThe first average is %.2f.\n", x);

	x = average("Michu",5,12,100,18,31,5);
	printf("\nThe second average is %.2f.\n", x);

	return 0;
}

float average(char *name, int num, ...)
{
	printf("Name is: %s\n", name);
	va_list arg_ptr;
	int count, total = 0;

	va_start(arg_ptr, num);

	for(count = 0 ; count < num ; count++)
	{
		printf("arg_ptr points to the address %d, and there is the value %d saved.\n", arg_ptr, *arg_ptr);
		total += va_arg(arg_ptr, int);
	}
	va_end(arg_ptr);

	return ((float)total/num);

}

