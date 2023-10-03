#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_strcpy - function that copys the stringe pointed to scr
 *            including the terminating null byte('\0')
 *            followd by new line
 * @dest: is the destination where the string will be copied to
 * @src: is the string to be copied
 * Return: the destination of the copid string
 */
char *_strcpy(char *dest, char *src)
{
	int size = 0;

	while (src[size])
	{
		dest[size] = src[size];
		size++;
	}
	return (dest);
}
