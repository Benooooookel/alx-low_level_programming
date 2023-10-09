/*
 * file: 6-print_liine.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <stdio.h>
#include "main.h"
/**
 * print_line - function that print a straight line in the terminal
 *              you can only use _putchar funtion to print
 *              where n is the number of times the charater _ should
 *              be printed the line should end with a new line
 *              if n is 0 or less, the function should only print \n
 * @n: the parameter number to print the line
 */
void print_line(int n)
{
	int itra;

	for (itra = 0; itra < n; itra++)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar('_');
	}
	_putchar('\n');
}
