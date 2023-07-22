#include <stdio.h>
#include <stdlib.h>
void fizz_buzz(void);
/**
 * main - checks the code
 *
 * Return: Always 0
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
/**
 * fizz_buzz - function that print number for 1 to 100
 *
 * Return: nothing
 */
void fizz_buzz(void)
{
	int num;
	char word[] = "FIZZ", war[] = "FIZZBUZZ";

	for (num = 1; num <= 100; num++)
	{
		if (num > 9)
			putchar(num / 10 + '0');
		printf("%s", war);
		putchar(num % 10 + '0');
		putchar(' ');
		printf("%s", word);
	}
	putchar('\n');
}
