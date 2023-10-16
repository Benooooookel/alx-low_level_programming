/*
 * file: 0-whatsmyname.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: the count of the argument line
 * @argv: the argument vector
 * Return: system exit
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	exit(0);
}
