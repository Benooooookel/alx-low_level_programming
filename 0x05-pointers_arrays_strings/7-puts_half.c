/*
 * file: 7-puts_half.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - function that prints the half of a string
 *             followed by new line. the function should print
 *             the second half of the string
 *             if the number of the second character is odd, the
 *             function should print the last n characters of the string, where
 *             n = (length_of_the_string - 1) / 2
 * @str: the pointer to a string char
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int mid = len / 2, i;
	int n = (len - 1) / 2;
	char temp;

	for (i = mid; i <= len - 1; i++)
	{
		if (i % 1 == 1)
			_putchar(n + '0');
		temp = str[i];
		_putchar(temp);
	}
	_putchar('\n');
}
