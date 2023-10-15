/*
 * file: 2-strncpy.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <string.h>
#include "main.h"

/**
 * _strcpy - function that copies a string
 * @dest: the pointer to the destination
 * @src: the pointer to the source string
 * @n: the number of times to be printed
 * Return: pointer to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
