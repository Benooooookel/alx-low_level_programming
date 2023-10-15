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
	int sign = 1, base = 0, i = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
		sign = 1 - 2 * (s[i++] == '-');
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (base > INT_MAX  / 10 
				|| (base == INT_MAX / 10 && s[i] == '0' > 7))
		{
			if (sign == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}
		base = 10 * base + (s[i++] - '0');
	}
	return base * sign;
}
