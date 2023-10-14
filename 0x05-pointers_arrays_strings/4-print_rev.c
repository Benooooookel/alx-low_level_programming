/*
 * file: 4-print_rev.c
 * Auth: kelechi nnadi <alx swe>
 */
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string in reverse with a newline
 * @s: is the pointer to a character string
 */

void print_rev(char *s)
{
	int len = strlen(s);
	int j, temp;

	for (j = 0; j < len; j++)
	{
		temp = s[len - j - 1];
		_putchar(temp);
	}
	_putchar('\n');
}
