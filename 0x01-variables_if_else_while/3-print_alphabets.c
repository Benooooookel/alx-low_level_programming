/* kelechi nnadi*/
#include <stdio.h>
/**
 * main - checks the code
 *
 * Return: always 0
 */
int main(void)
{
	char upper_case = 'A', lower_case = 'a';

	while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}
	while (upper_case <= 'Z')
	{
		putchar(upper_case);
		upper_case++;
	}
	putchar('\n');
	return (0);
}
