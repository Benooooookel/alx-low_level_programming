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
	int last = n % 10;

	if (last < 0)
		last = -last;
	else if (last > 0)
		_putchar(last + '0');
	else
		_putchar(last + '0');
	return (last);
}
