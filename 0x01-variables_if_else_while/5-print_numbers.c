#include <stdio.h>
/**
 * main - function that print all single digit from 0 to base 10
 *
 * Auth: kelechi nnadi <alx swe>
 *
 * Return: alway 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(48 + num);
		num++;
	}
	putchar('\n');
	return (0);
}
