/*
 * file: 4-print_alphabt.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <stdio.h>
/**
 * main - function that print the alphabe in lowercase and a new line
 * Return: always 0
 */
int main(void)
{
	int alph = 'a';

	for (; alph <= 'z'; alph++)
	{
		if (alph == 'e' || alph == 'q')
			continue;
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
