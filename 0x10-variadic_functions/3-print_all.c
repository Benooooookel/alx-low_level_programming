#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything.
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *separator = "";
	va_list mem;
	va_start(mem, format);
	ptr func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};

	va_start(mem, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) ! = *(funcs[
	}
}
