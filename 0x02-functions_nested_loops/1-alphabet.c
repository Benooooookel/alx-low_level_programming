#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function that print in lowercase and new line
 *
 * Return: no value
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
