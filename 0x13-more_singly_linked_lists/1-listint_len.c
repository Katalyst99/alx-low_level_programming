#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: The listint_t list
 * Return: The number of elements in linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
