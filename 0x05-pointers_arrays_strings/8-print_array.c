/*
 * file: 8-print_array.c
 * Auth: kelechi nnadi <alx swe>
 */

#include "main.h"
#include <stdio.h>


/**
 * print_array - function that prints n elements of an array of integers
 *               followed by a new line, where n is the number of elements
 *               of the array to be printed, numbers mus be separeted by
 *               comma, followed by a space
 *               numbers must be displayed in the same order as they are
 *               stored in the array. printf function is allowed
 * @a: the pointer to an array
 * @n: the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		printf("%d, ", a[idx]);
	}
	printf("\n");
}
