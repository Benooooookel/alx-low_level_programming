#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - function that computes the absolute value of an integer
 * @n: is the number to return
 * Return: the absolute function of a integer
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
