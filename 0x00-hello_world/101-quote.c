#include <unistd.h>
#include <stdio.h>
/**
 * main - function that print exactly the code string
 *
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
