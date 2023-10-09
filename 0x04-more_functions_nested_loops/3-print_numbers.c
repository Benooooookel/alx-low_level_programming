/*
 * file: 3-print_number.c
 * Auth: kelechi nnadi <alx swe>
 */

#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that prints the numbers for 0 to 9
 *                 followed by new line, using  while loop to
 *                 itreate the numbers
 */
void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
