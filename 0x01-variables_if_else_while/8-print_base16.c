#include <stdio.h>
/**
 * main - function tha prints all base 16 numbers in lowercase
 *        and a new line
 * Auth: kelechi nnadi <alx swe>
 * Return: always 0
 */
int main(void)
{
	int num = 48;
	char alpha = 97;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	while (alpha <= 102)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
