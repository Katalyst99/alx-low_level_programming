#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: The head of dlistint_t linked list.
 * @index: The index of the node
 * Return: The nth node, if node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int node = 0;

	while (tmp && node < index)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
		tmp = tmp->next;
		node++;
	}
	return (tmp);
}
