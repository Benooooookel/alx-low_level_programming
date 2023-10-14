/*
 * file: 9-strcpy.c
 * Auth: kelechi nnadi <alx swe>
 */
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - function that copies the string pointed by src
 *           including the terminating null byte(\0) to the buffer
 *           pointed to by dest.
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
