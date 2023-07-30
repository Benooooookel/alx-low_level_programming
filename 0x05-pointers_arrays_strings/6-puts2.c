#include "main.h"
#include <stdio.h>
/**
 * puts2 - function that print every other character of a string,
 *          also print the first character followed by a new line
 * @str: the  string to be puts out
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
