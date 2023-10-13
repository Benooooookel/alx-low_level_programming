/*
 * file: 2-strlen.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <string.h>
#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string pointer
 * Return: the number of bytes in the string pointed to by s
 */
int _strlen(char *s)
{
	int result;

	result = strlen(s);
	return (result);
}
