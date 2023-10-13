/*
 * file: 1-swap.c
 * Auth: kelechi nnadi <alx swe>
 */
#include "main.h"
/**
 * swap_int - function  that swaps the values of two integers
 * @a: the first parameter
 * @b: the second parameter
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
