#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - function tha prints all the elements of a list_all list
 * @h: the pointer to the list
 * Return the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("%s\n", h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		h = h->next;
		node_count++;
	}

	return (node_count);
}
