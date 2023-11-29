#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initalize a variable of type struct dog
 * @d: the dog sturct
 * @name: the pointer to the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
