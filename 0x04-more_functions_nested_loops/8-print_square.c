/*
 * file: 8-print_square.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <stdio.h>
#include "main.h"

/**
 * print_square - function that prints a square, followed by new line
 *                you can only use _putchar function to print
 *                where size is the size fo the square
 *                if size is 0 or less, the function should print only a
 *                a new line
 *                use the character # to print the square
 * @size: the number needed
 */
void print_square(int size)
{
	int row, col;
	char square = '#';

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (size < 0 && size == 0)
				_putchar('\n');
			_putchar(square);
		}
		_putchar('\n');
	}
}
