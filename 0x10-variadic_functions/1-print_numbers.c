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
	int num;
	va_list arg1;

	va_start(arg1, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(arg1, int);
		if (separator != NULL)
			printf("%s", separator);
		printf("%d",num);
	}
	va_end(arg1);

	printf("\n");
}
