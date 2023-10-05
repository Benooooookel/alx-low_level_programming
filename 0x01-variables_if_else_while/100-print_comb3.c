#include <stdio.h>
/**
 * main - function that prints all possible different
 *        combination of two digits
 * Auth: kelechi nnaid <alx swe>
 * Return: always 0
 */
int main(void)
{
	int digit1 = 0, digit2 = 2;

	while (digit1 <= 8)
	{
		while (digit2 <= 9)
		{
			putchar(digit1 + '0');
			putchar(digit2 + '0');
			
			if (digit1 != 8 || digit2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
			digit2++;
		}
		digit1++;
		digit2 = digit1 + 1;
	}
	putchar('\n');
	return (0);
}
