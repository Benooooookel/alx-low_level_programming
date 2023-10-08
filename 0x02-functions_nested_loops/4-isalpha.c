#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * _isalpha - function that check for alphabetic character
 * @c: the parameter
 * Return: if c is a letter, lowercase or uppercase returns 1
 *        else return 0
 * Auth: kelechi nnadi <alx swe>
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
