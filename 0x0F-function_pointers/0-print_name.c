#include <stdio.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints a name
 * @name: the name of the function
 * @f: the pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	(f(name));

	exit(0);
}
