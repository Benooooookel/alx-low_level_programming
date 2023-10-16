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
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d \n", argc * argc);
	
	if (argc == 1)
	{
		exit(EXIT_FAILURE);
		return (1);
	}
	return (0);
}
