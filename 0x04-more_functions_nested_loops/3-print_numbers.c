#include <stdio.h>
#include "main.h"
/**
 * print_numbers - function that prints numbers for 0 to 9
 * Return: nothing
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
