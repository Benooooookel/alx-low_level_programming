#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function that create new dog
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
