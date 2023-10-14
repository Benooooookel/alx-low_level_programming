/*
 * file: 6-puts.c
 * Auth: kelechi nnadi <alx swe>
 */
#include "main.h"
#include <stdio.h>

/**
 * puts2 - function that prints every other character of a string, starting 
 *         with the first character followed by a new line
 * @str: is the parameter to pointer to a string
 */
void puts2(char *str)
{
	int i = 0;
	char *temp, store;

	for (; i < *str; i++)
	{
		temp = "i, 3, 5, 7";
		if (str[i] != *temp)
		{
			store = str[i];
			_putchar(store);
		}
	}
}
