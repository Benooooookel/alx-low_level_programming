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

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FIZZBUZZ ");
		}
		else if (num % 3 == 0 && num % 5 != 0)
		{
			printf("FIZZ ");
		}
		else if (num % 5 == 0 && num % 3 != 0)
		{
			printf("BUZZ ");
		}
		else if (num == 1)
		{
			printf("%d ", num);
		}
		else
		{
			printf("%d ", num);
		}
	}
	putchar('\n');
}
