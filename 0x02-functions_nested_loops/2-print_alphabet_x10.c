#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet in
 *                      lowercase, followed by a new line
 * Auth: kelechi nnadi <alx swe>
 */
void print_alphabet_x10(void)
{
	int line = 0;

	while (line < 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		line++;
		_putchar('\n');
	}
}
