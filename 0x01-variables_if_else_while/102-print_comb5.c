#include <stdio.h>
/**
 * main  - checks the code
 *
 * Return: always 0;
 */
int main(void)
{
	int a, b;

	for (a = 1; a < 9; a++)
	{
		for (b = 0; b < 10; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (a >= 9 && b >= 9)
				continue;
			putchar(',');
			putchar(' ');
		}	
	}
	putchar('\n');
	return (0);
}
