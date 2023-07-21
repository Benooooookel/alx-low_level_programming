#include <stdio.h>
#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal.
 * @n: is the number of times the charater _ should be printed
 *     the line should end with a new line.
 *     if n is 0 or less the function should only print newline.
 */
void print_line(int n)
{
	int lent;
	char line = '_';

	for (lent = 0; lent < n; lent++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar(line);
	}
	_putchar('\n');
}
