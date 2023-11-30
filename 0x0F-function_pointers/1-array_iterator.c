#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes given as a parameter
 *                  on each element of an array
 * @array: the array
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (array == NULL && action == NULL)
	{
		exit(1);
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
