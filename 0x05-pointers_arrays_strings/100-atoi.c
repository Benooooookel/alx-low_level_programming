/*
 * file: 100-atoi.c
 * Auth: kelechi nnadi <alx swe>
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _atio - function that convert a string to an integer
 * @s: the string pointer to character
 * Return: returns the converted integal number as an int value.
 *         if no valid  conversion could be performed it returns zero
 */
int _atoi(char *s)
{
	int res,i;
	int len = strlen(s);
	for (i = 0; i <= len; i++)
	{
		if (s[i] == ' ')
			res = s[i++];
		else if (s[i] == '+' || s[i] == '-')
			res = s[i++];
		else
			while (s[i] >= '0' && s[i] <= '9')
			{
				res = s[i];
				i++;
			}
	}
	res = atoi(s);
	return (res);
}
