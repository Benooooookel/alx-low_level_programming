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
	int res = n % 10;

	if (res > 0)
		_putchar(res + '0');
	else if (res == 0)
		_putchar(res + '0');
	return (-res);
}
