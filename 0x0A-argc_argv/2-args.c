#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that print all argruments it receives
 *        all argruement should be printed including the first one
 *        oney print one argurment par line ending with a new line
 * @argc: the number of argument or count passed in the function
 * @argv: the array of argurment of the string passed to the function
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
