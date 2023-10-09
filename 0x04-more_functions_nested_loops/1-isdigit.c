/*
 * file: 1-isdigit.c
 * Auth: kelechi nnadi <alx-swe>
 */
#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isdigit - function that checks for a digit 0 through 9
 * @c: the parameter
 * Return: if c is digit return 1 otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
