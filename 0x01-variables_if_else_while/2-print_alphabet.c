/*
 * file: 2-print_alphabet.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <stdio.h>
/**
 * main - function that print print alphabet from a to z with a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
