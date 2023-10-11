/*
 * file: 100-prime_factor.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <stdio.h>
/**
 * main - function that finds and prints the largest prime factor of the number
 */
int main(void)
{
	long int num = 612852475143;
	int i;

	while (num % 2 == 0)
	{
		printf("%d ", 2);
		num = num/2;
	}

	for (i = 3; i*i <= num; i = i + 2)
	{
		while (num % i == 0)
		{
			printf("%d ", i);
			num = num/i;
		}

		if (num > 2)
			printf ("%ld ", num);
	}
	printf("\n");
	return (0);
}
