#include "main.h"
#include <stdio.h>
/**
 * puts2 - function that print every other character of a string,
 *          also print the first character followed by a new line
 * @str: the  string to be puts out
 */
void puts2(char *str)
{
	int index = 0, lent = 0;

	while (str[index++])
		lent++;
	for (index = 0; index < lent; index += 2)
		_putchar(str[index]);
	_putchar('\n');
}
