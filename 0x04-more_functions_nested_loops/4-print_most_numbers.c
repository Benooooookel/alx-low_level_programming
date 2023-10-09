/*
 * file: 4-print_most_numbers.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - functcion that prints the numbers, from 0 to 9
 *                      followed by a new line
 *                      it should not print the 2 and 4 in the code
 *                      and only use putchar function to print
 */
void print_most_numbers(void)
{
	int num = 0;

	for (; num < 10; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + '0');
	}
	_putchar('\n');
}
