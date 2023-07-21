#include <stdio.h>
#include "main.h"
/**
 * more_numbers - function tht prints 10 times the numbers for 0 to 14
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int numbers = 0, in = 0;

	for (numbers = 0; numbers < 10; numbers++)
	{
		for (in = 0; in <= 14; in++)
		{
			if (in > 9)
				_putchar(in / 10 + '0');
			_putchar(in % 10 + '0');
		}
		_putchar('\n');
	}
}
