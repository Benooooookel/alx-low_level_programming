#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - function at print numbers for 0  through 9
 *
 */
void print_most_numbers(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
	{
		if (a == 2 || a == 4)
			continue;
		_putchar(a + '0');
	}
	_putchar('\n');
}