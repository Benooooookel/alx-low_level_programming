#include <stdio.h>
/**
 * main - checks the code
 *
 * Return: always 0
 */
int main(void)
{
	char hex = 48;
	int alpha  = 97;

	while (hex <= 57)
	{
		putchar(hex);
		hex++;
	}
	while (alpha <= 102)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
