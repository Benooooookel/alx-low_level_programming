#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - function that print all numbers to 98
 *
 * @n: is the number of the parameter to take
 * Auth: kelechi nnadi
 */
void print_to_98(int n)
{
	int last = 98;
	if (n < last)
	{
		int num = -0;
		for (num = -0; num <= last; num++)
		{
			_putchar(num + '0');
			_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (;n >= last; n--)
		{
			_putchar(n + '0');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
