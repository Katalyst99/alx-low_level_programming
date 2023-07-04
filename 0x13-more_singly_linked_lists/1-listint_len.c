#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: The list
 * Return: The number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int elements = 0;

	while (h != 0)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
