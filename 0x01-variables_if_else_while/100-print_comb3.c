#include <stdio.h>
/**
 * main - checks the code
 *
 * Return: always 0
 */
int main(void)
{
	int a = 0,b = 1;

	for (a = 0; a < 9; a++)
	{
		for (b = 1 + a; b < 10; b++)
		{		
			putchar(48 + a);
			putchar(48 + b);
			if (a >= 8 && b >= 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
