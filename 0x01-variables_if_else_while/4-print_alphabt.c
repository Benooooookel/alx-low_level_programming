/* Auth: kelechi nnadi <alx swe> */
#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase,
 *        followed by newline
 * Return: always 0
 */
int main(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
