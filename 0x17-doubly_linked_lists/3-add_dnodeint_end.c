#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: The head of dlistint_t list.
 * @n: The data to be contained in the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *node_end;

	node_end = malloc(sizeof(dlistint_t));

	if (node_end == NULL)
	{
		return (NULL);
	}

	node_end->n = n;
	node_end->next = NULL;

	if (*head == NULL)
	{
		node_end->prev = NULL;
		*head = node_end;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		node_end->prev = tmp;
		tmp->next = node_end;
	}
	return (node_end);
}
