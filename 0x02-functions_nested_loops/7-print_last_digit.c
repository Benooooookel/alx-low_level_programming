#include  "main.h"
#include <stdlib.h>
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: the parameter to be printed
 * Return: the value of the last digit
 * Auth: kelechi nnadi <alx swe>
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = n % 10;
	else if (n >= 0)
		_putchar((n % 10) + '0');
	return (-last);
}
