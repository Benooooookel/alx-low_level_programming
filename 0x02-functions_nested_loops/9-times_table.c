#include "main.h"
#include <stdio.h>

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Auth: kelechi nnadi <alx swe>
 */
void times_table(void)
{
	int width, col, res;

	for (width = 0; width <= 9; width++)
	{
		for (col = 0; col <= 9; col++)
		{
			res = width * col;
			if (col == 0)
				printf("%2d", res);
			else
				printf(", %2d", res);
		}
		printf("\n");
	}
}
