#include "main.h"
#include <stdio.h>
/**
 * puts2 - function that print every other character of a string,
 *          also print the first character followed by a new line
 * @str: the  string to be puts out
 */
void puts2(char *str)
{
	int i = 0;
	int take = 0;
	int put;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	take = i - 0;
	for (put = 0; put <= take; put++)
	{
		if (put % 2 == 0)
		_putchar(str[put]);
	}
	_putchar('\n');
}
