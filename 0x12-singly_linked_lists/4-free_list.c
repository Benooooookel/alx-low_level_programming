#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * free_list - function that frees a list_t list
 * @head: the head of the function
 */
void free_list(list_t *head)
{
	list_t *current, *new;

	current = head;
	
	while (current != NULL)
	{
		new = current->next;
		free(current->str);
		free(current);
		current = new;
	}
}
