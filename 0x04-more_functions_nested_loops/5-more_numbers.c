/*
 * file: 5-more_numbers.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function that print 10 times the numbers, from 0 to 14
 *                followed by a new line
 *                using only putchar
 */
void more_numbers(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 14; col++)
		{
			if (col > 9)
				_putchar((col / 10) + '0');
			_putchar((col % 10) + '0');
		}
		_putchar('\n');
	}
}
