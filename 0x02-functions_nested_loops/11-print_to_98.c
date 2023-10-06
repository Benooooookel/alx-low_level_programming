#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - function that print all numbers to 98
 *
 * @n: is the number of the parameter to take
 * Auth: kelechi nnadi
 */
void print_to_98(int n)
{
	int last = 98;

	while (n <= last)
	{
		printf("%d, ", n);
		n--;
	}
	while (n >= last)
	{
		printf("%d, ", n);
		n++;
	}
}
