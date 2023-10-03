#include <stdlib.h>
#include "main.h"
/**
 * _islower - write a function that checks for lowercase
 * characters using ascii
 * format to print alphabete, if c is fine
 * the lowercase converted method it will
 * @c: the integer to print
 * Return: 1
 * else if c is check and get nonlowercase characher it will return  0;
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
