#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - function that prints numbers, followed by a newline
 * @separator: is the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int print = 0;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		print = va_arg(arg, int);
		printf("%d, ", print);
	}
	if (separator == NULL)
		printf("NULL");
	va_end(arg);
	printf("\n");
}
