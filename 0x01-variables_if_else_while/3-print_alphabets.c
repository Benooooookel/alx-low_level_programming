/*
 * file: 3-print_alphabets.c
 * Auth: kelechi nnadi <alx sw>
 */
#include <stdio.h>
/**
 * main  - function that prints the alphabet in lowercase
 * . and then in uppercase.
 *         followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int lower = 'A';
	int upper = 'a';

	while (upper <= 'z')
	{
		putchar(upper);
		upper++;
	}
	while (lower <= 'Z')
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
