/*
 * file: 4-print_rev.c
 * Auth: kelechi nnadi <alx swe>
 */
#include "main.h"
#include <stdio.h>
#include <string.h>
/*
 * print_rev - prints a string in reverse with a newline
 * @s: is the pointer to a character string
 */

void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		_putchar(s[index]);
		s--;
		index++;
	}
	_putchar('\n');
}
