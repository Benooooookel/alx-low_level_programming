#include <stdio.h>
/**
 * main - function that prints all possible different
 *        combination of two digits
 * Auth: kelechi nnaid <alx swe>
 * Return: always 0
 */
int main(void)
{
	int n = 0, m = 1;

	while (n <= 8)
	{
		while (m <= 9)
		{
			putchar(n + '0');
			putchar(m + '0');
			
			if (n != 8 || m != 9)
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
		m = n + 1;
	}
	putchar('\n');
	return (0);
}
