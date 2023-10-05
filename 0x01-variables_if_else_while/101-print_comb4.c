#include <stdio.h>
/**
 * main - function that prints all possible combination of three digits
 *        must seperate by , and a space, the number must be three digits
 * Auth: kelechi nnadi < alx swe>
 * Return: always 0
 */
int main(void)
{
	int digit1 = 0;

	while (digit1 <= 7)
	{
		int digit2 = digit1 + 1;
		while (digit2 <= 8)
		{
			int digit3 = digit2 + 1;
			while (digit3 <= 9)
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(digit3 + '0');
				if (digit1 != 7 || digit2 != 8 || digit3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
