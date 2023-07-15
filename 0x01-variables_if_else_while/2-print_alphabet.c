#include <stdio.h>
/**
 * main - checks the code
 *
 * Return: alway 0
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
