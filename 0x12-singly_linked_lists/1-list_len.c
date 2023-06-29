#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: The list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != 0)
	{
		i++;
		h = h->next;
	}
	return (i);
}
