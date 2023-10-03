#include <stdio.h>
#include "main.h"
/**
 * _puts - function that prints the string, followed by new line
 * @str: the string to be returned
 */
void _puts(char *str)
{
	int n = 0;

	while (*str != '\0')
	{
		_putchar(*str++);
		n++;
	}
	_putchar('\n');
}
