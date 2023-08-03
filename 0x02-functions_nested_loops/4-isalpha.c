#include <stdlib.h>
#include "main.h"
/**
 * _isalpha - check for alphabetic character and
 * @c: the integer to check for the character
 * Return: 1 if c is lowercase of uppercase 0 if not
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	       return (1);
	else if (c >= 97 && 122)
		return (1);
	else
		return (0);
}
