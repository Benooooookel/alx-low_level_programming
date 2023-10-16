/*
 * file: 1-args.c
 * Auth: kelechi nnadi <alx swe>
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program tha prints the number of  argument passee into it
 * @argc: the number of arguemnt in the command line
 * @argv: the number of array in the command line
 * Return: Always 0;
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	exit(0);
}
