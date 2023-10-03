#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: is the string
 * @b: is the char
 * @n: is the size
 * Return: the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
