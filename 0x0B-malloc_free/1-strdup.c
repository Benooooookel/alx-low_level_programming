#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 *           in memory, contains a copy of the string given as a parameter
 * @str: the string pointer
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = strdup(str);
	if (ptr == NULL)
	{
		return(NULL);
	}
	return (ptr);
}
