/**
 * file: 100-print_times_tables.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <stdio.h>
#include "main.h"

/**
 * print_times_table - function that prints the n times, starting with 0
 *                     if n is greater than 15 or less than 0 the
 *                     should no print anything
 * @n: the print integer for the times table
 */
void print_time_table(int n)
{
	int row, col, times;
	
	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			times = row * col;

			if (n > 15 || n < 0)
			_putchar(times + '0');
			if (col > 9)
			{
				_putchar((times % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
