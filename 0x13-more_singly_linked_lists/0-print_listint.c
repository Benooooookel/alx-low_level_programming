#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: the head of the element
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	 const listint_t *ptr;
	 size_t count = 0;

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
