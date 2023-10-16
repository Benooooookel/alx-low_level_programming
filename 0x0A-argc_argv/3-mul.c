/*
 * file: 3-mul.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 *        the program should multiply the result and print
 * 
 * @argc: the number count of argument
 * @argv: the array of string
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 1;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] != 2)
		{
			printf("Error\n");
			exit(1);
		}
		sum = sum * atoi(argv[i]);
	}
	printf("%d\n", sum);
	exit(0);
}
