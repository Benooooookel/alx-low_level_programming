#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: is the inter for the args
 * Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	if (n == 0)
		return (0);
	va_end(arg);
	return  (sum);
}
