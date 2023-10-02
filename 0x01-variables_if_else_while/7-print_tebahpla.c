#include <stdio.h>
/**
 * main - function that print lowercase in alphabet in reverse, followed
 *        by a new line, all in reverse order
 * Auth: kelechi nnadi <alx swe>
 * Return: always 0
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
