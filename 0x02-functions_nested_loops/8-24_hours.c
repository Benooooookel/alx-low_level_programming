#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - function that prints every minute of the day of jack
 *              Bauer, starting from 00.00 to 23:59
 *
 * Auth: kelechi nnadi <alx swe>
 */
void jack_bauer(void)
{
	int min1, sec1;

	for (min1 = 0; min1 <= 23; min1++)
	{
		for (sec1 = 0; sec1 <= 59; sec1++)
		{
			_putchar((min1 / 10) + '0');
			_putchar((min1 % 10) + '0');
			_putchar(':');
			_putchar((sec1 / 10) + '0');
			_putchar((sec1 % 10) + '0');
			_putchar('\n');
		}
	}
}
