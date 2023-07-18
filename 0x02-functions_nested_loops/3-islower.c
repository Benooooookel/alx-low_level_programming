#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - function that checks for lowercase character
 * @c: returns 1 if c is lowercase otherwise return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
