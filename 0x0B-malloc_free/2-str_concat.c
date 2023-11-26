/*
 * file: 2-str_concat.c
 * Auth: kelechi nnadi <@alx swe>
 */

#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function tha concatenates two strings
 * @s1: first string
 * @s2: the scecond string
 * Return: a pointer to a newly allocated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2, total;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	total = len1 + len2 + 1;

	ptr = malloc(sizeof(total));

	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);

	strcat(ptr, s2);

	return (ptr);
}
