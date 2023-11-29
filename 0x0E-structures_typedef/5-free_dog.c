#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees dogs
 * @d: the dog pointer
 */
void free_dog(dog_t *d)
{
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return;
	free(d);
}
