#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - function that prints the alphabet in lowercase
 *                  followed by a new line
 * Auth: kelechi nnaid <alx swe>
 */
void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		++alpha;
	}
	_putchar('\n');
}
