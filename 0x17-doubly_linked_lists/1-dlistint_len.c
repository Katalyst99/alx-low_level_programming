#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: The head of linked dlistint_t list.
 *
 * Return: The number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_e = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h)
	{
		num_e++;
		h = h->next;
	}
	return (num_e);
}
