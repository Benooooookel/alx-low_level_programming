/*
 * 1-last_digit.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function that print the random number and create n and execute each
 *        time is called
 * Return: Always o
 */
int main(void)
{
	int n, res;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	res = n % 10;

	if (res > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, res);
	else if (res < 6 || res != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, res);
	else
		printf("Last digit of  %d is %d and is  0\n", n, res);

	return (0);
}
