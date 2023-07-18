#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _abs - function that prints the absolute value of an integer
 * @a: number to print the absolute number
 * Return: the absolute number of an integer
 */
int _abs(int a)
{

	if (a >= 1)
	{
		return (1);
	}
	else if (a == 0)
	{
		return (0);
	}
	else
	{
		return (-a);
	}
}
