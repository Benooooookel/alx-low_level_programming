#include <stdio.h>
/**
 * main - function that prints all possible combiantion of two digits
 * Auth: kelechi nnadi <alx swe>
 * Return: always 0
 */
int main(void)
{
	int digit1 = 0;

	while (digit1 <= 10)
	{
		int digit2 = digit1 + 1;
		while (digit2 <= 10)
		{
			putchar(digit1 + '0');
			putchar((digit1 / 10) + '0');
			putchar(',');
			putchar(' ');
			putchar(digit2 + '0');
			putchar((digit2 % 10) + '0');
			digit2++;
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
