#include "main.h"
#include <stdio.h>
/**
 * print_sign - this program is made to print the sign of a number
 * @n: the number or sign to be printed
 * Return: if n is greater then zero program return 1 and print +
 *         return 0  and print 0 if n is zero
 *         return -1 and prints - id n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(n + '0');
		return (0);
	}
}
