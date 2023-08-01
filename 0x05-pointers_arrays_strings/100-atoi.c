#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: the string to be converted to integer
 */
int _atoi(char *s)
{
	int index = 0;

	while (s[index])
	{
		s++;
		index++;
	}
	return (*s);
}
