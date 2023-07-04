#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: The list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nds = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		nds++;
	}
	return (nds);
}
