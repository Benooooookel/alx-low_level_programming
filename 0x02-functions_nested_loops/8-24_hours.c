#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day of jack Bauer
 *
 * Return: the function that is printed
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0 + a; b <= 59; b++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar(' ');
			_putchar('\n');
		}
	}
}
