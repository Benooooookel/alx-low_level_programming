/*
 * file: 6-puts.c
 * Auth: kelechi nnadi <alx swe>
 */
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - function that prints every other character of a string, starting
 *         with the first character followed by a new line
 * @str: is the parameter to pointer to a string
 */
void puts2(char *str)
{
	int len = strlen(str), i;
	char store;

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			store = str[i];
			_putchar(store);
		}
	}
	_putchar('\n');
}
