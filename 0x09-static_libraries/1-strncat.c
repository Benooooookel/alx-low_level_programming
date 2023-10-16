/*
 * file: 0-strncat.c
 * Auth: kelechi nnadi <alx swe>
 */
#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenate two string with n number
 * @dest: the destination pointer
 * @src: the scource where string to be cancatenated
 * @n: the number of bytes to contcat src
 * Return: the pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
