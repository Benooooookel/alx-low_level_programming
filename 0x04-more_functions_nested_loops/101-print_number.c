/*
 * file: 101-print_number.c
 * Auth: kelechi nnadi <alx swe>
 */
#include "main.h"
#include <stdio.h>

/**
 * print_number - function that prints an integer
 * @n: is the integer to be printed
 */
void print_number(int n)
{
	if (n >= 0 && n <= 99)
		_putchar((n / 10) + '0');
	else if (n > 99)
	{
		_putchar(n + '0');
		_putchar((n + '0') + '0');
	}
	else if (n < 0)
	{
		_putchar(+n + '0');
	}
	_putchar((n % 10) + '0');
}
