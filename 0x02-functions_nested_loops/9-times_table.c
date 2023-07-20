#include "main.h"
#include <stdio.h>
/**
 * time_table - function that prints the 9 times table, starting from 0
 * 
 * Return: have nothing to return
 */
void times_table(void)
{
	int a, b, result;

	for (a = 0; a < 10; a++)
	{
		_putchar('0');
		for (b = 1;  b < 10; b++)
		{
			_putchar(',');
			_putchar(' ');

			result = a * b;

			if (result < 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');

	}
}
