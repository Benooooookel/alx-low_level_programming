#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - function that chackes for lowercase charecter
 * @c: is the parameter to check for for lowercase
 * Return: if c is lowercase 1 should be returned else 0
 *
 * Auth: kelechi nnadi <alx swe>
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
	{
		return (0);
	}
}
