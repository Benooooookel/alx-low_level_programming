#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * int_index - function that searches for an integer
 * @array: the array to the function
 * @size: is s pointer to the function to be used to compare values
 * @cmp: function that calls a function int
 * Return: return the index of the first element for which the cmp
 *         function dose not return 0
 *         if no element matches, return -1
 *         if size <= 0, return -1;
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j = 0;

	if (array == NULL || cmp == NULL)
	{
		exit(1);
	}
	for (i = 0; i < size; i++)
	{
		 j = cmp(array[i]);
	}
	return (j);
}
