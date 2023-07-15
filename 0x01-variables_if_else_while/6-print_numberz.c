#include <stdio.h>
/**
 * main - check of code
 *
 * Return: always 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(48 + num);
		num++;
	}
	putchar('\n');
	return (0);

}
