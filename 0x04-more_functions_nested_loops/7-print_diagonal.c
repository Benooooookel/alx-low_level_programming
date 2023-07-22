#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: n is the number of timees the charater \ should be printed
 *     the diagonal should end with a newline
 *     if n is 0 or less, the function should only print a newline
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else

		int lent, width;
		char line = '\\';

		for (lent = 0; lent < n; lent++)
		{
			for (width = 0; width < n; width++)
			{
				if (width == lent)
					_putchar(line);
				else if (width <= lent)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
