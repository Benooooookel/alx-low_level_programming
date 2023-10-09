/*
 * file: 7-diagonals.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - function that prints a diagonal line in the terminal
 *                  you can only use _putchar function on it
 *                  where n is the number of times the character \ should
 *                  be printed, should also end with a new line
 *                  if n is 0 or less, the function should only print a \n
 * @n: the parameter to be printed
 */
void print_diagonal(int n)
{
	int row, col;
	char diag = '\\';

	for (row = 0; row < n; row++)
	{
		for (col = 0; col < n; col++)
		{
			_putchar(diag);
		}
		_putchar('\n');
	}
}
