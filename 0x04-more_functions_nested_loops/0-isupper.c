/**
 * file: 0-isupper.c
 * Auth: kelechi nnadi <alx swe>
 */

#include <ctype.h>
#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks for  uppercase character
 * @c: the parameter number
 * Return: if c is uppercase return 1 else return 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
