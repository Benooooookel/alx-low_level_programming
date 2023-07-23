#include <stdio.h>
#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: the size of the triangle if size is 0 or less
 *        the function should print only a new line
 *        use the charater # to print the triangle
 */
void print_triangle(int size)
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
				if (col != row)
				{
					_putchar(hash);
				}
				else if (col <= row)
				{
					_putchar(hash);
				}
			}
			_putchar('\n');
		}
	}
}
