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
	char *word[] = {"FIZZ","FIZZBUZZ","BUZZ"};

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("%s ", word[1]);
			continue;
		}
		if (num % 3 == 0)
		{
			printf("%s ", word[0]);
			continue;
		}
		if (num % 5 == 0)
		{
			printf("%s ", word[2]);
			continue;
		}	
		printf("%d ", num);
	}
	putchar('\n');
}
