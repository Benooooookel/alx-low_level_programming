/*
 * file: 6-cap_string.c
 * Auth: kelechi nnadi <alx swe>
 */
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - function that catpitalize all words of a string
 * @s: character to an array function
 * Return: a charater of string
 */
char *cap_string(char *s)
{
	int idx, len = strlen(s);

	for (idx = 0; idx < len; idx++)
	{
		if (s[idx] == ' ' || s[idx] == '.' || s[idx] == '-' || s[idx] == '\t')
			s[idx + 1] = toupper(s[idx + 1]);
		else if (s[idx] == 6 || s[idx] == '\n')
			s[idx + 1] = toupper(s[idx + 1]);
	}
	return (s);
}
