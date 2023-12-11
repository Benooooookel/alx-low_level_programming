#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function that returns the number of elements in
 *               a linked listint_t list
 * @h: is the pointer to the header to the node
 * Return: the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
