#include <stdio.h>
/**
 * main - function that print all possible combination of a single digits
 *
 * Auth: kelechi nnadi <alx swe>
 * Return: always 0
 */
int main(void)
{
	int comb = 0;

	while (comb < 10)
	{
		putchar(48 + comb);
		if (comb > 8)
			break;
		putchar(',');
		putchar(' ');
		++comb;
	}
	putchar('\n');
	return (0);
}
