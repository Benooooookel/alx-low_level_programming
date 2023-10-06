#include "main.h"
#include <stdio.h>

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Auth: kelechi nnadi <alx swe>
 */
void times_table(void)
{
	int width, col;

	for (width = 0; width <= 9; width++)
	{
		for (col = 0 * 1; col <= 9; col++)
		{
			if (width == 9)
				continue;
			_putchar(width + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(col + '0');
		}
		_putchar('\n');
	}
}
