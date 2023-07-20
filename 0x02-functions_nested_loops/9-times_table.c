#include "main.h"
#include <stdio.h>
/**
 * time_table - function that prints the 9 times table, starting from 0
 * 
 * Return: have nothing to return
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = a * 10;  b < 10; b++)
		{
			_putchar(b + 48);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
