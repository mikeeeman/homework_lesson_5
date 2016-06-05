/*
 * void_pointer.c
 *
 *  Created on: 01.05.2016
 *      Author: Michael
 */
#include <stdio.h>

int main(void)
{
	setbuf(stdout, NULL);
	int myInt = 2;
	void *ptr;

	ptr = &myInt;

	*(int *)ptr = 4;
	fprintf(stdout, "Value is: %d | myInt is: %d\n", *(int *)ptr, myInt);
	return 0;
}

