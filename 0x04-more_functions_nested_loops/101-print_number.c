#include <stdio.h>
/**
 * print_number - function that prints integer
 * @n: the number to be printed
 */
void print_number(int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		if (n <= 0 && n <= 9)
		{
			_putchar(n + '0');
		}
		else if (n >= 10)
		{
			_putchar(n / 10  + '0');
			_putchar(n % 10  + '0');
		}
		else
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(n % 10 + '0');
		}
	}
}
