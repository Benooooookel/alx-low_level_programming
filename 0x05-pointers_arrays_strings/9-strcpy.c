#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_strcpy - function that copys the stringe pointed to scr
 *            including the terminating null byte('\0')
 *            followd by new line
 * @dest: is the destination where the string will be copied to
 * @scr: is the string to be copied
 */
char *_strcpy(char *dest, char *src)
{
	int size = 0;

	while (src[size] != '\0')
	{
		dest[size] = src[size];
		size++;
	}
	for (; size < dest[size]; size++)
		dest[size] = '\0';
	printf("\n");
	return (dest);
}
