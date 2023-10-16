/*
 * file: 4-add.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that add positive numbers.
 * @argc: the number of counts
 * @argv: the array to string of char
 * Return: 0 if successful else return 1
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	else if (!(argc >= 0 || argc <= 9))
	{
		printf("Error\n");
		exit(1);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	exit(0);
}
