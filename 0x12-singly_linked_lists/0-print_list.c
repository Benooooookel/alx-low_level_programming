#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - function tha prints all the elements of a list_all list
 * @h: the pointer to the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = NULL;

	size_t node_count = 0;

	ptr = (h);
	while (ptr != NULL)
	{
		if (ptr->str != NULL)
			printf("[%u] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		ptr = ptr->next;
		node_count++;
	}
	return (node_count);
}
