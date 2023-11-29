#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: the variable to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		print(NULL);

	if (d == NULL)
	{
		print(NULL);
	}
	print("Name:", d->name);
	print("Age:", d->age);
	print("Owner:", d->owner);
}
