/*
 * file: 5-rev_string.c
 * Auth: kelechi nnadi <alx swe>
 */
#include "main.h"
#include <string.h>

/**
 * rev_string  - function that reverse a string by swaping the characters
 * @s: the parameter that points to a character string
 */
void rev_string(char *s)
{
	int j;
	char temp;

	int len = strlen(s);
	int middle = len / 2;

	for (j = 0; j < middle; j++)
	{
		temp = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = temp;
	}
}
