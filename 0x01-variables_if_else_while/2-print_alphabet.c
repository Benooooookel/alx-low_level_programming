#include <stdio.h>
/**
 * main - function that prints the alpabetic characters from a to z
 *         the charaters should be in lowercase and print a newline
 * Return: always 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
