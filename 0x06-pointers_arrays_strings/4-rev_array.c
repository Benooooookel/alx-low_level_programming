/*
 * file: 4-rev_array.c
 * Auth: kelechi nnadi <alx swe>
 */
#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: the array pointer
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int idx, temp;

	for (idx = 0; idx <= n / 2; idx++)
	{
		temp = a[idx];
		a[idx] = a[n - idx - 1];
		a[n - idx - 1] = temp;
	}
}
