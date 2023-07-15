#include <stdio.h>
/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
	{
		putchar(48 + a);
		if (a == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
