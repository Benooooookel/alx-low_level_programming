#include <stdio.h>
/**
 * main - function that print single digit numbers of base 10 from 0
 *
 * Auth: kelechi nnadi <alx swe>
 * Return: always 0
 */
int main(void)
{
	int numz = 0;

	while (numz < 10)
	{
		putchar(48 + numz);
		numz++;
	}
	putchar('\n');
	return (0);
}
