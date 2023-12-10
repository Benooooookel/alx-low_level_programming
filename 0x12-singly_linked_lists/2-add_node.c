#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - function that add a new node at the beginning of a list_t
 *            list
 * @head: is the pointer to the head.
 * @str: a pointer to a string of charaters
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (new);
}
