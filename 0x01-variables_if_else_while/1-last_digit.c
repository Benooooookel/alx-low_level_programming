/* Auth: kelechi nnaid <alx swe> */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - function that checks the code and return a random number
 * each time the code is executed and it returns the last digit
 *
 * Return: always 0
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last  = n % 10;

	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last < 6 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 not 0\n", n, last);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	return (0);
}
