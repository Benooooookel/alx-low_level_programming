#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isdigit - function the checks for a digit for 0 through 9
 * @c: the number to be printed
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
