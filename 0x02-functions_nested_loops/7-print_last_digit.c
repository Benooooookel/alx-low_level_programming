#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - function that print the last digit of a number
 * @n: the number that print the last digit
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int digit;
	
	digit = n % 10;

	if (digit > 0)
	{
		_putchar('0' + digit);
	}
	else
	{
		return(-digit);
	}
}
