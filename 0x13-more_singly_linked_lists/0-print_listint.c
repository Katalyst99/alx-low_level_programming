#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: The listint_t list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
