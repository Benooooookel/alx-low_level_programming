/**
 * file: 0-isupper.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <ctype.h>
#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: the parameter to be called on
 * Return: checks if c is uppercase returns 1 else return 0
 */
int  _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
