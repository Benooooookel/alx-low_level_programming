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
	int loop;

	while (num % 2 == 0)
	{
		printf("%d", 2);
		num = num / 2;
	}

	for (loop = 2; loop * loop <= num; loop = loop + 2)
	{
		while (num % loop == 0)
		{
			printf("%d", loop);
			num  = num / loop;
		}
	}

	if (num > 2)
		printf("%ld", num);
	return (0);
}
