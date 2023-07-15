#include <stdio.h>
/**
 * main - function that checks for uppercase and lower case
 *
 * Return: always 0
 */
int main(void)
{
	char cap = 'A';
	char low = 'a';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}
	while (cap <= 'Z')
	{
		putchar(cap);
		cap++;
	}
	putchar('\n');
	return (0);
}
