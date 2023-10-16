/*
 * file: 0-strcat.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <string.h>
#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destination pointer that points to destination
 * @src: source pointer that source of the string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
