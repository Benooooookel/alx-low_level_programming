#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything.
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list new;
	va_start(new, format);

	for (i = 0; i < format; i++)
	{
		str = va_arg(new, format);


	}	
}
