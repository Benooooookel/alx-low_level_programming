#include <stdio.h>
/**
 * main - function that checks code that print all except q and e
 *
 * Return: alway 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' ||  i == 'e')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
