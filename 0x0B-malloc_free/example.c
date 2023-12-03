#include <stdio.h>
#include <stdlib.h>

/**
 * array constant
 */
int main(void)
{
	int n;  //4
	char *ar;  // 8 byte

	n = 5;

	ar = malloc(n * sizeof(char));
	ar[0] = 'C';
	ar[1] = 'O';
	ar[2] = 'O';
	ar[3] = 'L';
	ar[4] = '\0';

	printf("%s\n", ar);

	return (0);
}
