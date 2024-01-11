#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: Pointer to head of dlistint_t linked list
 * @idx: The index of the list where the new node should be added
 * @n: The integer to be addded to new node
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n, *tmp = *h;
	unsigned int i;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}


	for (i = 0; i < idx - 1; i++)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
		tmp = tmp->next;
	}

	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
	{
		return (NULL);
	}
	else
	{
		new_n->n = n;
		new_n->next = tmp->next;
		new_n->prev = tmp;
		tmp->next->prev = new_n;
		tmp->next = new_n;
	}
		return (new_n);
}
