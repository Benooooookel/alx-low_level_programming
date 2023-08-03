#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - function that print lowercase alphabete from a to z, in ten times
 * followed by new line.
 */
void print_alphabet_x10(void)
{
	int row = 0;
	char alpha;

	while (row < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha++);
		}
		row++;
		_putchar('\n');
	}
}
