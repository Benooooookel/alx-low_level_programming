#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print alphabet print characters for a to z in lowercase
 * using a loop, and including  only _putchar twice in the code base to output
 * the characters
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha < 'z')
	{
		_putchar(alpha++);
	}
	_putchar('\n');
}
