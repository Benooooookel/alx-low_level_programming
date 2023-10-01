#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function that takes the users inputs and to guess  a number
 *
 */
int main(void)
{
	int n, i;

	srand(time(0));
	n = rand() % 10 + 1;

	do
	{
		printf("take a guess yandah:\n");
		scanf("%d", &i);

		if (n > i)
			printf("you guess is too high\n");
		else if (n < i)
			printf("you guess is too low\n");
		else
		{
			printf("congrate you made it\n");
			break;
		}
	}while (i != n);

	return (0);
}
