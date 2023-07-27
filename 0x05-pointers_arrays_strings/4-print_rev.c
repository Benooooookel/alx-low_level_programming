#include <stdio.h>
#include "main.h"
/**
 * print_rev - function that print a string in reverse,
 * followed by a new line
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int index = 0, back;

	while (*s != '\0')
	{
		s++;
		index++;
	}
	for (back = index - 1; back >= 0; back--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
