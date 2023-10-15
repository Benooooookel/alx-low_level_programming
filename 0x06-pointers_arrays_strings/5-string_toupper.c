/*
 * file: 5-string_toupper.c
 * Auth: kelechi nnadi <alx swe>
 */
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - function that changes all lowercase letters of a string
 *                 to uppercase
 * @str: string to the pointer
 * Return: the charater to the pointer.
 */
char *string_toupper(char *str)
{
	int j = 0;

	while (str[j])
	{
		str[j] = toupper((unsigned char)str[j]);
		j++;
	}
	return (str);
}
