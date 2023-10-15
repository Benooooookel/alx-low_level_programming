/*
 * file: 3-strcmp.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <string.h>
#include "main.h"

/**
 * _strcmp - function that compares two string
 * @s1: the first string pointer to be compared
 * @s2: thes second string pointer to be compared
 * Return: three different values 
 */
int _strcmp(char *s1, char *s2)
{
	int res = strcmp(s1, s2);
	return (res);
}
