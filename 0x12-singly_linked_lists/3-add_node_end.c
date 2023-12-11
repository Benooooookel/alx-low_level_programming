#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t
 *                list.
 * @head: the pointer to the head of the function.
 * @str: the pointer to the group of functions in a code
 * Return: the address of the new element, NUll if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	ptr = (*head);

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->next = NULL;

	if (ptr == NULL)
		*head = temp;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = temp;
	}

	return (temp);
}
