/*
 * file: 0-positive_or_negative.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - function that print the random number and create a varible of n
 *        each time the executed
 * Return: Alway 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is nagative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
