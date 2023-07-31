#include <stdio.h>
#include "main.h"
/**
 * print_array - function that print n element to an array of integers
 *               followed by a new line.
 * @n: where n is the number of elements of the array to be printed
 *     the numbers printed will be separated by comma, followed  by space
 *     and must be arrange in the order of display.
 * @a: is the pointer of the array being provided in the code
 */
void print_array(int *a, int n)
{
	int index = 0;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
