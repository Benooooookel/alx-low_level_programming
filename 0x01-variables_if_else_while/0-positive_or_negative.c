#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - function that returns tha nagative and positive
 * random number of an integer using rand fun
 *
 * Auth: kelechi nnadi <alx swe>
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)d
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
