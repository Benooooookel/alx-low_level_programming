#include <stdio.h>
#include "main.h"
/**
 * print_square - function that prints a square
 * @size: the size of the square, is size is  0 or less 
 *        the function should print only a new line
 *        the charater to use is # to print the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		char hash = '#';
		int row, col;

		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				if (col == row)
					_putchar(hash);
				else
					_putchar(hash);
			}
		_putchar('\n');	
		}
	}
}
