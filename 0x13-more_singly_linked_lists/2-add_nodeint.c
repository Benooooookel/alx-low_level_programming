#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function that adds a new node at the beginning of a
 *               listint_t list
 * @head: is the pointer to the head of the list
 * @n: the data value to be added to the data part
 * Returns: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	ptr->n = n;
	ptr->next = NULL;

	ptr->next = head;
	
	head = ptr;
	return (head);
}
