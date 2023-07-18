#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times in lowercase
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		char j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		a++;
		_putchar('\n');
	}
}
